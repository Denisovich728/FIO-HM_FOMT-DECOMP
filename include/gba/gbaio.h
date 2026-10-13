#ifndef GBAIO_H
#define GBAIO_H

#include "../global.h"

// =============================================================================
// GBA Memory Mapped I/O Registers
// =============================================================================
#define REG_BASE 0x04000000

// LCD Registers
#define REG_DISPCNT     (*(vu16 *)(REG_BASE + 0x0000))
#define REG_DISPSTAT    (*(vu16 *)(REG_BASE + 0x0004))
#define REG_VCOUNT      (*(vu16 *)(REG_BASE + 0x0006))
#define REG_BG0CNT      (*(vu16 *)(REG_BASE + 0x0008))
#define REG_BG1CNT      (*(vu16 *)(REG_BASE + 0x000A))
#define REG_BG2CNT      (*(vu16 *)(REG_BASE + 0x000C))
#define REG_BG3CNT      (*(vu16 *)(REG_BASE + 0x000E))
#define REG_BG0HOFS     (*(vu16 *)(REG_BASE + 0x0010))
#define REG_BG0VOFS     (*(vu16 *)(REG_BASE + 0x0012))

// DMA 3 Controller
#define REG_DMA3SAD     (*(vu32 *)(REG_BASE + 0x00D4))
#define REG_DMA3DAD     (*(vu32 *)(REG_BASE + 0x00D8))
#define REG_DMA3CNT     (*(vu32 *)(REG_BASE + 0x00DC))

// Timers
#define REG_TM0CNT_L    (*(vu16 *)(REG_BASE + 0x0100))
#define REG_TM0CNT_H    (*(vu16 *)(REG_BASE + 0x0102))

// Keypad
#define REG_KEYINPUT    (*(vu16 *)(REG_BASE + 0x0130))

// Interrupt Control
#define REG_IE          (*(vu16 *)(REG_BASE + 0x0200))
#define REG_IF          (*(vu16 *)(REG_BASE + 0x0202))
#define REG_WAITCNT     (*(vu16 *)(REG_BASE + 0x0204))
#define REG_IME         (*(vu16 *)(REG_BASE + 0x0208))

#endif // GBAIO_H
