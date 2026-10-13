// =============================================================================
// Harvest Moon: Friends of Mineral Town - System: Input Manager
// Processes GBA keypad states, edge transitions, and PC port abstractions
// =============================================================================

#include "../../include/system/input.h"

static InputState s_inputState;

void Input_Init(void)
{
    s_inputState.rawKeys = 0;
    s_inputState.pressed = 0;
    s_inputState.released = 0;
    s_inputState.held = 0;
    s_inputState.previous = 0;
}

void Input_Poll(void)
{
    // On hardware, read ~REG_KEYINPUT & KEY_MASK
    // On PC port, this is updated from SDL / Raylib / MonoGame inputs
    u16 current = s_inputState.rawKeys & KEY_MASK;
    
    s_inputState.pressed  = current & ~s_inputState.previous;
    s_inputState.released = ~current & s_inputState.previous;
    s_inputState.held     = current;
    s_inputState.previous = current;
}

bool Input_IsDown(u16 keyMask)
{
    return (s_inputState.held & keyMask) != 0;
}

bool Input_IsJustPressed(u16 keyMask)
{
    return (s_inputState.pressed & keyMask) != 0;
}

bool Input_IsJustReleased(u16 keyMask)
{
    return (s_inputState.released & keyMask) != 0;
}

u16 Input_GetHeldKeys(void)
{
    return s_inputState.held;
}
