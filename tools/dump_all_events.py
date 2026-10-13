#!/usr/bin/env python3
"""
=============================================================================
Harvest Moon: Friends of Mineral Town - Slipspace Event Script Dumper
Integrates Denisovich728's SlipSpace Script Engine (FoMT Studio v3.7.0)
Extracts and decompiles all event bytecode scripts, pointer tables, and manifests.
=============================================================================
"""

import os
import sys
import shutil
import struct
import json
import time

FOMT_STUDIO_PATH = r"j:\Laboratorio\FOMT_Studio"
if FOMT_STUDIO_PATH not in sys.path:
    sys.path.append(FOMT_STUDIO_PATH)

from Nucleos_Positronicos.Nucleo_de_Scripts.SlipSpace_Script_Engine.extractor import extract_all_resources
from Nucleos_Positronicos.Nucleo_de_Scripts.SlipSpace_Script_Engine.cli import get_all_scripts

ROM_PATH = r"j:\Laboratorio\GBA-Decompiler-FINIS-OMNIVM-IMPOSSIBILIVM\roms\fomt virgen.gba"
LIB_SRC_PATH = r"j:\Laboratorio\FOMT_Studio\Extraccion\Fomt_Lib.src"
LIB_CSV_PATH = r"j:\Laboratorio\FOMT_Studio\Banco_de_Datos\Cilixes\fomt\Fomt_Lib.csv"
OUTPUT_BASE = r"j:\Laboratorio\harvest_moon_fomt_decomp\assets"
EVENTS_DIR = os.path.join(OUTPUT_BASE, "events")
TABLES_DIR = os.path.join(OUTPUT_BASE, "tables")

def run_event_dump():
    print(f"=== FoMT Slipspace Script Engine Event Extractor ===")
    print(f"ROM: {ROM_PATH}")
    print(f"Library: {LIB_SRC_PATH}")
    print(f"Destination: {EVENTS_DIR}")
    
    os.makedirs(EVENTS_DIR, exist_ok=True)
    os.makedirs(TABLES_DIR, exist_ok=True)
    
    # 1. Run extractor to a temporary extraction staging folder
    temp_dir = os.path.join(OUTPUT_BASE, "_temp_slipspace")
    os.makedirs(temp_dir, exist_ok=True)
    
    def log_cb(msg):
        print(f"[SlipSpace] {msg}")
        
    start_time = time.time()
    success = extract_all_resources(ROM_PATH, temp_dir, LIB_SRC_PATH, update_callback=log_cb)
    
    if not success:
        print("[!] Extraction failed or encountered critical error.")
        return False
        
    # Move extracted events and tables to clean assets directories
    temp_recursos = os.path.join(temp_dir, "Recursos")
    src_events = os.path.join(temp_recursos, "Eventos")
    src_tables = os.path.join(temp_recursos, "Tablas")
    
    # Copy all event scripts
    if os.path.exists(src_events):
        event_files = os.listdir(src_events)
        print(f"[*] Moving {len(event_files)} event scripts into {EVENTS_DIR}...")
        for ef in event_files:
            shutil.copy2(os.path.join(src_events, ef), os.path.join(EVENTS_DIR, ef))
            
    # Copy all pointer tables
    if os.path.exists(src_tables):
        print(f"[*] Moving pointer tables into {TABLES_DIR}...")
        for root, dirs, files in os.walk(src_tables):
            rel_dir = os.path.relpath(root, src_tables)
            dest_dir = os.path.join(TABLES_DIR, rel_dir) if rel_dir != "." else TABLES_DIR
            os.makedirs(dest_dir, exist_ok=True)
            for f in files:
                shutil.copy2(os.path.join(root, f), os.path.join(dest_dir, f))
                
    # Copy reports & maps
    for report_file in ["mapa_punteros_eventos.txt", "scripts_huerfanos_bot.txt"]:
        rf_path = os.path.join(temp_recursos, report_file)
        if os.path.exists(rf_path):
            shutil.copy2(rf_path, os.path.join(OUTPUT_BASE, report_file))
            
    # Also copy library files for self-contained compilation/decompilation
    shutil.copy2(LIB_SRC_PATH, os.path.join(EVENTS_DIR, "Fomt_Lib.src"))
    shutil.copy2(LIB_CSV_PATH, os.path.join(EVENTS_DIR, "Fomt_Lib.csv"))
    
    # Clean up temp
    shutil.rmtree(temp_dir, ignore_errors=True)
    
    # 2. Generate JSON Event Catalog for C# Port ingestion
    print("[*] Generating events_catalog.json for C# (.NET 9) ingestion...")
    catalog = []
    pointer_map_file = os.path.join(OUTPUT_BASE, "mapa_punteros_eventos.txt")
    if os.path.exists(pointer_map_file):
        with open(pointer_map_file, "r", encoding="utf-8") as f:
            lines = f.readlines()
            for line in lines[1:]: # Skip header
                parts = [p.strip() for p in line.split(",")]
                if len(parts) >= 3:
                    ev_id = int(parts[0])
                    start_off = int(parts[1], 16)
                    end_off = int(parts[2], 16)
                    script_file = f"evento_{ev_id:04d}.txt"
                    has_script = os.path.exists(os.path.join(EVENTS_DIR, script_file))
                    catalog.append({
                        "event_id": ev_id,
                        "script_file": script_file if has_script else None,
                        "rom_start_offset": hex(start_off),
                        "rom_end_offset": hex(end_off),
                        "rom_pointer": hex(start_off | 0x08000000),
                        "size_bytes": end_off - start_off,
                        "is_decompiled": has_script
                    })
                    
    catalog_path = os.path.join(EVENTS_DIR, "events_catalog.json")
    with open(catalog_path, "w", encoding="utf-8") as f:
        json.dump(catalog, f, indent=4)
        
    elapsed = time.time() - start_time
    print(f"[+] Successfully dumped and indexed {len(catalog)} event scripts in {elapsed:.2f}s!")
    return True

if __name__ == "__main__":
    run_event_dump()
