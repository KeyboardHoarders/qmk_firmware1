// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT_4x2(
                 KC_UP,
        KC_LEFT,          KC_RIGHT,
        KC_MPLY,   KC_DOWN,
        MO(1), MO(2)
    ),
        [1] = LAYOUT_4x2(
                 KC_PGUP,
        KC_HOME,          KC_END,
        KC_DEL,   KC_PGDN,
        KC_TRNS, MO(3)
    ),
        [2] = LAYOUT_4x2(
                 KC_MS_U,
        	KC_MS_L,          KC_MS_R,
        QK_BOOT,   KC_MS_D,
        MO(3), KC_TRNS
    ),
        [3] = LAYOUT_4x2(
                 RGB_M_R,
        RGB_M_B,          RGB_M_G,
        RGB_SPI,   	RGB_M_K,
        KC_TRNS, KC_TRNS
    )
};


#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(RGB_HUD, RGB_HUI) },
    [2] = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
    [3] = { ENCODER_CCW_CW(RGB_RMOD, RGB_MOD) },

};
#endif