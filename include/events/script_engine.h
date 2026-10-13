#ifndef SCRIPT_ENGINE_H
#define SCRIPT_ENGINE_H

#include "../global.h"

// =============================================================================
// Harvest Moon VM - Bytecode Instruction Set Architecture (Opcodes 0x00 - 0x24)
// Source: FoMT Studio Suite de Ingeniería Inversa (v3.7.0 - Denisovich728)
// =============================================================================
typedef enum VmOpcode {
    OPCODE_NOP      = 0x00, // No Operation / padding
    OPCODE_EQU      = 0x01, // Assignment (=)
    OPCODE_ADDEQU   = 0x02, // Add Assign (+=)
    OPCODE_SUBEQU   = 0x03, // Sub Assign (-=)
    OPCODE_MULEQU   = 0x04, // Mul Assign (*=)
    OPCODE_DIVEQU   = 0x05, // Div Assign (/=)
    OPCODE_MODEQU   = 0x06, // Mod Assign (%=)
    OPCODE_ADD      = 0x07, // Addition (+)
    OPCODE_SUB      = 0x08, // Subtraction (-)
    OPCODE_MUL      = 0x09, // Multiplication (*)
    OPCODE_DIV      = 0x0A, // Division (/)
    OPCODE_MOD      = 0x0B, // Modulo (%)
    OPCODE_AND      = 0x0C, // Bitwise/Logical AND (&&)
    OPCODE_OR       = 0x0D, // Bitwise/Logical OR (||)
    OPCODE_INC      = 0x0E, // Increment (++)
    OPCODE_DEC      = 0x0F, // Decrement (--)
    OPCODE_NEG      = 0x10, // Arithmetic Negation (-x)
    OPCODE_NOT      = 0x11, // Logical NOT (!x)
    OPCODE_CMP      = 0x12, // Comparison (sets internal condition flags)
    OPCODE_PUSHV    = 0x13, // Push variable by ID/address (4-byte operand)
    OPCODE_POPV     = 0x14, // Pop stack into variable (4-byte operand)
    OPCODE_DUP      = 0x15, // Duplicate stack top
    OPCODE_DISC     = 0x16, // Discard stack top
    OPCODE_PUSH32   = 0x17, // Push 32-bit immediate integer (4-byte operand)
    OPCODE_JMP      = 0x18, // Unconditional jump (4-byte target offset)
    OPCODE_BLT      = 0x19, // Branch if Less Than (4-byte target offset)
    OPCODE_BLE      = 0x1A, // Branch if Less or Equal (4-byte target offset)
    OPCODE_BEQ      = 0x1B, // Branch if Equal (4-byte target offset)
    OPCODE_BNE      = 0x1C, // Branch if Not Equal (4-byte target offset)
    OPCODE_BGE      = 0x1D, // Branch if Greater or Equal (4-byte target offset)
    OPCODE_BGT      = 0x1E, // Branch if Greater Than (4-byte target offset)
    OPCODE_JPI      = 0x1F, // Jump Indirect
    OPCODE_END      = 0x20, // End Script execution
    OPCODE_CALL     = 0x21, // Invoke Native Engine Procedure/Function (4-byte Call ID)
    OPCODE_PUSH16   = 0x22, // Push 16-bit immediate integer (2-byte operand)
    OPCODE_PUSH8    = 0x23, // Push 8-bit immediate integer (1-byte operand)
    OPCODE_SWITCH   = 0x24  // Multi-way Jump Table Switch (4-byte table offset)
} VmOpcode;

// =============================================================================
// Selected Native Call IDs (OPCODE_CALL / Fomt_Lib.csv)
// =============================================================================
typedef enum NativeCallId {
    // Entities & Actors (0x002 - 0x015)
    CALL_SetEntityPosition          = 0x002,
    CALL_GetEntityX                 = 0x003,
    CALL_GetEntityY                 = 0x004,
    CALL_SetEntityFacing            = 0x005,
    CALL_GetEntityFacing            = 0x006,
    CALL_Force_Entity_Seat_State    = 0x007,
    CALL_Set_Vector_X               = 0x008,
    CALL_Set_Camera_Position        = 0x009,
    CALL_Set_Vector_Y               = 0x00A,
    CALL_Execute_Movement           = 0x00C,
    CALL_SetEntityAnim              = 0x00D,
    CALL_Hide_Entity                = 0x00F,
    CALL_Spawn_Event_Entity         = 0x010,
    CALL_Show_Emote                 = 0x011,
    CALL_Wait_For_Animation         = 0x012,
    CALL_GetOppositeFacing          = 0x013,
    CALL_GetEntityLocation          = 0x014,
    CALL_Entity_Action              = 0x015,
    CALL_Warp_Player                = 0x016,
    CALL_Pan_Camera_To              = 0x017,
    CALL_Wait_Camera_Stop           = 0x018,

    // Audio & Music (0x019 - 0x01D)
    CALL_PlayBGM                    = 0x019,
    CALL_StopBGM                    = 0x01A,
    CALL_PlaySong                   = 0x01B,
    CALL_StopAllSongs               = 0x01C,
    CALL_FadeOutBGM                 = 0x01D,

    // Dialogue, Choices & UI (0x01F - 0x031)
    CALL_TalkOpen                   = 0x01F,
    CALL_TalkClose                  = 0x020,
    CALL_TalkMessage                = 0x021,
    CALL_TalkMessageSlow            = 0x022,
    CALL_Print_Message              = 0x023,
    CALL_Show_Tre_Option_Menu       = 0x024,
    CALL_Draw_Menu_With_Header      = 0x026,
    CALL_TalkChoice2                = 0x027,
    CALL_TalkChoice3                = 0x028,
    CALL_TalkChoice4                = 0x029,
    CALL_TalkChoice5                = 0x02A,
    CALL_TalkChoice6                = 0x02B,
    CALL_Set_Name_Window            = 0x02C,
    CALL_Create_Select_List         = 0x02D,
    CALL_Set_Portrait               = 0x02F,
    CALL_Talk_Mini_Close            = 0x030,
    CALL_Set_Hearth_Anim            = 0x031,

    // Screen & Time Transitions (0x033 - 0x03B)
    CALL_Fade_Out                   = 0x033,
    CALL_Fade_In                    = 0x034,
    CALL_Tick_Overnight_Engine      = 0x035,
    CALL_Make_Delay                 = 0x036,
    CALL_Execute_Script             = 0x037,
    CALL_Check_Date                 = 0x03A,
    CALL_RNG_Generator              = 0x03C,
    CALL_Check_Flag                 = 0x03D,
    CALL_Set_Flag                   = 0x03E,

    // Inventory, Tools & Items (0x03F - 0x060)
    CALL_Inventory_Check            = 0x03F,
    CALL_Compare_Gift               = 0x040,
    CALL_Is_Item_Wrapped            = 0x041,
    CALL_Give_Food                  = 0x047,
    CALL_Give_Item                  = 0x048,
    CALL_Give_Item_Silent           = 0x049,
    CALL_Give_Item_Shelf            = 0x04A,
    CALL_Trigger_Machine_Processing = 0x04D,
    CALL_Check_Equped_Tool          = 0x04E,
    CALL_Give_Tool_In_ToolBox       = 0x050,
    CALL_Remove_Equipped_Item       = 0x051,
    CALL_Has_Met_NPC                = 0x053,
    CALL_Add_Item_To_Bag            = 0x058,
    CALL_Give_Tool_In_Inventory     = 0x059,
    CALL_Consume_Items_From_Inventory = 0x060,
    CALL_Player_Eat_Power_Berry_Anim = 0x061,
    CALL_Activate_Hot_Spring_Healing = 0x064,
    CALL_Unlock_Player_Input        = 0x069,
    CALL_Lock_Player_Input          = 0x06A,

    // Social, Friendship & Love (0x076 - 0x08E)
    CALL_Set_Goddess_Appearance_Flash = 0x076,
    CALL_GameCube_Link_Command      = 0x079,
    CALL_Is_NPC_Birthday            = 0x07B,
    CALL_Chek_Friendship_Points     = 0x07C,
    CALL_Give_Friendship_Points     = 0x07D,
    CALL_Add_Rival_Points           = 0x07E,
    CALL_Has_Spoken_To_NPC_Today    = 0x081,
    CALL_Check_If_Single            = 0x083,
    CALL_Warp_Entity_To_Map         = 0x084,
    CALL_Chek_Love_Points           = 0x086,
    CALL_Give_Love_Points           = 0x087,
    CALL_Add_Festival_Friendship_Bonus = 0x08A,
    CALL_Open_Shop_Buy_UI           = 0x08B,
    CALL_Open_Shop_Quantity_UI      = 0x08C,
    CALL_Reset_NPC_Schedule         = 0x08D
} NativeCallId;

// =============================================================================
// Script Engine Runtime State
// =============================================================================
#define VM_STACK_CAPACITY 64

typedef struct ScriptEngine {
    const u8 *pc;                     // Instruction Pointer
    s32 stack[VM_STACK_CAPACITY];     // Evaluation Stack
    u8  sp;                           // Stack Pointer
    
    s32 registers[8];                 // Scratchpad registers
    u32 flags[32];                    // 1024 global event bits
    
    bool is_running;
    bool is_halted_for_dialog;
    u16  current_dialog_id;
    u8   dialog_choice_selection;
} ScriptEngine;

// Engine prototypes
void ScriptEngine_Init(ScriptEngine *vm);
void ScriptEngine_Execute(ScriptEngine *vm, const u8 *bytecode);
void ScriptEngine_DispatchCall(ScriptEngine *vm, u32 call_id);
bool ScriptEngine_GetFlag(const ScriptEngine *vm, u16 flag_id);
void ScriptEngine_SetFlag(ScriptEngine *vm, u16 flag_id, bool value);

#endif // SCRIPT_ENGINE_H
