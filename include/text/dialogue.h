#ifndef TEXT_DIALOGUE_H
#define TEXT_DIALOGUE_H

#include "../global.h"

// =============================================================================
// FoMT Dialogue System & String Decoding
// =============================================================================

#define DIALOGUE_BUFFER_SIZE    512
#define MAX_CHOICES             6

typedef struct DialogueState {
    const char *currentText;
    u16 charIndex;
    u8  portraitId;
    u8  speakerNpcId;
    bool isWindowOpen;
    bool isWaitingClick;
    bool hasChoices;
    u8  choiceCount;
    u8  selectedChoice;
    char formattedBuffer[DIALOGUE_BUFFER_SIZE];
} DialogueState;

// Function Prototypes
void Dialogue_Init(void);
void Dialogue_Open(void);
void Dialogue_Close(void);
void Dialogue_SetSpeaker(u8 speakerId, u8 portraitId);
void Dialogue_SetMessage(const char *rawText);
void Dialogue_SetStringId(u32 stringId);
bool Dialogue_Advance(void);
u8   Dialogue_GetChoice(void);

#endif // TEXT_DIALOGUE_H
