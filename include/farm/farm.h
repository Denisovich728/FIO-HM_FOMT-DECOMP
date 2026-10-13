#ifndef FARM_H
#define FARM_H

#include "../global.h"
#include "shipping_bin.h"

#define FIELD_WIDTH  43
#define FIELD_HEIGHT 25

// =============================================================================
// Field Plot State
// =============================================================================
typedef enum CropType {
    CROP_NONE = 0,
    CROP_TURNIP,
    CROP_POTATO,
    CROP_CUCUMBER,
    CROP_STRAWBERRY,
    CROP_CABBAGE,
    CROP_TOMATO,
    CROP_CORN,
    CROP_ONION,
    CROP_PUMPKIN,
    CROP_PINEAPPLE,
    CROP_EGGPLANT,
    CROP_CARROT,
    CROP_SWEET_POTATO,
    CROP_SPINACH,
    CROP_GREEN_PEPPER,
    CROP_GRASS
} CropType;

typedef struct FieldPlot {
    u8 crop_type;
    u8 growth_stage;
    u8 is_watered : 1;
    u8 is_tilled : 1;
    u8 has_stone : 1;
    u8 has_wood : 1;
    u8 has_weed : 1;
    u8 padding : 3;
} FieldPlot;

typedef struct Field {
    FieldPlot plots[FIELD_HEIGHT][FIELD_WIDTH];
} Field;

// =============================================================================
// Overall Farm State
// =============================================================================
typedef struct Farm {
    char name[12];
    u32 lumber : 10;
    bool has_horse : 1;
    bool unk_flag1 : 1;
    bool unk_flag2 : 1;
    u32 padding : 19;
    
    // Subsystems
    ShippingBin shipping_bin;
    u8 farm_house_data[0x21C];
    u8 coop_data[0x1E0];
    u8 barn_data[0x3EC];
    Field field;
} Farm;

// Function prototypes
void Farm_Init(Farm *farm, const char *name);
Vec2 Farm_GetSpawnCoordinates(void);
Vec2 Farm_GetHouseCoordinates(void);
u32  Farm_GetLumber(const Farm *farm);
void Farm_AddLumber(Farm *farm, u32 amount);
void Farm_TakeLumber(Farm *farm, u32 amount);
void Farm_DayUpdate(Farm *farm, Weather weather, const GameDate *date);
void Farm_SeasonTransition(Farm *farm, Season new_season);

#endif // FARM_H
