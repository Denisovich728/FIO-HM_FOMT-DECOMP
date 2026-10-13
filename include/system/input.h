#ifndef SYSTEM_INPUT_H
#define SYSTEM_INPUT_H

#include "../global.h"

// =============================================================================
// GBA Hardware Keypad & Port Input Interface
// =============================================================================

#define KEY_A         BIT(0)
#define KEY_B         BIT(1)
#define KEY_SELECT    BIT(2)
#define KEY_START     BIT(3)
#define KEY_RIGHT     BIT(4)
#define KEY_LEFT      BIT(5)
#define KEY_UP        BIT(6)
#define KEY_DOWN      BIT(7)
#define KEY_R         BIT(8)
#define KEY_L         BIT(9)

#define KEY_MASK      0x03FF
#define DPAD_MASK     (KEY_UP | KEY_DOWN | KEY_LEFT | KEY_RIGHT)

typedef struct InputState {
    u16 rawKeys;
    u16 pressed;   // Just pressed this frame (edge)
    u16 released;  // Just released this frame (edge)
    u16 held;      // Currently held down
    u16 previous;  // Held last frame
} InputState;

// Function Prototypes
void Input_Init(void);
void Input_Poll(void);
bool Input_IsDown(u16 keyMask);
bool Input_IsJustPressed(u16 keyMask);
bool Input_IsJustReleased(u16 keyMask);
u16  Input_GetHeldKeys(void);

#endif // SYSTEM_INPUT_H
