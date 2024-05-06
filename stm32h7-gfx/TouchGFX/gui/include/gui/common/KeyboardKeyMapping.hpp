#ifndef KEYBOARD_KEY_MAPPING_H
#define KEYBOARD_KEY_MAPPING_H

#include <touchgfx/widgets/Keyboard.hpp>
using namespace touchgfx;

/**
 * This file contains all the keymappings for the CustomKeyboard.
 */
static const Keyboard::KeyMapping keyMappingsAlphaLower[30] =
{
    { 1, 113},  // q
    { 2, 119},  // w
    { 3, 101},  // e
    { 4, 114},  // r
    { 5, 116},  // t
    { 6, 121},  // y
    { 7, 117},  // u
    { 8, 105},  // i
    { 9, 111},  // o
    {10, 112},  // p
    {11, 45},   // -
    {12,  97},  // a
    {13, 115},  // s
    {14, 100},  // d
    {15, 102},  // f
    {16, 103},  // g
    {17, 104},  // h
    {18, 106},  // j
    {19, 107},  // k
    {20, 108},  // l
    {21, 46},   // .
    {22, 44},   // ,
    {23, 122},  // z
    {24, 120},  // x
    {25,  99},  // c
    {26, 118},  // v
    {27,  98},  // b
    {28, 110},  // n
    {29, 109},  // m
    {30,  32},  // space
};

static const Keyboard::KeyMappingList keyMappingListAlphaLower =
{
    keyMappingsAlphaLower,
    30
};

static const Keyboard::KeyMapping keyMappingsAlphaUpper[30] =
{
    { 1, 113 - 32},  // Q
    { 2, 119 - 32},  // W
    { 3, 101 - 32},  // E
    { 4, 114 - 32},  // R
    { 5, 116 - 32},  // T
    { 6, 121 - 32},  // Y
    { 7, 117 - 32},  // U
    { 8, 105 - 32},  // I
    { 9, 111 - 32},  // O
    {10, 112 - 32},  // P
    {11, 47},        // /
    {12,  97 - 32},  // A
    {13, 115 - 32},  // S
    {14, 100 - 32},  // D
    {15, 102 - 32},  // F
    {16, 103 - 32},  // G
    {17, 104 - 32},  // H
    {18, 106 - 32},  // J
    {19, 107 - 32},  // K
    {20, 108 - 32},  // L
    {21, 58},        // :
    {22, 59},        //
    {23, 122 - 32},  // Z
    {24, 120 - 32},  // X
    {25,  99 - 32},  // C
    {26, 118 - 32},  // V
    {27,  98 - 32},  // B
    {28, 110 - 32},  // N
    {29, 109 - 32},  // M
    {30,  32}        // space
};

static const Keyboard::KeyMappingList keyMappingListAlphaUpper =
{
    keyMappingsAlphaUpper,
    30
};

static const Keyboard::KeyMapping keyMappingsNumLower[30] =
{
    { 1,  49},  // 1
    { 2,  50},  // 2
    { 3,  51},  // 3
    { 4,  52},  // 4
    { 5,  53},  // 5
    { 6,  54},  // 6
    { 7,  55},  // 7
    { 8,  56},  // 8
    { 9,  57},  // 9
    {10,  48},  // 0
    {11,  64},  // @

    {12,  35},  // #
    {13,  36},  // $
    {14,  37},  // %
    {15,  38},  // &
    {16,  42},  // *
    {17,  45},  // -
    {18,  43},  // +
    {19,  40},  // (
    {20,  41},  // )
    {21,  33},  // !
    {22,  34},  // "

    {23,  39},  // '
    {24,  58},  // :
    {25,  59},  // ;
    {26,  47},  // /
    {27,  63},  // ?
    {28,  44},  // ,
    {29,  46},  // .

    {30,  32}   // space
};

static const Keyboard::KeyMappingList keyMappingListNumLower =
{
    keyMappingsNumLower,
    30
};

static const Keyboard::KeyMapping keyMappingsNumUpper[30] =
{
    { 1,  126},  // ~
    { 2,  177},  // +/-
    { 3,  215},  // x
    { 4,  247},  // -
    { 5,  8226}, // *
    { 6,  186},  // o
    { 7,  96},   // '
    { 8,  180},  // '
    { 9,  123},  // {
    {10,  125},  // }
    {11,  169},  // (c)

    {12, 163},   // pound
    {13,  8364}, // euro
    {14,  94},   // ^
    {15,  174},  // (R)
    {16,  165},  // yen
    {17,  95},   // _
    {18,  61},   // =
    {19,  91},   // [
    {20,  93},   // ]
    {21,  60},   // <
    {22, 62},    // >

    {23,  161},  // !
    {24,  162},  // cent
    {25,  124},  // |
    {26,  92},   // \ .
    {27,  191},  // ?
    {28,  44},   // ,
    {29,  46},   // .

    {30,  32}   // space
};

static const Keyboard::KeyMappingList keyMappingListNumUpper =
{
    keyMappingsNumUpper,
    30
};

static const Keyboard::KeyMapping keyMappingsKorUpper[30] =
{
  {1,  0x3143}, // ㅃ
  {2,  0x3149}, // ㅉ
  {3,  0x3138}, // ㄸ
  {4,  0x3132}, // ㄲ
  {5,  0x3146}, // ㅆ
  {6,  0x315B}, // ㅛ
  {7,  0x3155}, // ㅕ
  {8,  0x3151}, // ㅑ
  {9,  0x3152}, // ㅒ
  {10, 0x3156}, // ㅖ
  {11, 47    }, // /

  {12, 0x3141}, // ㅁ
  {13, 0x3134}, // ㄴ
  {14, 0x3147}, // ㅇ
  {15, 0x3139}, // ㄹ
  {16, 0x314E}, // ㅎ
  {17, 0x3157}, // ㅗ
  {18, 0x3153}, // ㅓ
  {19, 0x314F}, // ㅏ
  {20, 0x3163}, // ㅣ
  {21, 58    }, // :
  {22, 59    }, // ;

  {23, 0x314B}, // ㅋ
  {24, 0x314C}, // ㅌ
  {25, 0x314A}, // ㅊ
  {26, 0x314D}, // ㅍ
  {27, 0x3160}, // ㅠ
  {28, 0x315C}, // ㅜ
  {29, 0x3161}, // ㅡ

  {30, 32    }  // space
};

static const Keyboard::KeyMappingList keyMappingListKorUpper =
{
    keyMappingsKorUpper,
    30
};

static const Keyboard::KeyMapping keyMappingsKorLower[30] =
{
  {1,  0x3142}, // ㅂ
  {2,  0x3148}, // ㅈ
  {3,  0x3137}, // ㄷ
  {4,  0x3131}, // ㄱ
  {5,  0x3145}, // ㅅ
  {6,  0x315B}, // ㅛ
  {7,  0x3155}, // ㅕ
  {8,  0x3151}, // ㅑ
  {9,  0x3150}, // ㅐ
  {10, 0x3154}, // ㅔ
  {11, 47    }, // /

  {12, 0x3141}, // ㅁ
  {13, 0x3134}, // ㄴ
  {14, 0x3147}, // ㅇ
  {15, 0x3139}, // ㄹ
  {16, 0x314E}, // ㅎ
  {17, 0x3157}, // ㅗ
  {18, 0x3153}, // ㅓ
  {19, 0x314F}, // ㅏ
  {20, 0x3163}, // ㅣ
  {21, 46    }, // .
  {22, 44    }, // ,

  {23, 0x314B}, // ㅋ
  {24, 0x314C}, // ㅌ
  {25, 0x314A}, // ㅊ
  {26, 0x314D}, // ㅍ
  {27, 0x3160}, // ㅠ
  {28, 0x315C}, // ㅜ
  {29, 0x3161}, // ㅡ

  {30, 32    }  // space
};

static const Keyboard::KeyMappingList keyMappingListKorLower =
{
    keyMappingsKorLower,
    30
};

#endif
