#ifndef SYSTEM_TIME_H
#define SYSTEM_TIME_H

#include "../global.h"

// =============================================================================
// Mineral Town In-Game Time & Clock System
// =============================================================================

#define MINUTES_PER_TICK    10
#define START_HOUR          6    // 6:00 AM
#define SLEEP_HOUR          24   // Midnight / 24:00
#define DAYS_PER_SEASON     30
#define SEASONS_PER_YEAR    4

typedef struct TimeManager {
    GameDate currentDate;
    u16 tickCounter;
    bool isPaused;
    bool isNightTime;
    Weather todayWeather;
    Weather tomorrowWeather;
} TimeManager;

// Function Prototypes
void Time_Init(void);
void Time_Update(void);
void Time_AdvanceMinutes(u16 minutes);
void Time_SetDate(u8 year, Season season, u8 day, u8 hour, u8 minute);
void Time_Pause(bool paused);
bool Time_IsNight(void);
void Time_AdvanceToNextDay(void);

#endif // SYSTEM_TIME_H
