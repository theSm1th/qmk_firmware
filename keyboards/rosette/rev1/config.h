// Copyright 2023 theSm1th (@theSm1th)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define RGBLIGHT_LAYERS
#define RGBLIGHT_LAYER_BLINK
#define RGBLED_NUM 9
#define RGBLIGHT_MODE_RGB_TEST
#define RGBLIGHT_MODE_RAINBOW
#define ENCODERS_PAD_A { GP13 }
#define ENCODERS_PAD_B { GP12 }
#define WS2812_PIO_USE_PIO1
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW
