import os
import re
import json

SOURCE_ALL_C = 'j:/Laboratorio/GBA-Decompiler-FINIS-OMNIVM-IMPOSSIBILIVM/output/fomt_virgen/fomt_virgen_all.c'
STAN_DIR = 'j:/Laboratorio/fomt'
OUTPUT_DIR = 'j:/Laboratorio/harvest_moon_fomt_decomp'

# 1. Build comprehensive symbol dictionary from Stan's headers and asm
symbols = {}

# Known critical function names mapped from StanHash analysis
known_names = {
    0x08000000: 'GBA_Header_Boot',
    0x080000C0: 'crt0_entry',
    0x0800018C: 'AgbMain',
    0x08000240: 'MainLoop_Callback',
    0x080002C0: 'Dispatcher_HandleCall',
    0x080002E0: 'SramProxy_ReadSaveData',
    0x08000358: 'SramProxy_WriteSaveData',
    0x080003A0: 'SramProxy_VerifyChecksum',
    0x080003DC: 'SramProxy_GetActiveSlot',
    0x080004C4: 'Interrupt_InitVBlank',
    0x080004F4: 'Interrupt_EnableHBlank',
    0x0800050C: 'Interrupt_SetMasterEnable',
    0x08000528: 'Interrupt_WaitForVBlank',
    0x0800063C: 'SramProxy_InitHardware',
    0x08000640: 'SramProxy_LoadGlobalSettings',
    0x0800080C: 'Scene_Destructor',
    0x08009ADC: 'Farm_GetSpawnCoordinates',
    0x08009AE8: 'Farm_GetHouseCoordinates',
    0x08009AF4: 'Farm_NoOp',
    0x08009B00: 'Farm_GetFieldState',
    0x08009B20: 'Farm_HasHorse',
    0x08009B68: 'Farm_AddLumber',
    0x08009BAC: 'Farm_TakeLumber',
    0x08009BE8: 'Farm_SetHorse',
    0x08009C34: 'Farm_GetHorse',
    0x08009C4C: 'Farm_RemoveHorse',
    0x08009C60: 'Farm_DayUpdate',
    0x08009F80: 'Farm_SeasonTransition',
    0x0800A014: 'Field_GetPlotState',
    0x0800A07C: 'Field_IsPlotTilled',
    0x0800A0A4: 'Field_GetCropType',
    0x0800A120: 'Field_WaterPlot',
    0x0800A190: 'Field_TillSoil',
    0x0800A238: 'Field_PlantSeeds',
    0x0800A4A4: 'Field_HarvestCrop',
    0x0800A6C8: 'Field_CanPlaceItem',
    0x0800A6F4: 'Field_PlaceItem',
    0x0800AB08: 'Field_SeasonChangeClear',
    0x0800B0DC: 'ShippingBin_Init',
    0x0800B110: 'ShippingBin_ResetDaily',
    0x0800B160: 'ShippingBin_GetValueShipped',
    0x0800B1A0: 'ShippingBin_IsDisplayEnabled',
    0x0800B1E0: 'ShippingBin_GetAmountShipped',
    0x0800B20C: 'ShippingBin_ShipItem',
    0x0800B2B0: 'ShippingBin_HasShippedOneOfEachProduct',
    0x0800B320: 'ShippingBin_HasShippedOneOfEachCrop',
    0x0800B800: 'ToolChest_Init',
    0x0800B900: 'Fridge_Init',
    0x0800BA00: 'Shelf_Init',
    0x0800BB00: 'RecordPlayer_Init',
    0x0800BC58: 'FarmHouse_Init',
    0x0800BE70: 'Coop_Init',
    0x0800C450: 'Barn_Init',
    0x0800CDBC: 'Stable_Init',
    0x0800D000: 'Item_GetBuyPrice',
    0x0800D100: 'Item_GetSellPrice',
    0x0800D200: 'Item_GetDescription',
    0x0800E2E4: 'Farmer_Init',
    0x0800E400: 'Farmer_UpdateStamina',
    0x0800E500: 'Farmer_UpdateFatigue',
    0x0800E600: 'Farmer_UseEquippedTool',
    0x0800E800: 'Rucksack_AddItem',
    0x0800E900: 'Rucksack_RemoveItem',
    0x0800EA00: 'HeldItem_Throw',
    0x08020018: 'Entity_InitWorldActors',
    0x080320DC: 'Entity_UpdatePositions',
    0x08034CEC: 'Entity_ProcessCollisions',
    0x0803A8A4: 'ScriptEngine_Init',
    0x0803B000: 'ScriptEngine_ExecuteBytecode',
    0x0803EE94: 'ScriptEngine_HandleDialogTrigger',
    0x08050000: 'Animal_UpdateDailyHealth',
    0x08060000: 'Cow_ProduceMilk',
    0x08070000: 'Sheep_ProduceWool',
    0x08080000: 'Chicken_LayEgg',
    0x08090000: 'Dog_PlayFrisbee',
    0x0809BFE8: 'NPC_UpdateSchedule',
    0x080A0000: 'Bachelorette_CheckHeartEvent',
    0x080B0000: 'HarvestSprite_PerformChores',
    0x080C0000: 'M4A_InitSoundDriver',
    0x080C1000: 'M4A_PlaySong',
    0x080C2000: 'M4A_StopSong',
}

# Scan Stan's ASM files for additional symbols
for f in os.listdir(os.path.join(STAN_DIR, 'asm')):
    if f.endswith('.s'):
        p = os.path.join(STAN_DIR, 'asm', f)
        with open(p, 'r', encoding='latin-1') as fp:
            for line in fp:
                m = re.match(r'^\s*([a-zA-Z_0-9]+):\s*@\s*0x(08[0-9a-fA-F]{6})', line)
                if m:
                    sym, addr = m.group(1), int(m.group(2), 16)
                    if not sym.startswith('func_') and not sym.startswith('sub_') and not sym.startswith('.L'):
                        known_names[addr] = sym

print(f'Total mapped symbols: {len(known_names)}')

# 2. Module partition ranges based on fomt.lds
MODULES = [
    {
        'id': 'main',
        'file': 'src/main.c',
        'header': 'include/global.h',
        'min': 0x08000000,
        'max': 0x080002BF,
        'desc': 'Boot vectors, crt0 startup and AgbMain primary loop'
    },
    {
        'id': 'dispatcher_and_sram',
        'file': 'src/core/dispatcher.c',
        'header': 'include/global.h',
        'min': 0x080002C0,
        'max': 0x080007FF,
        'desc': 'Central call dispatcher, GBA BIOS indirect handlers and SRAM save proxies'
    },
    {
        'id': 'scene_manager',
        'file': 'src/core/scene_manager.c',
        'header': 'include/global.h',
        'min': 0x08000800,
        'max': 0x08003FFF,
        'desc': 'Scene management, title sequence, intro cutscenes and new game initialization'
    },
    {
        'id': 'hardware',
        'file': 'src/core/hardware.c',
        'header': 'include/gba/gbaio.h',
        'min': 0x08004000,
        'max': 0x08008FFF,
        'desc': 'GBA Hardware abstraction layer: LCD, Keypad, Timers, DMA controller'
    },
    {
        'id': 'farm_simulation',
        'file': 'src/farm/farm.c',
        'header': 'include/farm/farm.h',
        'min': 0x08009000,
        'max': 0x0800AFFE,
        'desc': 'Farm state manager, field grid (43x25), soil tilling, watering and crop growth'
    },
    {
        'id': 'shipping_bin',
        'file': 'src/farm/shipping_bin.c',
        'header': 'include/farm/shipping_bin.h',
        'min': 0x0800AFFF,
        'max': 0x0800B7FF,
        'desc': 'Shipping bin mechanics, crop/mineral item valuations and daily pickup earnings'
    },
    {
        'id': 'furniture_and_buildings',
        'file': 'src/farm/buildings.c',
        'header': 'include/farm/furniture.h',
        'min': 0x0800B800,
        'max': 0x0800CFFF,
        'desc': 'Farmhouse appliances (fridge, shelf, tool chest, record player), coop and barn'
    },
    {
        'id': 'item_system',
        'file': 'src/player/item.c',
        'header': 'include/player/item.h',
        'min': 0x0800D000,
        'max': 0x0800E2E3,
        'desc': 'Item registry, tool tier levels, seeds, minerals and inventory valuations'
    },
    {
        'id': 'player_and_rucksack',
        'file': 'src/player/farmer.c',
        'header': 'include/player/farmer.h',
        'min': 0x0800E2E4,
        'max': 0x0801FFFF,
        'desc': 'Farmer character (Pete/Claire), stamina/fatigue management, rucksack slots and held items'
    },
    {
        'id': 'entity_manager',
        'file': 'src/entities/entity_manager.c',
        'header': 'include/entities/entity.h',
        'min': 0x08020000,
        'max': 0x0803A8A3,
        'desc': 'Interactive world entities, collision bounds, map triggers and villager entities'
    },
    {
        'id': 'script_engine',
        'file': 'src/events/script_engine.c',
        'header': 'include/events/script_engine.h',
        'min': 0x0803A8A4,
        'max': 0x0804FFFF,
        'desc': 'Harvest Moon virtual script bytecode engine, dialogue flow and cutscenes'
    },
    {
        'id': 'animals_and_livestock',
        'file': 'src/entities/animals.c',
        'header': 'include/entities/animals.h',
        'min': 0x08050000,
        'max': 0x0809BFE7,
        'desc': 'Livestock and pets: Cows, sheep, chickens, dog, horse (health, affection, production)'
    },
    {
        'id': 'npc_and_bachelorettes',
        'file': 'src/entities/npc.c',
        'header': 'include/entities/npc.h',
        'min': 0x0809BFE8,
        'max': 0x080BFFFF,
        'desc': 'Town villagers, bachelorettes (Karen, Popuri, Elli, Ann, Mary) and Harvest Sprites'
    },
    {
        'id': 'audio_m4a',
        'file': 'src/audio/m4a.c',
        'header': 'include/audio/m4a.h',
        'min': 0x080C0000,
        'max': 0x080D2FFF,
        'desc': 'Music Player 2000 sound driver, PCM playback and MIDI sequence synthesizer'
    },
    {
        'id': 'runtime_and_vtables',
        'file': 'src/core/vtables.c',
        'header': 'include/global.h',
        'min': 0x080D3000,
        'max': 0x080FFFFF,
        'desc': 'C++ runtime stubs, virtual method tables (VTables) and system utilities'
    }
]

# 3. Parse fomt_virgen_all.c function by function
print('Reading decompiled source...')
with open(SOURCE_ALL_C, 'r', encoding='utf-8') as f:
    content = f.read()

func_pattern = re.compile(r'// --- ([a-zA-Z_0-9]+) @ ([0-9a-fA-F]+)[^\n]*\n(.*?)(?=\n// --- |\Z)', re.DOTALL)
matches = list(func_pattern.finditer(content))
print(f'Found {len(matches)} decompiled functions to modularize.')

module_buckets = {m['id']: [] for m in MODULES}

for match in matches:
    orig_name = match.group(1)
    addr_int = int(match.group(2), 16)
    func_body = match.group(3).strip()
    
    # Check if we have a named symbol
    display_name = known_names.get(addr_int, orig_name)
    
    # Replace function declaration name if known
    if display_name != orig_name:
        func_body = re.sub(r'\b' + re.escape(orig_name) + r'\b', display_name, func_body)
    
    # Locate module bucket
    assigned_mod = None
    for m in MODULES:
        if m['min'] <= addr_int <= m['max']:
            assigned_mod = m['id']
            break
    if not assigned_mod:
        assigned_mod = 'runtime_and_vtables'
    
    formatted_chunk = f"// =============================================================================\n" \
                      f"// Function: {display_name} @ 0x{addr_int:08X}\n" \
                      f"// =============================================================================\n" \
                      f"{func_body}\n\n"
    module_buckets[assigned_mod].append(formatted_chunk)

# 4. Write modular files
print('Writing modular C source files...')
for m in MODULES:
    mod_id = m['id']
    target_path = os.path.join(OUTPUT_DIR, m['file'])
    os.makedirs(os.path.dirname(target_path), exist_ok=True)
    
    chunks = module_buckets[mod_id]
    
    header_comment = f"// =============================================================================\n" \
                     f"// Harvest Moon: Friends of Mineral Town (GBA) - Decompiled Source\n" \
                     f"// Module: {m['id'].upper()} ({len(chunks)} functions)\n" \
                     f"// Description: {m['desc']}\n" \
                     f"// =============================================================================\n\n" \
                     f"#include \"../../{m['header']}\"\n\n"
                     
    with open(target_path, 'w', encoding='utf-8') as out_f:
        out_f.write(header_comment)
        for chunk in chunks:
            out_f.write(chunk)
            
    print(f"  -> Generated {m['file']} with {len(chunks)} functions ({os.path.getsize(target_path) / 1024:.1f} KB)")

print('Modular decomposition complete!')
