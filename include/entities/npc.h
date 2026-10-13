#ifndef NPC_H
#define NPC_H

#include "../global.h"

// =============================================================================
// Mineral Town Villagers & Bachelorettes
// =============================================================================

typedef enum VillagerId {
    NPC_KAREN       = 0,
    NPC_POPURI      = 1,
    NPC_ELLI        = 2,
    NPC_ANN         = 3,
    NPC_MARY        = 4,
    NPC_RICK        = 5,
    NPC_CLIFF       = 6,
    NPC_DOCTOR      = 7,
    NPC_GRAY        = 8,
    NPC_KAI         = 9,
    NPC_GODDESS     = 10,
    NPC_KAPPA       = 11,
    NPC_GOURMET     = 12,
    NPC_WON         = 13,
    NPC_THOMAS      = 14,
    NPC_HARRIS      = 15,
    NPC_ELLEN       = 16,
    NPC_JEFF        = 17,
    NPC_SASHA       = 18,
    NPC_LILLIA      = 19,
    NPC_CARTER      = 20,
    NPC_DUKE        = 21,
    NPC_MANNA       = 22,
    NPC_DOUG        = 23,
    NPC_BASIL       = 24,
    NPC_ANNA        = 25,
    NPC_SAIBARA     = 26,
    NPC_GOTZ        = 27,
    NPC_BARLEY      = 28,
    NPC_MAY         = 29,
    NPC_STU         = 30,
    NPC_VAN         = 31,
    NPC_LOU         = 32,
    // Harvest Sprites
    NPC_CHEF        = 33,
    NPC_NAUGHTY     = 34,
    NPC_BOLD        = 35,
    NPC_STODGY      = 36,
    NPC_TIMID       = 37,
    NPC_AQUA        = 38,
    NPC_HOGGY       = 39,
    NPC_COUNT       = 40
} VillagerId;

typedef struct NPCData {
    u16 friendship;     // Friendship points (0 - 255)
    u16 affection;      // Affection points for bachelorettes (0 - 65535)
    u8  locationId;     // Current map internal ID
    Vec2 position;      // Grid / Pixel coordinate
    u8  facing;         // 0: Down, 1: Up, 2: Left, 3: Right
    u8  heartLevel;     // 0: Black, 1: Purple, 2: Blue, 3: Green, 4: Yellow, 5: Orange, 6: Red
    bool giftGivenToday;
    bool talkedToday;
} NPCData;

// Function Prototypes
void NPC_InitAll(void);
void NPC_UpdateSchedule(u8 hour, Season season, Weather weather);
void NPC_AddAffection(VillagerId id, s16 delta);
void NPC_AddFriendship(VillagerId id, s16 delta);
u16  NPC_GetAffection(VillagerId id);
u16  NPC_GetFriendship(VillagerId id);
bool Bachelorette_CheckHeartEvent(VillagerId id, u8 eventLevel);
void HarvestSprite_PerformChores(VillagerId id, u8 choreType);

#endif // NPC_H
