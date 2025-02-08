// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬─────┐
     * │ Y │ T │ R │ Q │ W │ E │ tab │
     * ├───┼───┼───┼───┼───┼───┼─────┤
     * │ H │ G │ F │ A │ S │ D │caps │
     * ├───┼───┼───┼───┼───┼───┼─────┤
     * │ N │ B │ V │ Z │ X │ C │shift│
     * ├───┼───┼───┼───┼───┼───┴─────┤
     * │spa│spa│spa│alt│win│   ctr   │
     * └───┴───┴───┴───┴───┴─────────┘
     * ┴ ┘┐┬ ─ ┤
     */
    [0] = LAYOUT(
        KC_Y,   KC_T,   KC_R,   KC_Q,   KC_W,   KC_E,   KC_TAB,
        KC_H,   KC_G,   KC_F,   KC_A,   KC_S,   KC_D,   KC_CAPS,
        KC_N,   KC_B,   KC_V,   KC_Z,   KC_X,   KC_C,   KC_LSFT,
        KC_SPC,   KC_SPC,   KC_SPC,   KC_LALT,   KC_LGUI,   KC_LCTL
    )
};
