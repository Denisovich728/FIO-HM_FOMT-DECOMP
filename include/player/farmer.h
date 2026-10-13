#ifndef FARMER_H
#define FARMER_H

#include "../global.h"

#define MAX_STAMINA_DEFAULT 150
#define MAX_FATIGUE_DEFAULT 100

// =============================================================================
// Tool Types & Tier Levels
// =============================================================================
typedef enum ToolType {
    TOOL_NONE = 0,
    TOOL_SICKLE,
    TOOL_HOE,
    TOOL_AXE,
    TOOL_HAMMER,
    TOOL_WATERING_CAN,
    TOOL_FISHING_ROD,
    TOOL_MILKER,
    TOOL_SHEARS,
    TOOL_BRUSH,
    TOOL_BELL
} ToolType;

typedef enum ToolTier {
    TIER_IRON = 0,
    TIER_COPPER = 1,
    TIER_SILVER = 2,
    TIER_GOLD = 3,
    TIER_MYSTRILE = 4,
    TIER_CURSED = 5,
    TIER_BLESSED = 6,
    TIER_MYTHIC = 7
} ToolTier;

typedef struct ToolItem {
    u8 tool_type;
    u8 tier_level;
    u16 experience;
} ToolItem;

// =============================================================================
// Rucksack Slot & Held Item
// =============================================================================
typedef struct RucksackItem {
    u16 item_id;
    u8 quantity;
    u8 quality;
} RucksackItem;

typedef struct Rucksack {
    u8 item_capacity;  // 4 or 8
    u8 tool_capacity;  // 4 or 8
    RucksackItem items[8];
    ToolItem tools[8];
} Rucksack;

// =============================================================================
// Farmer Character State
// =============================================================================
typedef struct Farmer {
    char name[12];
    s16 stamina;
    s16 fatigue;
    s16 max_stamina;
    
    Vec2 position;
    u8 direction; // 0=Down, 1=Up, 2=Left, 3=Right
    
    ToolItem equipped_tool;
    RucksackItem held_item;
    Rucksack rucksack;
    
    u32 gold;
    u16 power_berries_found;
} Farmer;

// Function prototypes
void Farmer_Init(Farmer *farmer, const char *name);
void Farmer_UpdateStamina(Farmer *farmer, s16 delta);
void Farmer_UpdateFatigue(Farmer *farmer, s16 delta);
void Farmer_UseEquippedTool(Farmer *farmer);
bool Rucksack_AddItem(Rucksack *rucksack, u16 item_id, u8 quantity);
bool Rucksack_RemoveItem(Rucksack *rucksack, u8 slot_index);

#endif // FARMER_H
