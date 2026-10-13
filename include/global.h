#ifndef GLOBAL_H
#define GLOBAL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

// =============================================================================
// GBA Fundamental Data Types
// =============================================================================
typedef uint8_t   u8;
typedef uint16_t  u16;
typedef uint32_t  u32;
typedef uint64_t  u64;

typedef int8_t    s8;
typedef int16_t   s16;
typedef int32_t   s32;
typedef int64_t   s64;

typedef volatile u8   vu8;
typedef volatile u16  vu16;
typedef volatile u32  vu32;
typedef volatile s8   vs8;
typedef volatile s16  vs16;
typedef volatile s32  vs32;

// Standard C / Decompiler Aliases
typedef unsigned int   uint;
typedef unsigned short ushort;
typedef unsigned char  uchar;
typedef unsigned long  ulong;

// =============================================================================
// Ghidra / Decompiler Primitive Types
// =============================================================================
typedef uint8_t   undefined;
typedef uint8_t   undefined1;
typedef uint16_t  undefined2;
typedef uint32_t  undefined3;
typedef uint32_t  undefined4;
typedef uint64_t  undefined8;
typedef uint8_t   byte;
typedef uint16_t  word;
typedef uint32_t  dword;
typedef uint64_t  qword;
typedef void      code;

// BIOS / Hardware Stub functions
#define software_interrupt(swi) ((void)0)

// =============================================================================
// Common Utility Macros
// =============================================================================
#define ARRAY_COUNT(arr) (sizeof(arr) / sizeof((arr)[0]))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define CLAMP(v, lo, hi) (MIN(MAX((v), (lo)), (hi)))
#define BIT(n) (1U << (n))

// =============================================================================
// 2D Vector Structure
// =============================================================================
typedef struct Vec2 {
    s16 x;
    s16 y;
} Vec2;

// =============================================================================
// In-Game Calendar & Time Structure
// =============================================================================
typedef enum Season {
    SEASON_SPRING = 0,
    SEASON_SUMMER = 1,
    SEASON_AUTUMN = 2,
    SEASON_WINTER = 3
} Season;

typedef enum Weather {
    WEATHER_SUNNY = 0,
    WEATHER_RAINY = 1,
    WEATHER_SNOWY = 2,
    WEATHER_TYPHOON = 3,
    WEATHER_BLIZZARD = 4
} Weather;

typedef struct GameDate {
    u8 year;
    Season season;
    u8 day;
    u8 hour;
    u8 minute;
} GameDate;

#endif // GLOBAL_H
