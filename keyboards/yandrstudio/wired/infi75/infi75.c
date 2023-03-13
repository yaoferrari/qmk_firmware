// Copyright 2022 Y&R-Biu (@jiaxin96)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "infi75.h"

#ifdef RGB_MATRIX_ENABLE

led_config_t g_led_config = {
    {
        {0,  1,  2,  3,  4,   NO_LED,  5,  6,  7,  8,   NO_LED,  9,  10,  11,  12},
        {13,  14,  15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27},
        {28,  29,  30,  31,  32,  33,  34,  35,  36,  37,  38,  39,  40,  41,  42},
        {43,  44,  45,  46,  47,  48,  49,  50,  51,  52,  53,  54,   NO_LED,  55,   NO_LED},
        {56,  57,  58,  59,  60,  61,  62,  63,  64,  65,  66,   NO_LED,  67,  68,   NO_LED},
        {69,  70,  71,   NO_LED,   NO_LED,  72,   NO_LED,   NO_LED,   NO_LED,  73,  74,  75,   NO_LED,  76,  77},
    },
    {
        {0,0},{16,0},{32,0},{48,0},{64,0},       {96,0},{112,0},{128,0},{144,0},       {176,0},{192,0},{208,0},{224,0},
        {0,13},{16,13},{32,13},{48,13},{64,13},{80,13},{96,13},{112,13},{128,13},{144,13},{160,13},{176,13},{192,13},{208,13},{224,13},
        {0,26},{16,26},{32,26},{48,26},{64,26},{80,26},{96,26},{112,26},{128,26},{144,26},{160,26},{176,26},{192,26},{208,26},{224,26},
        {0,38},{16,38},{32,38},{48,38},{64,38},{80,38},{96,38},{112,38},{128,38},{144,38},{160,38},{176,38},       {208,38},
        {0,51},{16,51},{32,51},{48,51},{64,51},{80,51},{96,51},{112,51},{128,51},{144,51},{160,51},       {192,51},{208,51},
        {0,64},{16,64},{32,64},              {80,64},                     {144,64},{160,64},{176,64},       {208,64},{224,64},
        {192,0},{208,0},{224,0},{192,13},{208,13},{224,13},
        {176,38},{192,38},{208,38},{224,38},{176,51},{192,51},{208,51},{224,51}
    },
    {
      // LED Index to Flag
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4,
      2, 2, 2, 2, 2, 2,
      8, 8, 8, 8, 8, 8, 8, 8
    }
};
#endif
