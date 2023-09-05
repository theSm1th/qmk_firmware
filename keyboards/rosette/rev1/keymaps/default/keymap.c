// Copyright 2023 theSm1th (@theSm1th)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "keycodes.h"
#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _L1,
    _L2,
    _L3
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │ 7 │ 8 │ 9 │
     * ├───┼───┼───┤
     * │ 4 │ 5 │ 6 │
     * ├───┼───┼───┤
     * │ 1 │ 2 │ 3 │
     * └───┴───┴───┘

     */
    [_BASE] = LAYOUT(
        KC_7,       KC_8,
        EE_CLR,       QK_BOOT,       DB_TOGG,
        RGB_MODE_FORWARD,       RGB_MODE_RAINBOW,       RGB_MODE_RGBTEST
    ),
    [_L1] = LAYOUT(
        KC_TRNS,       KC_TRNS,
        KC_TRNS,       KC_TRNS,       KC_TRNS,
        KC_TRNS,       KC_TRNS,       KC_TRNS
    ),
    [_L2] = LAYOUT(
        KC_TRNS,       KC_TRNS,
        KC_TRNS,       KC_TRNS,       KC_TRNS,
        KC_TRNS,       KC_TRNS,       KC_TRNS
    ),
    [_L3] = LAYOUT(
        KC_TRNS,       KC_TRNS,
        KC_TRNS,       KC_TRNS,       KC_TRNS,
        KC_TRNS,       KC_TRNS,       KC_TRNS
    )

};


