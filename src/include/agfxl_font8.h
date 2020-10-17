/**
 * @brief aGFXL Basic Font
 *
 * @author    Alexander Shepetko <a@shepetko.com>
 * @copyright MIT License
 */

#ifndef _AGFXL_FONT5x8_H_
#define _AGFXL_FONT5x8_H_

#include "agfxl.h"

static const uint8_t _font_8[] =
    {
        4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //   - 32 (whitespace)
        1, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x80, 0x00,  // ! - 33
        5, 0xd8, 0x48, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00,  // " - 34
        5, 0x00, 0x50, 0xf8, 0x50, 0x50, 0xf8, 0x50, 0x00,  // # - 35
        5, 0x20, 0x78, 0xA0, 0x70, 0x28, 0xF0, 0x20, 0x00,  // $ - 36
        7, 0x42, 0xA4, 0x48, 0x10, 0x24, 0x4A, 0x84, 0x00,  // % - 37
        5, 0x60, 0x90, 0x90, 0x60, 0xa8, 0x90, 0x98, 0x68,  // & - 38
        2, 0xc0, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,  // ' - 39
        3, 0x20, 0x40, 0x80, 0x80, 0x80, 0x40, 0x20, 0x00,  // ( - 40
        3, 0x80, 0x40, 0x20, 0x20, 0x20, 0x40, 0x80, 0x00,  // ) - 41
        3, 0xa0, 0x40, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00,  // * - 42
        5, 0x00, 0x00, 0x20, 0x20, 0xf8, 0x20, 0x20, 0x00,  // + - 43
        2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x80,  // , - 44
        4, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00,  // - - 45
        1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00,  // . - 46
        5, 0x08, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x00,  // / - 47
        5, 0x70, 0x88, 0x98, 0xA8, 0xC8, 0x88, 0x70, 0x00,  // 0 - 48
        5, 0x20, 0x60, 0xA0, 0x20, 0x20, 0x20, 0xF8, 0x00,  // 1 - 49
        5, 0x70, 0x88, 0x08, 0x30, 0x40, 0x80, 0xF8, 0x00,  // 2 - 50
        5, 0x70, 0x88, 0x08, 0x30, 0x08, 0x88, 0x70, 0x00,  // 3 - 51
        5, 0x18, 0x28, 0x48, 0x88, 0xF8, 0x08, 0x08, 0x00,  // 4 - 52
        5, 0xF8, 0x80, 0xF0, 0x08, 0x08, 0x08, 0xF0, 0x00,  // 5 - 53
        5, 0x70, 0x88, 0x80, 0xF0, 0x88, 0x88, 0x70, 0x00,  // 6 - 54
        5, 0xF8, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x00,  // 7 - 55
        5, 0x70, 0x88, 0x88, 0x70, 0x88, 0x88, 0x70, 0x00,  // 8 - 56
        5, 0x70, 0x88, 0x88, 0x78, 0x08, 0x88, 0x70, 0x00,  // 9 - 57
        1, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00,  // : - 58
        2, 0x00, 0x00, 0x40, 0x00, 0x00, 0x40, 0x80, 0x00,  // ; - 59
        4, 0x00, 0x10, 0x20, 0x40, 0x80, 0x40, 0x20, 0x10,  // < - 60
        4, 0x00, 0x00, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0x00,  // = - 61
        4, 0x00, 0x80, 0x40, 0x20, 0x10, 0x20, 0x40, 0x80,  // > - 62
        5, 0x70, 0x88, 0x08, 0x10, 0x20, 0x00, 0x20, 0x00,  // ? - 63
        4, 0x60, 0x90, 0xb0, 0xb0, 0xb0, 0x80, 0x70, 0x00,  // @ - 64
        5, 0x38, 0x48, 0x88, 0x88, 0xF8, 0x88, 0x88, 0x00,  // A - 65
        5, 0xF0, 0x88, 0x88, 0xF0, 0x88, 0x88, 0xF0, 0x00,  // B - 66
        5, 0x70, 0x88, 0x80, 0x80, 0x80, 0x88, 0x70, 0x00,  // C - 67
        5, 0xF0, 0x88, 0x88, 0x88, 0x88, 0x88, 0xF0, 0x00,  // D - 68
        5, 0xF8, 0x80, 0x80, 0xE0, 0x80, 0x80, 0xF8, 0x00,  // E - 69
        5, 0xF8, 0x80, 0x80, 0xE0, 0x80, 0x80, 0x80, 0x00,  // F - 70
        5, 0x78, 0x80, 0x80, 0x80, 0x98, 0x88, 0x78, 0x00,  // G - 71
        5, 0x88, 0x88, 0x88, 0xf8, 0x88, 0x88, 0x88, 0x00,  // H - 72
        3, 0xe0, 0x40, 0x40, 0x40, 0x40, 0x40, 0xe0, 0x00,  // I - 73
        4, 0x30, 0x10, 0x10, 0x10, 0x10, 0x90, 0x60, 0x00,  // J - 74
        5, 0x88, 0x90, 0xA0, 0xC0, 0xA0, 0x90, 0x88, 0x00,  // K - 75
        4, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xF0, 0x00,  // L - 76
        5, 0x88, 0xD8, 0xA8, 0x88, 0x88, 0x88, 0x88, 0x00,  // M - 77
        5, 0x88, 0x88, 0xC8, 0xA8, 0x98, 0x88, 0x88, 0x00,  // N - 78
        5, 0x70, 0x88, 0x88, 0x88, 0x88, 0x88, 0x70, 0x00,  // O - 79
        5, 0xf0, 0x88, 0x88, 0x88, 0xf0, 0x80, 0x80, 0x00,  // P - 80
        5, 0x70, 0x88, 0x88, 0x88, 0xA8, 0x90, 0x68, 0x00,  // Q - 81
        5, 0xF0, 0x88, 0x88, 0x88, 0xF0, 0x90, 0x88, 0x00,  // R - 82
        5, 0x78, 0x80, 0x80, 0x70, 0x08, 0x08, 0xF0, 0x00,  // S - 83
        5, 0xf8, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00,  // T - 84
        5, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x70, 0x00,  // U - 85
        5, 0x88, 0x88, 0x88, 0x88, 0x88, 0x50, 0x20, 0x00,  // V - 86
        5, 0x88, 0x88, 0x88, 0xa8, 0xa8, 0xd8, 0x88, 0x00,  // W - 87
        5, 0x88, 0x88, 0x50, 0x20, 0x50, 0x88, 0x88, 0x00,  // X - 88
        5, 0x88, 0x88, 0x88, 0x50, 0x20, 0x20, 0x20, 0x00,  // Y - 89
        5, 0xF8, 0x08, 0x10, 0x20, 0x40, 0x80, 0xF8, 0x00,  // Z - 90
        2, 0xC0, 0x80, 0x80, 0x80, 0x80, 0x80, 0xC0, 0x00,  // [ - 91
        5, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x08, 0x00,  //   - 92 (backslash)
        2, 0xc0, 0x40, 0x40, 0x40, 0x40, 0x40, 0xc0, 0x00,  // ] - 93
        3, 0x40, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ^ - 94
        5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00,  // _ - 95
        2, 0xc0, 0x80, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00,  // ` - 96
        5, 0x00, 0x00, 0x70, 0x08, 0x78, 0x88, 0x78, 0x00,  // a - 97
        5, 0x00, 0x80, 0x80, 0xf0, 0x88, 0x88, 0xf0, 0x00,  // b - 98
        5, 0x00, 0x00, 0x70, 0x88, 0x80, 0x88, 0x70, 0x00,  // c - 99
        5, 0x00, 0x08, 0x08, 0x78, 0x88, 0x88, 0x78, 0x00,  // d - 100
        5, 0x00, 0x00, 0x70, 0x88, 0xf8, 0x80, 0x70, 0x00,  // e - 101
        4, 0x00, 0x20, 0x50, 0x40, 0xe0, 0x40, 0x40, 0x00,  // f - 102
        5, 0x00, 0x00, 0x60, 0x90, 0x90, 0x70, 0x10, 0x60,  // g - 103
        4, 0x80, 0x80, 0x80, 0xe0, 0x90, 0x90, 0x90, 0x00,  // h - 104
        3, 0x00, 0x40, 0x00, 0xc0, 0x40, 0x40, 0xe0, 0x00,  // i - 105
        3, 0x00, 0x20, 0x00, 0x60, 0x20, 0x20, 0xa0, 0x40,  // j - 106
        4, 0x80, 0x80, 0x90, 0xa0, 0xc0, 0xa0, 0x90, 0x00,  // k - 107
        3, 0x00, 0xc0, 0x40, 0x40, 0x40, 0x40, 0xe0, 0x00,  // l - 108
        5, 0x00, 0x00, 0xd0, 0xa8, 0xa8, 0x88, 0x88, 0x00,  // m - 109
        5, 0x00, 0x00, 0xb0, 0xc8, 0x88, 0x88, 0x88, 0x00,  // n - 110
        5, 0x00, 0x00, 0x70, 0x88, 0x88, 0x88, 0x70, 0x00,  // o - 111
        5, 0x00, 0x00, 0xf0, 0x88, 0x88, 0xf0, 0x80, 0x80,  // p - 112
        5, 0x00, 0x00, 0x78, 0x88, 0x88, 0x78, 0x08, 0x08,  // q - 113
        5, 0x00, 0x00, 0xb0, 0xc8, 0x80, 0x80, 0x80, 0x00,  // r - 114
        4, 0x00, 0x00, 0x70, 0x80, 0x60, 0x10, 0xE0, 0x00,  // s - 115
        4, 0x00, 0x40, 0x40, 0xe0, 0x40, 0x40, 0x50, 0x20,  // t - 116
        5, 0x00, 0x00, 0x88, 0x88, 0x88, 0x98, 0x68, 0x00,  // u - 117
        5, 0x00, 0x00, 0x88, 0x88, 0x88, 0x50, 0x20, 0x00,  // v - 118
        5, 0x00, 0x00, 0x88, 0x88, 0xa8, 0xa8, 0x50, 0x00,  // w - 119
        5, 0x00, 0x00, 0x88, 0x50, 0x20, 0x50, 0x88, 0x00,  // x - 120
        4, 0x00, 0x00, 0x90, 0x90, 0x90, 0x70, 0x10, 0x60,  // y - 121
        5, 0x00, 0x00, 0xf8, 0x10, 0x20, 0x40, 0xf8, 0x00,  // z - 122
        3, 0x20, 0x40, 0x40, 0x80, 0x40, 0x40, 0x20, 0x00,  // { - 123
        1, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00,  // | - 124
        3, 0x80, 0x40, 0x40, 0x20, 0x40, 0x40, 0x80, 0x00,  // } - 125
        5, 0x40, 0xa8, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,  // ~ - 126
        0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ? - 127 (Delete)
        0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ? - 128 (Not implemented)
        0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ? - 129 (Not implemented)
        2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x80,  // , - 130
        0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ? - 131 (Not implemented)
        5, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd8, 0x48, 0x90,  // � - 132
        5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa8,  // � - 133
        5, 0x20, 0x20, 0xf8, 0x20, 0x20, 0x20, 0x20, 0x20,  // � - 134
        5, 0x20, 0x20, 0xf8, 0x20, 0x20, 0xf8, 0x20, 0x20,  // � - 135
        5, 0x30, 0x40, 0x80, 0xC0, 0x80, 0x40, 0x30, 0x00,  // � - 136
        0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ? - 137 (Not implemented)
        0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ? - 138 (Not implemented)
        0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ? - 139 (Not implemented)
        0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ? - 140 (Not implemented)
        0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ? - 141 (Not implemented)
        0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ? - 142 (Not implemented)
        0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ? - 143 (Not implemented)
        0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ? - 144 (Not implemented)
        2, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // � - 145
        2, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // � - 146
        3, 0xA0, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // � - 147
        3, 0xA0, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // � - 148
        2, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x00,  // � - 149
        4, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00,  // � - 150
        5, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00,  // � - 151
};

agfxl_font_t font_8 = {
    .ascii_offset = 32,
    .length = 120,
    .width = AGFXL_FONT_WIDTH_8,
    .height = 8,
    .content.c8 = _font_8,
};

#endif
