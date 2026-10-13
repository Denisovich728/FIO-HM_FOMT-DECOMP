#ifndef M4A_H
#define M4A_H

#include "../global.h"

// =============================================================================
// Music Player 2000 (M4A) Sound Driver Definitions
// Source: FoMT GBA Sound Driver & AgbSound
// =============================================================================

#define SOUND_MODE_PCM        0x01
#define SOUND_MODE_PSG        0x02
#define MAX_CHANNELS          8

typedef struct SongHeader {
    u8 channelCount;
    u8 musicPlayerId;
    u8 priority;
    u8 reverb;
    u32 *toneData;
    u8 *partData[MAX_CHANNELS];
} SongHeader;

typedef struct SoundChannel {
    u8 status;
    u8 type;
    u8 rightVolume;
    u8 leftVolume;
    u8 attack;
    u8 decay;
    u8 sustain;
    u8 release;
    u32 frequency;
    const u8 *wavData;
} SoundChannel;

// Function Prototypes
void M4A_InitSoundDriver(void);
void M4A_PlaySong(u16 songId, u8 volume);
void M4A_StopSong(u16 songId);
void M4A_FadeOutSong(u16 songId, u16 speed);
void M4A_StopAllSongs(void);
void M4A_UpdateDriver(void);

#endif // M4A_H
