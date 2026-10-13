#!/usr/bin/env python3
"""
=============================================================================
Harvest Moon: Friends of Mineral Town - Metasprite & Animation Assembly Dumper
Based on Denisovich728's Symphony Metasprite Engine (FoMT Studio)

Extracts ONLY assembly information, mathematical structures, and manifests:
1. 16-color Palettes (RGB/BGR555 metadata JSON) for NPCs, Animals, Tools, Items
2. OAM Math & Metasprite Geometry (Attribute Lookups 0x139C14 / 0x139C98)
3. Animation Scripts, State Opcodes (0xB1-0xCE), Timing Delays (0x80-0xB0)
4. Sprites Catalog & Animation Manifests for pret-style C decompression

LEGAL COMPLIANCE:
No copyrighted graphical raster assets (.png, .bmp) are generated or committed.
=============================================================================
"""

import os
import sys
import struct
import json
import csv
import re

ROM_PATH = r"j:\Laboratorio\GBA-Decompiler-FINIS-OMNIVM-IMPOSSIBILIVM\roms\fomt virgen.gba"
SPRITE_CSV = r"j:\Laboratorio\FOMT_Studio\Banco_de_Datos\Cilixes\fomt\Fomt_Sprite_data.csv"
ANIM_CSV = r"j:\Laboratorio\FOMT_Studio\Banco_de_Datos\Cilixes\fomt\Fomt_Animations.csv"
ANIM_BASE_CSV = r"j:\Laboratorio\FOMT_Studio\Banco_de_Datos\Cilixes\fomt\Fomt_Animations_Base.csv"

OUT_ASSETS = r"j:\Laboratorio\harvest_moon_fomt_decomp\assets"
OUT_SPRITES = os.path.join(OUT_ASSETS, "sprites")
OUT_ANIMS = os.path.join(OUT_ASSETS, "animations")
OUT_PALETTES = os.path.join(OUT_ASSETS, "palettes")

OAM_DIMS = {
    (0, 0): (8, 8),   (0, 1): (16, 16), (0, 2): (32, 32), (0, 3): (64, 64),
    (1, 0): (16, 8),  (1, 1): (32, 8),  (1, 2): (32, 16), (1, 3): (64, 32),
    (2, 0): (8, 16),  (2, 1): (8, 32),  (2, 2): (16, 32), (2, 3): (32, 64)
}

class SymphonyAssemblyDumper:
    def __init__(self, rom_path):
        with open(rom_path, 'rb') as f:
            self.rom = f.read()
        print(f"[+] Loaded ROM: {len(self.rom)} bytes ({self.rom[0xA0:0xAC].decode('ascii', errors='ignore')})")
        os.makedirs(OUT_SPRITES, exist_ok=True)
        os.makedirs(OUT_ANIMS, exist_ok=True)
        os.makedirs(OUT_PALETTES, exist_ok=True)

    def parse_hex_offset(self, val_str):
        val_str = val_str.strip()
        if ' ' in val_str:
            b = bytes([int(x, 16) for x in val_str.split()])
            return struct.unpack('<I', b)[0]
        else:
            return int(val_str, 16)

    def load_palette(self, pal_offset):
        raw_colors = []
        rgb_list = []
        pal_data = self.rom[pal_offset : pal_offset + 32]
        for i in range(16):
            if i * 2 + 1 < len(pal_data):
                c = struct.unpack_from('<H', pal_data, i * 2)[0]
                r = (c & 0x1F) * 8
                g = ((c >> 5) & 0x1F) * 8
                b = ((c >> 10) & 0x1F) * 8
                raw_colors.append(c)
                rgb_list.append((r, g, b))
            else:
                raw_colors.append(0)
                rgb_list.append((0, 0, 0))
        return rgb_list, raw_colors

    def dump_sprites_metadata(self):
        print(f"[*] Dumping sprite assembly metadata from {SPRITE_CSV}...")
        sprites_meta = []
        
        with open(SPRITE_CSV, 'r', encoding='utf-8') as f:
            reader = csv.reader(f)
            header = next(reader)
            
            for row in reader:
                if len(row) < 3 or not row[0].strip() or not row[1].strip():
                    continue
                name = row[0].strip().replace(' ', '_').replace('/', '_')
                gfx_off = self.parse_hex_offset(row[1]) & 0x01FFFFFF
                pal_off = self.parse_hex_offset(row[2]) & 0x01FFFFFF
                
                rgb_pal, raw_pal = self.load_palette(pal_off)
                
                pal_meta = {
                    "sprite_name": name,
                    "rom_palette_offset": hex(pal_off),
                    "rom_palette_ptr": hex(pal_off | 0x08000000),
                    "colors_rgb": rgb_pal,
                    "raw_bgr555": [hex(c) for c in raw_pal]
                }
                pal_file = os.path.join(OUT_PALETTES, f"{name}_pal.json")
                with open(pal_file, 'w', encoding='utf-8') as pf:
                    json.dump(pal_meta, pf, indent=4)
                    
                sprites_meta.append({
                    "name": name,
                    "gfx_offset": hex(gfx_off),
                    "gfx_pointer": hex(gfx_off | 0x08000000),
                    "pal_offset": hex(pal_off),
                    "pal_pointer": hex(pal_off | 0x08000000),
                    "palette_file": f"{name}_pal.json",
                    "estimated_tile_count": 192,
                    "sheet_grid": "16x12_tiles"
                })
                
        catalog_path = os.path.join(OUT_SPRITES, "sprites_catalog.json")
        with open(catalog_path, 'w', encoding='utf-8') as f:
            json.dump(sprites_meta, f, indent=4)
            
        print(f"[+] Dumped {len(sprites_meta)} sprite assembly manifests and palettes (zero PNGs).")
        return sprites_meta

    def parse_oam_math(self, arg1, arg2):
        if 0x139C14 + arg1 >= len(self.rom):
            return {'x': 0, 'y': 0, 'shape': 0, 'size': 0, 'attr0': 0, 'attr1': 0}
        r6 = self.rom[0x139C14 + arg1]
        lower = r6 & 15
        upper = r6 >> 4
        
        r0_lower = (lower * 2) + arg2
        r0_upper = (upper * 2) + arg2
        
        if 0x139C98 + r0_lower + 2 > len(self.rom) or 0x139C98 + r0_upper + 2 > len(self.rom):
            return {'x': 0, 'y': 0, 'shape': 0, 'size': 0, 'attr0': 0, 'attr1': 0}
            
        attr1 = struct.unpack('<H', self.rom[0x139C98 + r0_lower : 0x139C98 + r0_lower + 2])[0]
        attr0 = struct.unpack('<H', self.rom[0x139C98 + r0_upper : 0x139C98 + r0_upper + 2])[0]
        
        y = attr0 & 0xFF
        if y > 127: y -= 256
        shape = (attr0 >> 14) & 3
        
        x = attr1 & 0x1FF
        if x > 255: x -= 512
        size = (attr1 >> 14) & 3
        
        dims = OAM_DIMS.get((shape, size), (8, 8))
        
        return {
            'x': x,
            'y': y,
            'shape': shape,
            'size': size,
            'width': dims[0],
            'height': dims[1],
            'attr0': hex(attr0),
            'attr1': hex(attr1)
        }

    def parse_anim_script(self, script_addr):
        offset = script_addr & 0x01FFFFFF
        frames = []
        last_cmd = None
        count = 0
        max_ops = 500
        
        while offset < len(self.rom) and count < max_ops:
            count += 1
            b0 = self.rom[offset]
            offset += 1
            
            if b0 == 0xBD:
                break
                
            if b0 < 0x80:
                arg1 = b0
                arg2 = self.rom[offset] if offset < len(self.rom) else 0
                offset += 1
                oam = self.parse_oam_math(arg1, arg2)
                frames.append({
                    'cmd': hex(last_cmd) if last_cmd is not None else "0x0",
                    'type': 'draw',
                    'arg1': arg1,
                    'arg2': arg2,
                    'oam': oam,
                    'delay': 2
                })
            elif 0x80 <= b0 <= 0xB0:
                wait_frames = b0 - 0x80
                if frames and frames[-1]['type'].startswith('draw'):
                    frames[-1]['delay'] = wait_frames
                else:
                    frames.append({
                        'cmd': hex(b0),
                        'type': 'wait',
                        'delay': wait_frames
                    })
            elif 0xB1 <= b0 <= 0xCE:
                last_cmd = b0
            elif b0 >= 0xCF:
                if offset + 1 >= len(self.rom):
                    break
                arg1 = self.rom[offset]
                arg2 = self.rom[offset + 1]
                offset += 2
                last_cmd = b0
                oam = self.parse_oam_math(arg1, arg2)
                frames.append({
                    'cmd': hex(b0),
                    'type': 'draw_explicit',
                    'arg1': arg1,
                    'arg2': arg2,
                    'oam': oam,
                    'delay': 2
                })
        return frames

    def dump_animations(self):
        print(f"[*] Dumping animation scripts with mathematical precision from {ANIM_BASE_CSV}...")
        script_table = 0x58BA2C
        script_base = 0x663208
        
        anim_catalog = []
        
        with open(ANIM_BASE_CSV, 'r', encoding='utf-8') as f:
            reader = csv.reader(f)
            header = next(reader)
            anim_rows = list(reader)
            
        print(f"[*] Total animation definitions to process: {len(anim_rows)}")
        
        for row in anim_rows:
            if not row or len(row) < 2 or not row[1].strip():
                continue
            name = row[0].strip()
            id_str = row[1].strip()
            try:
                anim_id = int(id_str, 16)
            except ValueError:
                continue
            
            entry_off = script_table + (anim_id * 4)
            if entry_off + 4 > len(self.rom):
                continue
                
            graphic_id = struct.unpack('<H', self.rom[entry_off : entry_off + 2])[0]
            offset_hi = struct.unpack('<H', self.rom[entry_off + 2 : entry_off + 4])[0]
            script_addr = script_base + (offset_hi * 4) + 0x08000000
            
            frames = self.parse_anim_script(script_addr)
            
            anim_entry = {
                "name": name,
                "anim_id": hex(anim_id),
                "anim_id_dec": anim_id,
                "graphic_id": graphic_id,
                "script_addr": hex(script_addr),
                "script_rom_offset": hex(script_addr & 0x01FFFFFF),
                "frame_count": len(frames),
                "frames": frames
            }
            
            clean_name = re.sub(r'[^a-zA-Z0-9_\-]', '_', name)
            anim_file = os.path.join(OUT_ANIMS, f"anim_{anim_id:04d}_{clean_name}.json")
            with open(anim_file, 'w', encoding='utf-8') as af:
                json.dump(anim_entry, af, indent=4)
                
            anim_catalog.append({
                "name": name,
                "anim_id": hex(anim_id),
                "anim_id_dec": anim_id,
                "graphic_id": graphic_id,
                "script_addr": hex(script_addr),
                "script_rom_offset": hex(script_addr & 0x01FFFFFF),
                "frame_count": len(frames),
                "file": f"anim_{anim_id:04d}_{clean_name}.json"
            })

            
        catalog_path = os.path.join(OUT_ANIMS, "animations_catalog.json")
        with open(catalog_path, 'w', encoding='utf-8') as f:
            json.dump(anim_catalog, f, indent=4)
            
        print(f"[+] Processed {len(anim_catalog)} animations into {catalog_path}.")
        return anim_catalog

if __name__ == "__main__":
    dumper = SymphonyAssemblyDumper(ROM_PATH)
    dumper.dump_sprites_metadata()
    dumper.dump_animations()
    print("[SUCCESS] Symphony Assembly extraction complete. Zero copyrighted PNG assets generated.")
