// =============================================================================
// Harvest Moon: Friends of Mineral Town - System: Calendar & Time Engine
// Tracks day/night cycles, hours, minutes, seasons, and day transitions
// =============================================================================

#include "../../include/system/time.h"
#include "../../include/farm/farm.h"
#include "../../include/farm/shipping_bin.h"

static TimeManager s_timeMgr;

void Time_Init(void)
{
    s_timeMgr.currentDate.year = 1;
    s_timeMgr.currentDate.season = SEASON_SPRING;
    s_timeMgr.currentDate.day = 2; // Game begins Spring 2
    s_timeMgr.currentDate.hour = START_HOUR;
    s_timeMgr.currentDate.minute = 0;
    
    s_timeMgr.tickCounter = 0;
    s_timeMgr.isPaused = false;
    s_timeMgr.isNightTime = false;
    s_timeMgr.todayWeather = WEATHER_SUNNY;
    s_timeMgr.tomorrowWeather = WEATHER_SUNNY;
}

void Time_Update(void)
{
    if (s_timeMgr.isPaused) return;

    s_timeMgr.tickCounter++;
    // In FoMT: 1 in-game minute = ~1 real second (or 10 min = 600 ticks)
    if (s_timeMgr.tickCounter >= 60) {
        s_timeMgr.tickCounter = 0;
        Time_AdvanceMinutes(10);
    }
}

void Time_AdvanceMinutes(u16 minutes)
{
    u16 totalMins = s_timeMgr.currentDate.minute + minutes;
    s_timeMgr.currentDate.minute = totalMins % 60;
    u16 hoursToAdd = totalMins / 60;
    
    if (hoursToAdd > 0) {
        s_timeMgr.currentDate.hour += hoursToAdd;
        if (s_timeMgr.currentDate.hour >= 18 || s_timeMgr.currentDate.hour < 6) {
            s_timeMgr.isNightTime = true;
        } else {
            s_timeMgr.isNightTime = false;
        }
        
        // 5:00 PM Shipping pickup trigger
        if (s_timeMgr.currentDate.hour == 17 && s_timeMgr.currentDate.minute == 0) {
            // Zack collects shipped items
        }
        
        // Automatic sleep at midnight / 24:00
        if (s_timeMgr.currentDate.hour >= SLEEP_HOUR) {
            Time_AdvanceToNextDay();
        }
    }
}

void Time_SetDate(u8 year, Season season, u8 day, u8 hour, u8 minute)
{
    s_timeMgr.currentDate.year = year;
    s_timeMgr.currentDate.season = season;
    s_timeMgr.currentDate.day = day;
    s_timeMgr.currentDate.hour = hour;
    s_timeMgr.currentDate.minute = minute;
    s_timeMgr.isNightTime = (hour >= 18 || hour < 6);
}

void Time_Pause(bool paused)
{
    s_timeMgr.isPaused = paused;
}

bool Time_IsNight(void)
{
    return s_timeMgr.isNightTime;
}

void Time_AdvanceToNextDay(void)
{
    s_timeMgr.currentDate.day++;
    if (s_timeMgr.currentDate.day > DAYS_PER_SEASON) {
        s_timeMgr.currentDate.day = 1;
        s_timeMgr.currentDate.season = (Season)((s_timeMgr.currentDate.season + 1) % SEASONS_PER_YEAR);
        if (s_timeMgr.currentDate.season == SEASON_SPRING) {
            s_timeMgr.currentDate.year++;
        }
        Farm_SeasonTransition();
    }
    
    // Reset hour to 6:00 AM
    s_timeMgr.currentDate.hour = START_HOUR;
    s_timeMgr.currentDate.minute = 0;
    s_timeMgr.isNightTime = false;
    
    // Shift weather
    s_timeMgr.todayWeather = s_timeMgr.tomorrowWeather;
    
    // Advance daily farm routines
    Farm_DayUpdate();
    ShippingBin_ResetDaily();
}
