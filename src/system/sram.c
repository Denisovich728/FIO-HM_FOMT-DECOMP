// =============================================================================
// Harvest Moon: Friends of Mineral Town - System: SRAM Save Manager
// Handles battery-backed SRAM persistence, save slots, and integrity checksums
// =============================================================================

#include "../../include/system/sram.h"
#include <string.h>

static u8 s_activeSlot = 0;
static u8 s_virtualSramBuffer[SRAM_TOTAL_SIZE];

bool Sram_Init(void)
{
    // Initialize or verify SRAM buffer
    s_activeSlot = Sram_GetActiveSlot();
    return true;
}

u16 Sram_CalculateChecksum(const u8 *data, u32 size)
{
    u16 checksum = 0;
    for (u32 i = 0; i < size; i++) {
        checksum = (checksum << 1) ^ data[i];
    }
    return checksum;
}

bool Sram_VerifyChecksum(u8 slot)
{
    if (slot >= 2) return false;
    u32 offset = slot * SRAM_SLOT_SIZE;
    SaveHeader *header = (SaveHeader *)&s_virtualSramBuffer[offset];
    
    if (header->magic != SRAM_MAGIC_HEADER) {
        return false;
    }
    
    u16 computed = Sram_CalculateChecksum(&s_virtualSramBuffer[offset + sizeof(SaveHeader)], 
                                          SRAM_SLOT_SIZE - sizeof(SaveHeader));
    return computed == header->checksum;
}

bool Sram_ReadSlot(u8 slot, void *dest, u32 size)
{
    if (slot >= 2 || !dest || size > SRAM_SLOT_SIZE) {
        return false;
    }
    u32 offset = slot * SRAM_SLOT_SIZE;
    memcpy(dest, &s_virtualSramBuffer[offset], size);
    return true;
}

bool Sram_WriteSlot(u8 slot, const void *src, u32 size)
{
    if (slot >= 2 || !src || size > SRAM_SLOT_SIZE) {
        return false;
    }
    u32 offset = slot * SRAM_SLOT_SIZE;
    memcpy(&s_virtualSramBuffer[offset], src, size);
    
    SaveHeader *header = (SaveHeader *)&s_virtualSramBuffer[offset];
    header->magic = SRAM_MAGIC_HEADER;
    header->slotIndex = slot;
    header->checksum = Sram_CalculateChecksum(&s_virtualSramBuffer[offset + sizeof(SaveHeader)], 
                                              SRAM_SLOT_SIZE - sizeof(SaveHeader));
    return true;
}

u8 Sram_GetActiveSlot(void)
{
    return s_activeSlot;
}
