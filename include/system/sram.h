#ifndef SYSTEM_SRAM_H
#define SYSTEM_SRAM_H

#include "../global.h"

// =============================================================================
// FoMT 64 KB Battery SRAM Save Structure
// =============================================================================

#define SRAM_BASE_ADDR        0x0E000000
#define SRAM_TOTAL_SIZE       0x10000     // 64 KB
#define SRAM_SLOT_SIZE        0x3E00      // ~15.5 KB per save slot
#define SRAM_MAGIC_HEADER     0x484D4742  // "HMGB"

typedef struct SaveHeader {
    u32 magic;
    u16 checksum;
    u16 slotIndex;
    u32 playTimeSeconds;
    char playerName[8];
    char farmName[8];
    u32 money;
    u8 year;
    u8 season;
    u8 day;
    u8 pad;
} SaveHeader;

// Function Prototypes
bool Sram_Init(void);
bool Sram_VerifyChecksum(u8 slot);
bool Sram_ReadSlot(u8 slot, void *dest, u32 size);
bool Sram_WriteSlot(u8 slot, const void *src, u32 size);
u16  Sram_CalculateChecksum(const u8 *data, u32 size);
u8   Sram_GetActiveSlot(void);

#endif // SYSTEM_SRAM_H
