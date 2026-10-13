#ifndef ANIMALS_H
#define ANIMALS_H

#include "../global.h"

// =============================================================================
// Animal Data Structures
// =============================================================================
typedef struct AnimalBase {
    char name[12];
    u8 affection;        // 0 to 255 (up to 10 hearts)
    u8 mood;             // Happiness / stress level
    bool is_fed;
    bool is_talked_to;
    bool is_brushed;
    bool is_sick;
    u8 days_sick;
    u8 days_pregnant;
    u16 festival_wins;
} AnimalBase;

typedef struct Cow {
    AnimalBase base;
    u8 milk_quality;     // S, M, L, G, P, X
    bool has_been_milked;
} Cow;

typedef struct Sheep {
    AnimalBase base;
    u8 wool_quality;     // S, M, L, G, P, X
    bool has_been_sheared;
    u8 days_until_wool_regrows;
} Sheep;

typedef struct Chicken {
    AnimalBase base;
    u8 egg_quality;      // Normal, Good, High, Special, Golden, P, X
    bool has_laid_egg;
} Chicken;

typedef struct Dog {
    AnimalBase base;
    u8 ball_fetch_level;
    u8 frisbee_level;
    bool is_adult;
} Dog;

typedef struct Horse {
    AnimalBase base;
    u8 speed_level;
    bool has_saddle;
    bool is_adult;
} Horse;

// Function prototypes
void Animal_UpdateDailyHealth(AnimalBase *animal);
void Cow_ProduceMilk(Cow *cow);
void Sheep_ProduceWool(Sheep *sheep);
void Chicken_LayEgg(Chicken *chicken);

#endif // ANIMALS_H
