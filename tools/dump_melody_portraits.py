#!/usr/bin/env python3
"""
=============================================================================
Harvest Moon: Friends of Mineral Town - Melody Portrait Assembly Dumper
Based on Denisovich728's Melody Portrait Engine (FoMT Studio)

Extracts ONLY assembly structure and mathematical coordinate layouts:
- Bundle header navigation (0x0052D984, shifts [2, 4, 3, 5, 5, 3])
- Negative baseline coordinate system (Y <= 0 is visible character, Y = 0 is ground)
- OAM piece slicing parameters and tile index references
- 16-color palettes (BGR555 / RGB metadata)

LEGAL COMPLIANCE:
No copyrighted graphical raster assets (.png, .bmp) are generated or committed.
=============================================================================
"""

import os
import sys
import struct
import json
import csv

ROM_PATH = r"j:\Laboratorio\GBA-Decompiler-FINIS-OMNIVM-IMPOSSIBILIVM\roms\fomt virgen.gba"
CSV_PATH = r"j:\Laboratorio\FOMT_Studio\Banco_de_Datos\Cilixes\fomt\Fomt_Portraits.csv"

OUT_ASSETS = r"j:\Laboratorio\harvest_moon_fomt_decomp\assets"
OUT_PORTRAITS = os.path.join(OUT_ASSETS, "portraits")

OAM_DIMS = {
    (0, 0): (8, 8),   (0, 1): (16, 16), (0, 2): (32, 32), (0, 3): (64, 64),
    (1, 0): (16, 8),  (1, 1): (32, 8),  (1, 2): (32, 16), (1, 3): (64, 32),
    (2, 0): (8, 16),  (2, 1): (8, 32),  (2, 2): (16, 32), (2, 3): (32, 64)
}

class MelodyPortraitAssemblyDumper:
    def __init__(self, rom_path):
        with open(rom_path, 'rb') as f:
            self.rom = f.read()
        os.makedirs(OUT_PORTRAITS, exist_ok=True)

    def read_hword(self, addr):
        return struct.unpack('<H', self.rom[addr - 0x08000000 : addr - 0x08000000 + 2])[0]

    def decode_palette(self, addr):
        colors = []
        for i in range(16):
            c = self.read_hword(addr + i * 2)
            r = (c & 0x1F) * 8
            g = ((c >> 5) & 0x1F) * 8
            b = ((c >> 10) & 0x1F) * 8
            colors.append({
                "index": i,
                "rgb": [r, g, b],
                "bgr555": hex(c),
                "is_transparent": (i == 0)
            })
        return colors

    def get_bundle_headers(self):
        header_addr = 0x0052D984
        counts = []
        ptrs = []
        r1 = header_addr

        for shift in [2, 4, 3, 5, 5, 3]:
            cnt = struct.unpack_from('<I', self.rom, r1)[0]
            counts.append(cnt)
            r1 += 4
            ptrs.append(r1 + 0x08000000)
            r1 += cnt * (1 << shift)

        return counts, ptrs

    def dump_portrait_assembly(self):
        print(f"[*] Extracting Melody Portrait Assembly structures from ROM...")
        counts, ptrs = self.get_bundle_headers()
        total_portraits = counts[0]
        
        portrait_names = {}
        if os.path.exists(CSV_PATH):
            with open(CSV_PATH, 'r', encoding='utf-8') as f:
                reader = csv.reader(f)
                for row in reader:
                    if row and len(row) >= 2:
                        try:
                            pid = int(row[0].strip(), 16) if '0x' in row[0].lower() else int(row[0].strip())
                            portrait_names[pid] = row[1].strip()
                        except ValueError:
                            pass

        portraits_catalog = []

        for pid in range(total_portraits):
            idx = self.read_hword(ptrs[0] + pid * 4 + 2)
            if idx >= counts[1]:
                continue

            struct_base = ptrs[1] + idx * 16
            f0 = self.read_hword(struct_base)
            f2 = self.read_hword(struct_base + 2)
            f6 = self.read_hword(struct_base + 6)
            fA = self.read_hword(struct_base + 0xA)

            ptr_OAM = ptrs[2] + f2 * 8
            ptr_GFX = ptrs[3] + f6 * 32
            ptr_PAL = ptrs[4] + fA * 32

            palette = self.decode_palette(ptr_PAL)

            num_oam_entries = f0
            oam_slices = []

            min_x, min_y = 999, 999
            max_x, max_y = -999, -999

            for i in range(num_oam_entries):
                attr0 = self.read_hword(ptr_OAM + i * 8)
                attr1 = self.read_hword(ptr_OAM + i * 8 + 2)
                attr2 = self.read_hword(ptr_OAM + i * 8 + 4)

                y = attr0 & 0xFF
                if y > 127: y -= 256
                shape = (attr0 >> 14) & 3

                x = attr1 & 0x1FF
                if x > 255: x -= 512
                size = (attr1 >> 14) & 3

                tile_idx = attr2 & 0x3FF
                w, h = OAM_DIMS.get((shape, size), (8, 8))

                oam_slices.append({
                    "slice_index": i,
                    "x": x,
                    "y": y,
                    "width": w,
                    "height": h,
                    "shape": shape,
                    "size": size,
                    "tile_index": tile_idx,
                    "tile_rom_addr": hex(ptr_GFX + tile_idx * 32)
                })

                min_x = min(min_x, x)
                min_y = min(min_y, y)
                max_x = max(max_x, x + w)
                max_y = max(max_y, y + h)

            if not oam_slices:
                continue

            name = portrait_names.get(pid, f"Portrait_{pid:02X}")
            total_w = max_x - min_x if max_x > min_x else 0
            total_h = max_y - min_y if max_y > min_y else 0

            entry = {
                "portrait_id": hex(pid),
                "portrait_id_dec": pid,
                "name": name,
                "internal_struct_idx": idx,
                "oam_piece_count": num_oam_entries,
                "bounding_box": {
                    "min_x": min_x,
                    "min_y": min_y,
                    "max_x": max_x,
                    "max_y": max_y,
                    "width": total_w,
                    "height": total_h,
                    "baseline_ground_y": 0
                },
                "rom_pointers": {
                    "oam_table": hex(ptr_OAM),
                    "gfx_table": hex(ptr_GFX),
                    "pal_table": hex(ptr_PAL)
                },
                "oam_slices": oam_slices,
                "palette": palette
            }

            portraits_catalog.append(entry)

        catalog_file = os.path.join(OUT_PORTRAITS, "portraits_catalog.json")
        with open(catalog_file, 'w', encoding='utf-8') as f:
            json.dump(portraits_catalog, f, indent=4)

        print(f"[+] Dumped {len(portraits_catalog)} Melody Portrait assembly entries into {catalog_file}.")
        return portraits_catalog

if __name__ == "__main__":
    dumper = MelodyPortraitAssemblyDumper(ROM_PATH)
    dumper.dump_portrait_assembly()
    print("[SUCCESS] Melody Portrait Assembly dump completed.")
