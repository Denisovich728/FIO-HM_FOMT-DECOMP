#!/usr/bin/env python3
"""
=============================================================================
Harvest Moon: Friends of Mineral Town - Master Asset Extractor & Pipeline
Orchestrates:
1. SlipSpace Event Decompiler (1,328 Events + Tables)
2. Symphony Metasprite & Palette Engine (90 Spritesheets + 2,523 Animations)
3. World Data Dumper (66 Maps, 574 Flags, 184 Portraits)
4. Generates Master Manifest & synchronizes with the C# (.NET 9) Port.
=============================================================================
"""

import os
import sys
import subprocess
import shutil
import json
import hashlib
import time

TOOLS_DIR = os.path.dirname(os.path.abspath(__file__))
DECOMP_DIR = os.path.dirname(TOOLS_DIR)
ASSETS_DIR = os.path.join(DECOMP_DIR, "assets")
PORT_ASSETS_DIR = r"j:\Laboratorio\harvest_moon_fomt_port\assets"

def compute_sha256(filepath):
    hasher = hashlib.sha256()
    with open(filepath, 'rb') as f:
        while chunk := f.read(65536):
            hasher.update(chunk)
    return hasher.hexdigest()

def run_step(script_name, description):
    print(f"\n==================================================")
    print(f"[*] Step: {description} ({script_name})")
    print(f"==================================================")
    script_path = os.path.join(TOOLS_DIR, script_name)
    start = time.time()
    res = subprocess.run([sys.executable, script_path], cwd=DECOMP_DIR)
    if res.returncode != 0:
        print(f"[!] FAILED: {script_name} exited with code {res.returncode}")
        return False
    print(f"[+] Completed {script_name} in {time.time() - start:.2f}s.")
    return True

def generate_master_manifest():
    print(f"\n[*] Generating Unified assets_manifest.json...")
    manifest = {
        "engine": "FoMT Studio / Symphony / SlipSpace",
        "game": "Harvest Moon: Friends of Mineral Town (GBA)",
        "rom_code": "A4NE",
        "generated_timestamp": time.strftime("%Y-%m-%dT%H:%M:%SZ", time.gmtime()),
        "categories": {}
    }

    # Count & index categories
    categories = {
        "events": os.path.join(ASSETS_DIR, "events"),
        "sprites": os.path.join(ASSETS_DIR, "sprites"),
        "animations": os.path.join(ASSETS_DIR, "animations"),
        "palettes": os.path.join(ASSETS_DIR, "palettes"),
        "data": os.path.join(ASSETS_DIR, "data")
    }

    total_files = 0
    total_size = 0

    for cat_name, cat_path in categories.items():
        if os.path.exists(cat_path):
            files = [f for f in os.listdir(cat_path) if os.path.isfile(os.path.join(cat_path, f))]
            cat_size = sum(os.path.getsize(os.path.join(cat_path, f)) for f in files)
            manifest["categories"][cat_name] = {
                "file_count": len(files),
                "total_bytes": cat_size,
                "path": f"assets/{cat_name}"
            }
            total_files += len(files)
            total_size += cat_size

    manifest["total_files"] = total_files
    manifest["total_bytes"] = total_size

    manifest_path = os.path.join(ASSETS_DIR, "assets_manifest.json")
    with open(manifest_path, 'w', encoding='utf-8') as f:
        json.dump(manifest, f, indent=4)
        
    print(f"[+] Master manifest generated: {total_files} assets ({total_size / (1024*1024):.2f} MB).")
    return manifest_path

def sync_to_port():
    print(f"\n[*] Synchronizing asset manifests to C# Port ({PORT_ASSETS_DIR})...")
    os.makedirs(PORT_ASSETS_DIR, exist_ok=True)
    
    # Copy catalogs and manifests
    manifest_src = os.path.join(ASSETS_DIR, "assets_manifest.json")
    if os.path.exists(manifest_src):
        shutil.copy2(manifest_src, os.path.join(PORT_ASSETS_DIR, "assets_manifest.json"))
        
    for cat in ["events", "sprites", "animations", "data"]:
        src_cat = os.path.join(ASSETS_DIR, cat)
        dst_cat = os.path.join(PORT_ASSETS_DIR, cat)
        os.makedirs(dst_cat, exist_ok=True)
        # Copy JSON manifests
        for f in os.listdir(src_cat):
            if f.endswith('_catalog.json') or f.endswith('.json'):
                shutil.copy2(os.path.join(src_cat, f), os.path.join(dst_cat, f))
                
    print("[+] Synchronization complete!")

def main():
    print("##################################################")
    print("## FoMT Master Asset Extractor & Pipeline CLI   ##")
    print("##################################################")
    
    # 1. Event Extraction
    if not run_step("dump_all_events.py", "SlipSpace Script Engine Event Dumper"):
        return
        
    # 2. Metasprites & Animations
    if not run_step("dump_sprites_and_animations.py", "Symphony Sprite & Animation Dumper"):
        return
        
    # 3. Game Architecture Data
    if not run_step("dump_game_data.py", "World Maps, Flags & Portraits Dumper"):
        return
        
    # 4. Generate Master Manifest
    generate_master_manifest()
    
    # 5. Sync to Port
    sync_to_port()
    
    print("\n[PIPELINE SUCCESS] All assets extracted, cataloged, and ported successfully!")

if __name__ == '__main__':
    main()
