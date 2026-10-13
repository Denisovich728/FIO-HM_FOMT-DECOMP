#ifndef ITEM_H
#define ITEM_H

#include "../global.h"

// =============================================================================
// Item Data Definition
// =============================================================================
typedef struct ItemDef {
    u16 id;
    u16 buy_price;
    u16 sell_price;
    s8 stamina_effect;
    s8 fatigue_effect;
    u8 category;
    const char *name;
} ItemDef;

// Function prototypes
u16 Item_GetBuyPrice(u16 item_id);
u16 Item_GetSellPrice(u16 item_id);
s8  Item_GetStaminaEffect(u16 item_id);
s8  Item_GetFatigueEffect(u16 item_id);
const char *Item_GetDescription(u16 item_id);

#endif // ITEM_H
