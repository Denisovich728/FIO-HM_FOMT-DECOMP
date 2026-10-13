#!/usr/bin/env python3
"""
=============================================================================
Harvest Moon: Friends of Mineral Town - Game Data Dumper
Extracts maps, flags, portraits, items, and UI tables for C# port ingestion.
=============================================================================
"""

import os
import sys
import struct
import json
import csv

ROM_PATH = r"j:\Laboratorio\GBA-Decompiler-FINIS-OMNIVM-IMPOSSIBILIVM\roms\fomt virgen.gba"
CILIXES_DIR = r"j:\Laboratorio\FOMT_Studio\Banco_de_Datos\Cilixes\fomt"
OUT_DATA = r"j:\Laboratorio\harvest_moon_fomt_decomp\assets\data"

def dump_game_data():
    os.makedirs(OUT_DATA, exist_ok=True)
    with open(ROM_PATH, 'rb') as f:
        rom = f.read()

    print("=== Dumping Game Data & World Architecture ===")

    # 1. Maps Table (0x105EDC)
    print("[*] Extracting Map Table...")
    start_offset = 0x105EDC
    curr_off = start_offset
    map_id = 0
    maps = []

    while curr_off + 40 <= len(rom):
        data = rom[curr_off : curr_off + 40]
        p_gfx, p_pal1, p_pal2, p_bg1, p_bg2, p_col, p_obj1, p_obj2, wh = struct.unpack('<IIIIIIIII', data[:36])
        w = wh & 0xFFFF
        h = (wh >> 16) & 0xFFFF

        if not (0x08000000 <= p_bg1 < 0x09000000):
            break

        maps.append({
            "map_id": map_id,
            "hex_id": f"0x{map_id:02X}",
            "width": w,
            "height": h,
            "pointers": {
                "gfx": f"0x{p_gfx:08X}",
                "pal1": f"0x{p_pal1:08X}",
                "pal2": f"0x{p_pal2:08X}",
                "bg1": f"0x{p_bg1:08X}",
                "bg2": f"0x{p_bg2:08X}",
                "collision": f"0x{p_col:08X}",
                "obj1": f"0x{p_obj1:08X}",
                "obj2": f"0x{p_obj2:08X}"
            }
        })
        map_id += 1
        curr_off += 40

    with open(os.path.join(OUT_DATA, "maps.json"), 'w', encoding='utf-8') as f:
        json.dump(maps, f, indent=4)
    print(f"[+] Dumped {len(maps)} maps.")

    # 2. Portraits CSV
    portraits_csv = os.path.join(CILIXES_DIR, "Fomt_Portraits.csv")
    if os.path.exists(portraits_csv):
        portraits = []
        with open(portraits_csv, 'r', encoding='utf-8') as f:
            reader = csv.reader(f)
            header = next(reader)
            for row in reader:
                if len(row) >= 2 and row[0].strip():
                    portraits.append({
                        "name": row[0].strip(),
                        "hex_id": row[1].strip()
                    })
        with open(os.path.join(OUT_DATA, "portraits.json"), 'w', encoding='utf-8') as f:
            json.dump(portraits, f, indent=4)
        print(f"[+] Dumped {len(portraits)} portrait definitions.")

    # 3. Flags CSV
    flags_csv = os.path.join(CILIXES_DIR, "Fomt_Flags.csv")
    if os.path.exists(flags_csv):
        flags = []
        with open(flags_csv, 'r', encoding='utf-8') as f:
            reader = csv.reader(f)
            header = next(reader)
            for row in reader:
                if len(row) >= 2:
                    flags.append({
                        "id": row[0].strip(),
                        "name": row[1].strip() if len(row) > 1 else "",
                        "desc": row[2].strip() if len(row) > 2 else ""
                    })
        with open(os.path.join(OUT_DATA, "flags.json"), 'w', encoding='utf-8') as f:
            json.dump(flags, f, indent=4)
        print(f"[+] Dumped {len(flags)} event flags.")

    # 4. Map Names CSV
    mapas_csv = os.path.join(CILIXES_DIR, "Fomt_Mapas.csv")
    if os.path.exists(mapas_csv):
        map_names = []
        with open(mapas_csv, 'r', encoding='utf-8') as f:
            reader = csv.reader(f)
            for row in reader:
                if row:
                    map_names.append(row)
        with open(os.path.join(OUT_DATA, "map_names.json"), 'w', encoding='utf-8') as f:
            json.dump(map_names, f, indent=4)

    print("[SUCCESS] All world, map, and entity catalogs saved to assets/data/!")

if __name__ == '__main__':
    dump_game_data()
