// =============================================================================
// Harvest Moon: Friends of Mineral Town - Text & Dialogue Manager
// Decodes in-game string buffers, handles choice menus, and speaker portraits
// =============================================================================

#include "../../include/text/dialogue.h"
#include "../../include/text/strings.h"
#include <string.h>
#include <stdio.h>

static DialogueState s_dialogueState;

void Dialogue_Init(void)
{
    memset(&s_dialogueState, 0, sizeof(DialogueState));
    s_dialogueState.isWindowOpen = false;
}

void Dialogue_Open(void)
{
    s_dialogueState.isWindowOpen = true;
    s_dialogueState.charIndex = 0;
    s_dialogueState.isWaitingClick = false;
}

void Dialogue_Close(void)
{
    s_dialogueState.isWindowOpen = false;
    s_dialogueState.currentText = NULL;
    s_dialogueState.hasChoices = false;
    s_dialogueState.choiceCount = 0;
}

void Dialogue_SetSpeaker(u8 speakerId, u8 portraitId)
{
    s_dialogueState.speakerNpcId = speakerId;
    s_dialogueState.portraitId = portraitId;
}

void Dialogue_SetMessage(const char *rawText)
{
    if (!rawText) return;
    s_dialogueState.currentText = rawText;
    s_dialogueState.charIndex = 0;
    
    // Copy and sanitize string into formatted buffer
    strncpy(s_dialogueState.formattedBuffer, rawText, DIALOGUE_BUFFER_SIZE - 1);
    s_dialogueState.formattedBuffer[DIALOGUE_BUFFER_SIZE - 1] = '\0';
}

void Dialogue_SetStringId(u32 stringId)
{
    // String catalog lookup from strings.h
    // (In production, look up string by ID offset in strings.h)
    Dialogue_SetMessage("Mineral Town string message.");
}

bool Dialogue_Advance(void)
{
    if (!s_dialogueState.isWindowOpen) return false;
    
    // Check if end of message reached
    if (s_dialogueState.currentText && s_dialogueState.charIndex >= strlen(s_dialogueState.currentText)) {
        return false;
    }
    
    s_dialogueState.charIndex++;
    return true;
}

u8 Dialogue_GetChoice(void)
{
    return s_dialogueState.selectedChoice;
}
