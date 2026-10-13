#ifndef SHIPPING_BIN_H
#define SHIPPING_BIN_H

#include "../global.h"

// =============================================================================
// Product ID Constants
// =============================================================================
enum ProductId {
    PRODUCT_TURNIP = 0,
    PRODUCT_POTATO = 1,
    PRODUCT_CUCUMBER = 2,
    PRODUCT_STRAWBERRY = 3,
    PRODUCT_CABBAGE = 4,
    PRODUCT_TOMATO = 5,
    PRODUCT_CORN = 6,
    PRODUCT_ONION = 7,
    PRODUCT_PUMPKIN = 8,
    PRODUCT_PINEAPPLE = 9,
    PRODUCT_EGGPLANT = 10,
    PRODUCT_CARROT = 11,
    PRODUCT_SWEET_POTATO = 12,
    PRODUCT_SPINACH = 13,
    PRODUCT_GREEN_PEPPER = 14,
    PRODUCT_REGULAR_QUALITY_EGG = 15,
    PRODUCT_GOOD_QUALITY_EGG = 16,
    PRODUCT_HIGH_QUALITY_EGG = 17,
    PRODUCT_SPECIAL_QUALITY_EGG = 18,
    PRODUCT_GOLDEN_EGG = 19,
    PRODUCT_P_EGG = 20,
    PRODUCT_MAYONNAISE_S = 21,
    PRODUCT_MAYONNAISE_M = 22,
    PRODUCT_MAYONNAISE_L = 23,
    PRODUCT_MAYONNAISE_G = 24,
    PRODUCT_MAYONNAISE_P = 25,
    PRODUCT_MAYONNAISE_X = 26,
    PRODUCT_MILK_S = 27,
    PRODUCT_MILK_M = 28,
    PRODUCT_MILK_L = 29,
    PRODUCT_MILK_G = 30,
    PRODUCT_MILK_P = 31,
    PRODUCT_MILK_X = 32,
    PRODUCT_CHEESE_S = 33,
    PRODUCT_CHEESE_M = 34,
    PRODUCT_CHEESE_L = 35,
    PRODUCT_CHEESE_G = 36,
    PRODUCT_CHEESE_P = 37,
    PRODUCT_CHEESE_X = 38,
    PRODUCT_WOOL_S = 39,
    PRODUCT_WOOL_M = 40,
    PRODUCT_WOOL_L = 41,
    PRODUCT_WOOL_G = 42,
    PRODUCT_WOOL_P = 43,
    PRODUCT_WOOL_X = 44,
    PRODUCT_YARN_S = 45,
    PRODUCT_YARN_M = 46,
    PRODUCT_YARN_L = 47,
    PRODUCT_YARN_G = 48,
    PRODUCT_YARN_P = 49,
    PRODUCT_YARN_X = 50,
    PRODUCT_JUNK_ORE = 51,
    PRODUCT_COPPER = 52,
    PRODUCT_SILVER = 53,
    PRODUCT_GOLD = 54,
    PRODUCT_MYSTRILE = 55,
    PRODUCT_ORICHALC = 56,
    PRODUCT_ADAMANTITE = 57,
    PRODUCT_MYTHIC_STONE = 58,
    PRODUCT_PINK_DIAMOND = 59,
    PRODUCT_ALEXANDRITE = 60,
    PRODUCT_MOON_STONE = 61,
    PRODUCT_SAND_ROSE = 62,
    PRODUCT_DIAMOND = 63,
    PRODUCT_EMERALD = 64,
    PRODUCT_RUBY = 65,
    PRODUCT_TOPAZ = 66,
    PRODUCT_PERIDOT = 67,
    PRODUCT_FLUORITE = 68,
    PRODUCT_AGATE = 69,
    PRODUCT_AMETHYST = 70,
    PRODUCT_CHOCOLATE = 71,
    NUM_PRODUCTS = 72
};

// =============================================================================
// Product Statistics Tracking
// =============================================================================
typedef struct ProductStat {
    u32 amount_shipped : 24;
    u32 display_enabled : 1;
    u32 padding : 7;
} ProductStat;

// =============================================================================
// Shipping Bin State
// =============================================================================
typedef struct ShippingBin {
    u32 value_shipped;
    ProductStat product_stats[NUM_PRODUCTS];
} ShippingBin;

// Function prototypes
void ShippingBin_Init(ShippingBin *bin);
void ShippingBin_ResetDaily(ShippingBin *bin);
u32  ShippingBin_GetValueShipped(const ShippingBin *bin);
bool ShippingBin_IsDisplayEnabled(const ShippingBin *bin, int product_id);
u32  ShippingBin_GetAmountShipped(const ShippingBin *bin, int product_id);
void ShippingBin_ShipItem(ShippingBin *bin, int product_id, int amount);
bool ShippingBin_HasShippedOneOfEachProduct(const ShippingBin *bin);
bool ShippingBin_HasShippedOneOfEachCrop(const ShippingBin *bin);

#endif // SHIPPING_BIN_H
