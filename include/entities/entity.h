#ifndef ENTITY_H
#define ENTITY_H

#include "../global.h"

// =============================================================================
// World Interactive Entities & Actor Management
// =============================================================================

typedef enum EntityType {
    ENTITY_TYPE_NONE = 0,
    ENTITY_TYPE_PLAYER,
    ENTITY_TYPE_NPC,
    ENTITY_TYPE_ANIMAL,
    ENTITY_TYPE_ITEM_PROP,
    ENTITY_TYPE_TRIGGER,
    ENTITY_TYPE_WARP
} EntityType;

typedef struct BoundingBox {
    s16 minX;
    s16 minY;
    s16 maxX;
    s16 maxY;
} BoundingBox;

typedef struct WorldEntity {
    u16 id;
    EntityType type;
    Vec2 position;
    Vec2 velocity;
    u8 facing;
    u16 animId;
    u8 animFrame;
    u8 animDelay;
    bool isActive;
    bool isVisible;
    BoundingBox bounds;
} WorldEntity;

// Function Prototypes
void Entity_InitWorldActors(void);
void Entity_UpdatePositions(void);
void Entity_ProcessCollisions(void);
WorldEntity *Entity_FindById(u16 id);
void Entity_Spawn(EntityType type, s16 x, s16 y);
void Entity_Despawn(u16 id);

#endif // ENTITY_H
