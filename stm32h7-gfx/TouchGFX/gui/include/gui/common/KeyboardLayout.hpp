#ifndef KEYBOARD_LAYOUT
#define KEYBOARD_LAYOUT

#include <touchgfx/widgets/Keyboard.hpp>
#include <touchgfx/hal/Types.hpp>
#include <fonts/ApplicationFontProvider.hpp>
#include "BitmapDatabase.hpp"

using namespace touchgfx;

/**
 * Array specifying the keys used in the CustomKeyboard.
 */

#if 1
static const Keyboard::Key keyArray[30] =
{
  {1,  Rect(14,           122, 52,  80), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID  },
  {2,  Rect(14 + 56 * 2,  122, 52,  80), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID  },
  {3,  Rect(14 + 28 * 2,  122, 52,  80), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID  },
  {4,  Rect(14 + 56 * 3,  122, 52,  80), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID  },
  {5,  Rect(14 + 56 * 4,  122, 52,  80), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID  },
  {6,  Rect(14 + 56 * 5,  122, 52,  80), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID  },
  {7,  Rect(14 + 56 * 6,  122, 52,  80), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID  },
  {8,  Rect(14 + 56 * 7,  122, 52,  80), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID  },
  {9,  Rect(14 + 56 * 8,  122, 52,  80), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID  },
  {10, Rect(14 + 56 * 9,  122, 52,  80), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID  },
  {11, Rect(14 + 56 * 10, 122, 52,  80), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID  },

  {12, Rect(14,           210, 52,  80), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID  },
  {13, Rect(14 + 56,      210, 52,  80), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID  },
  {14, Rect(14 + 56 * 2,  210, 52,  80), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID  },
  {15, Rect(14 + 56 * 3,  210, 52,  80), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID  },
  {16, Rect(14 + 56 * 4,  210, 52,  80), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID  },
  {17, Rect(14 + 56 * 5,  210, 52,  80), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID  },
  {18, Rect(14 + 56 * 6,  210, 52,  80), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID  },
  {19, Rect(14 + 56 * 7,  210, 52,  80), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID  },
  {20, Rect(14 + 56 * 8,  210, 52,  80), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID  },
  {21, Rect(14 + 56 * 9,  210, 52,  80), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID  },
  {22, Rect(14 + 56 * 10, 210, 52,  80), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID  },

  {23, Rect(126,          298, 52,  80), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID  },
  {24, Rect(126 + 56,     298, 52,  80), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID  },
  {25, Rect(126 + 56 * 2, 298, 52,  80), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID  },
  {26, Rect(126 + 56 * 3, 298, 52,  80), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID  },
  {27, Rect(126 + 56 * 4, 298, 52,  80), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID  },
  {28, Rect(126 + 56 * 5, 298, 52,  80), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID  },
  {29, Rect(126 + 56 * 6, 298, 52,  80), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID  },
  //{30, Rect(124,          386, 504, 80), BITMAP_KEYBOARD_SPACE_HIGHLIGHTED_ID}
  {30, Rect(124,          386, 390, 80), BITMAP_KEYBOARD_SPACE_HIGHLIGHTED_ID} // 504 - 114
};

#else // original layout
static const Keyboard::Key keyArray[30] =
{
    { 1, Rect(7, 61, 26, 40), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
    { 2, Rect(7 + 28, 61, 26, 40), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
    { 3, Rect(7 + 28 * 2, 61, 26, 40), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
    { 4, Rect(7 + 28 * 3, 61, 26, 40), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
    { 5, Rect(7 + 28 * 4, 61, 26, 40), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
    { 6, Rect(7 + 28 * 5, 61, 26, 40), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
    { 7, Rect(7 + 28 * 6, 61, 26, 40), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
    { 8, Rect(7 + 28 * 7, 61, 26, 40), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
    { 9, Rect(7 + 28 * 8, 61, 26, 40), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
    {10, Rect(7 + 28 * 9, 61, 26, 40), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
    {11, Rect(7 + 28 * 10, 61, 26, 40), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},

    {12, Rect(7, 105, 26, 40), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
    {13, Rect(7 + 28, 105, 26, 40), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
    {14, Rect(7 + 28 * 2, 105, 26, 40), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
    {15, Rect(7 + 28 * 3, 105, 26, 40), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
    {16, Rect(7 + 28 * 4, 105, 26, 40), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
    {17, Rect(7 + 28 * 5, 105, 26, 40), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
    {18, Rect(7 + 28 * 6, 105, 26, 40), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
    {19, Rect(7 + 28 * 7, 105, 26, 40), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
    {20, Rect(7 + 28 * 8, 105, 26, 40), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
    {21, Rect(7 + 28 * 9, 105, 26, 40), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
    {22, Rect(7 + 28 * 10, 105, 26, 40), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},

    {23, Rect(63, 149, 26, 40), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
    {24, Rect(63 + 28, 149, 26, 40), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
    {25, Rect(63 + 28 * 2, 149, 26, 40), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
    {26, Rect(63 + 28 * 3, 149, 26, 40), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
    {27, Rect(63 + 28 * 4, 149, 26, 40), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
    {28, Rect(63 + 28 * 5, 149, 26, 40), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
    {29, Rect(63 + 28 * 6, 149, 26, 40), BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID},
    {30, Rect(62, 193, 252, 40), BITMAP_KEYBOARD_SPACE_HIGHLIGHTED_ID}
};
#endif
/**
 * Callback areas for the special buttons on the CustomKeyboard.
 */
#if 1
static Keyboard::CallbackArea callbackAreas[4] =
{
  {Rect(10,  298, 112, 80), 0, BITMAP_KEYBOARD_KEY_SHIFT_HIGHLIGHTED_ID }, // caps-lock
  {Rect(516, 298, 112, 80), 0, BITMAP_KEYBOARD_KEY_DELETE_HIGHLIGHTED_ID}, // backspace
  {Rect(10,  386, 112, 80), 0, BITMAP_KEYBOARD_KEY_NUM_HIGHLIGHTED_ID   }, // mode
  {Rect(516, 386, 112, 80), 0, BITMAP_KEYBOARD_KEY_NUM_HIGHLIGHTED_ID   }, // enter-key
};
#else // original layout
static Keyboard::CallbackArea callbackAreas[3] =
{
    {Rect(5, 149, 56, 40), 0, BITMAP_KEYBOARD_KEY_SHIFT_HIGHLIGHTED_ID},     // caps-lock
    {Rect(258, 149, 56, 40), 0, BITMAP_KEYBOARD_KEY_DELETE_HIGHLIGHTED_ID},  // backspace
    {Rect(5, 193, 56, 40), 0, BITMAP_KEYBOARD_KEY_NUM_HIGHLIGHTED_ID},       // mode
};
#endif

/**
 * The layout for the CustomKeyboard.
 */

#if 1
static const Keyboard::Layout layout =
{
  BITMAP_KEYBOARD_BACKGROUND_ID,
  keyArray,
  30,
  callbackAreas,
  4, // number-of-callback
  /* Do not know what this does... VV*/  
  Rect(30, 30, 22 * 28, 80), // 입력된 글자 출력 영역 설정 //Rect(30, 20, 22 * 28, 80),
  TypedText(T_ENTEREDTEXT),
  0xFFFFFF,
  Typography::KEYBOARD,
  0
};
#else // original layout
static const Keyboard::Layout layout =
{
    BITMAP_KEYBOARD_BACKGROUND_ID,
    keyArray,
    30,
    callbackAreas,
    3,
    Rect(15, 10, 11 * 28, 40),
    TypedText(T_ENTEREDTEXT),
    0xFFFFFF,
    Typography::KEYBOARD,
    0
};
#endif

#endif
