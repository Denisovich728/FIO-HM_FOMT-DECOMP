#ifndef FURNITURE_H
#define FURNITURE_H

#include "../global.h"

// =============================================================================
// Farm Buildings & Furniture
// =============================================================================

#define FRIDGE_MAX_SLOTS        64
#define SHELF_MAX_SLOTS         64
#define TOOL_CHEST_MAX_SLOTS    64

typedef struct StorageSlot {
    u16 itemId;
    u8  quantity;
    u8  quality;
} StorageSlot;

typedef struct FarmhouseAppliances {
    bool hasFridge;
    bool hasShelf;
    bool hasKitchen;
    bool hasMirror;
    bool hasClock;
    bool hasLargeBed;
    bool hasRecordPlayer;
    StorageSlot fridge[FRIDGE_MAX_SLOTS];
    StorageSlot shelf[SHELF_MAX_SLOTS];
    StorageSlot toolChest[TOOL_CHEST_MAX_SLOTS];
} FarmhouseAppliances;

typedef struct CoopState {
    u8 chickenCount;
    u8 maxChickens; // 4 or 8
    u8 incubatorSlot;
    u8 feedBinCount;
} CoopState;

typedef struct BarnState {
    u8 animalCount;
    u8 maxAnimals; // 8 or 16
    u8 pregnantSlot;
    u8 feedBinCount;
} BarnState;

// Function Prototypes
void FarmHouse_Init(void);
void ToolChest_Init(void);
void Fridge_Init(void);
void Shelf_Init(void);
void RecordPlayer_Init(void);
void Coop_Init(void);
void Barn_Init(void);
void Stable_Init(void);

#endif // FURNITURE_H
