#!/usr/bin/env python3
"""
=============================================================================
Harvest Moon: Friends of Mineral Town - Symbol Mapper & Function Renamer
Maps Stan's 2,626 symbols + FoMT Studio Cilixes + VM Runtime functions
and updates decompiled C source files with human-readable names.
=============================================================================
"""

import os
import re

STAN_DIR = r"j:\Laboratorio\fomt"
DECOMP_DIR = r"j:\Laboratorio\harvest_moon_fomt_decomp"

# Core curated symbols from Reverse Engineering & Architecture Analysis
KNOWN_SYMBOLS = {
    # Boot & System
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

    # Farm & Agriculture
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

    # Shipping Bin
    0x0800B0DC: 'ShippingBin_Init',
    0x0800B110: 'ShippingBin_ResetDaily',
    0x0800B160: 'ShippingBin_GetValueShipped',
    0x0800B1A0: 'ShippingBin_IsDisplayEnabled',
    0x0800B1E0: 'ShippingBin_GetAmountShipped',
    0x0800B20C: 'ShippingBin_ShipItem',
    0x0800B2B0: 'ShippingBin_HasShippedOneOfEachProduct',
    0x0800B320: 'ShippingBin_HasShippedOneOfEachCrop',

    # Furniture & Buildings
    0x0800B800: 'ToolChest_Init',
    0x0800B900: 'Fridge_Init',
    0x0800BA00: 'Shelf_Init',
    0x0800BB00: 'RecordPlayer_Init',
    0x0800BC58: 'FarmHouse_Init',
    0x0800BE70: 'Coop_Init',
    0x0800C450: 'Barn_Init',
    0x0800CDBC: 'Stable_Init',

    # Items & Player
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

    # Entities
    0x08020018: 'Entity_InitWorldActors',
    0x080320DC: 'Entity_UpdatePositions',
    0x08034CEC: 'Entity_ProcessCollisions',

    # Script Engine (AScriptEngine & ScriptEngine)
    0x0803A8A4: 'ScriptEngine_CalculateSpriteHash',
    0x0803AB30: 'ScriptEngine_Construct',
    0x0803AC78: 'ScriptEngine_Destruct',
    0x0803ACD8: 'ScriptEngine_ClearVM',
    0x0803AE58: 'ScriptEngine_SetVariable',
    0x0803AEA0: 'ScriptEngine_GetVariable',
    0x0803B000: 'ScriptEngine_LoadBinaryScript',
    0x0803B128: 'ScriptEngine_ParseHeaderChunks',
    0x0803B2A8: 'ScriptEngine_AllocateStack',
    0x0803B368: 'ScriptEngine_FreeStack',
    0x0803B454: 'ScriptEngine_StackPush',
    0x0803B474: 'ScriptEngine_StackPop',
    0x0803B4B0: 'ScriptEngine_StackTop',
    0x0803B4DC: 'ScriptEngine_SetPC',
    0x0803B6B8: 'ScriptEngine_GetPC',
    0x0803B6FC: 'ScriptEngine_ResolveStringPointer',
    0x0803B840: 'ScriptEngine_ResolveJumpTarget',
    0x0803B8CC: 'ScriptEngine_LookupJumpTable',
    0x0803EE94: 'ScriptEngine_HandleDialogTrigger',
    0x0803EFD8: 'AScriptEngine_Execute',
    0x0803F02C: 'AScriptEngine_GetStatus',
    0x0803F038: 'AScriptEngine_Opcode',
    0x0803F044: 'AScriptEngine_OpcodeFlag',
    0x0803F054: 'AScriptEngine_Operand32',
    0x0803F080: 'AScriptEngine_Operand16',
    0x0803F0A4: 'AScriptEngine_Operand8',
    0x0803F0DC: 'AScriptEngine_NextInstruction',
    0x0803F8DC: 'ScriptEngine_OnCallDispatcher',

    # C++ Runtime Stubs
    0x080D0260: 'cpp_operator_delete',
    0x080D3A84: 'gba_memcpy',
    0x080D3994: 'gba_memset',
    0x080D3910: 'gba_malloc',
    0x080D3914: 'gba_free'
}

def load_stan_symbols():
    stan_asm = os.path.join(STAN_DIR, 'asm')
    count = 0
    if os.path.exists(stan_asm):
        for f in os.listdir(stan_asm):
            if f.endswith('.s'):
                with open(os.path.join(stan_asm, f), 'r', encoding='latin-1') as fp:
                    for line in fp:
                        m = re.match(r'^\s*([a-zA-Z_0-9]+):\s*@\s*(0x08[0-9a-fA-F]{6})', line)
                        if m:
                            sym, addr_str = m.group(1), m.group(2)
                            addr = int(addr_str, 16)
                            if not sym.startswith('func_') and not sym.startswith('sub_') and not sym.startswith('.L'):
                                KNOWN_SYMBOLS[addr] = sym
                                count += 1
    print(f"[+] Loaded {len(KNOWN_SYMBOLS)} total symbols ({count} from Stan's ASM files).")

def rename_in_file(file_path):
    with open(file_path, 'r', encoding='utf-8') as f:
        content = f.read()
        
    replacements = 0
    for addr, sym_name in KNOWN_SYMBOLS.items():
        # Look for func_08XXXXXX
        generic_name = f"func_{addr:08X}"
        generic_name_lower = f"func_{addr:08x}"
        sub_name = f"sub_{addr:08X}"
        sub_name_lower = f"sub_{addr:08x}"
        
        for old_name in [generic_name, generic_name_lower, sub_name, sub_name_lower]:
            if old_name in content:
                content = re.sub(r'\b' + old_name + r'\b', sym_name, content)
                replacements += 1
                
    if replacements > 0:
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(content)
        print(f"  -> {os.path.basename(file_path)}: replaced {replacements} symbols.")

def main():
    print("=== FoMT Symbol Renamer Pipeline ===")
    load_stan_symbols()
    
    src_dir = os.path.join(DECOMP_DIR, "src")
    for root, dirs, files in os.walk(src_dir):
        for f in files:
            if f.endswith('.c') or f.endswith('.h'):
                p = os.path.join(root, f)
                rename_in_file(p)
                
    print("[SUCCESS] All decompiled source files updated with named symbols!")

if __name__ == '__main__':
    main()
