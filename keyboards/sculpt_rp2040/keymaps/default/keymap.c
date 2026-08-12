/*
 * Microsoft Sculpt Ergonomic Keyboard - QMK Firmware Keymap
 * Powered by RP2040 and customized for modern QMK layouts.
 *
 * This file has been auto-generated and visually optimized to match
 * the top-to-bottom, left-to-right sorted keys defined in keyboard.json.
 *
 * Layer 0 (_BASE): Multimedia and system keys as the default state.
 * Layer 1 (_FN): Standard F1-F12 keys mapped to the top row.
 */

#include QMK_KEYBOARD_H

// Layer definitions
enum layers {
    _BASE = 0,
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // LAYER 0: BASE (Multimedia Mode)
    [_BASE] = LAYOUT_iso(
        // Row 0: Function Keys & Bezel Center Switch
        KC_ESC    , KC_MUTE   , KC_VOLD   , KC_VOLU   , KC_MPLY   , KC_MPRV   , KC_MNXT   , KC_F13    , KC_WBAK   , KC_WFWD   , KC_WREF   , KC_WSCH  , KC_WFAV   , KC_WHOM   , KC_PSCR   , KC_SCRL   , KC_PAUS   ,
        // Row 1: Number Row & Right Clusters
        KC_GRV    , KC_1      , KC_2      , KC_3      , KC_4      , KC_5      , KC_6      , KC_7      , KC_8      , KC_9      , KC_0      , KC_MINS   , KC_EQL    , KC_BSPC   , KC_INS    , KC_HOME   , KC_PGUP   ,
        // Row 2: Tab & QWERTY Row
        KC_TAB    , KC_Q      , KC_W      , KC_E      , KC_R      , KC_T      , KC_Y      , KC_U      , KC_I      , KC_O      , KC_P      , KC_LBRC   , KC_RBRC   , KC_DEL    , KC_END    , KC_PGDN   ,
        // Row 3: Home Row & Up Arrow
        KC_CAPS   , KC_A      , KC_S      , KC_D      , KC_F      , KC_G      , KC_H      , KC_J      , KC_K      , KC_L      , KC_SCLN   , KC_QUOT   , KC_ENT    , KC_NUHS   , KC_UP     ,
        // Row 4: Shift, Bottom Row & Arrows
        KC_LSFT   , KC_Z      , KC_X      , KC_C      , KC_V      , KC_B      , KC_N      , KC_M      , KC_COMM   , KC_DOT    , KC_SLSH   , KC_RSFT   , KC_NUBS   , KC_LEFT   , KC_DOWN   , KC_RGHT   ,
        // Row 5: Spacebars & Modifier Keys
        KC_LCTL   , KC_LGUI   , KC_LALT   , KC_SPC    , KC_SPC    , KC_RALT   , KC_RGUI   , KC_RCTL
    ),

    // LAYER 1: FN (Function Key Mode)
    [_FN] = LAYOUT_iso(
        // Row 0: Function Keys & Bezel Center Switch
        KC_ESC    , KC_F1     , KC_F2     , KC_F3     , KC_F4     , KC_F5     , KC_F6     , KC_F13    , KC_F7     , KC_F8     , KC_F9     , KC_F10    , KC_F11    , KC_F12    , KC_PSCR   , KC_SCRL   , KC_PAUS   ,
        // Row 1: Number Row & Right Clusters
        KC_GRV    , KC_1      , KC_2      , KC_3      , KC_4      , KC_5      , KC_6      , KC_7      , KC_8      , KC_9      , KC_0      , KC_MINS   , KC_EQL    , KC_BSPC   , KC_INS    , KC_HOME   , KC_PGUP   ,
        // Row 2: Tab & QWERTY Row
        KC_TAB    , KC_Q      , KC_W      , KC_E      , KC_R      , KC_T      , KC_Y      , KC_U      , KC_I      , KC_O      , KC_P      , KC_LBRC   , KC_RBRC   , KC_DEL    , KC_END    , KC_PGDN   ,
        // Row 3: Home Row & Up Arrow
        KC_CAPS   , KC_A      , KC_S      , KC_D      , KC_F      , KC_G      , KC_H      , KC_J      , KC_K      , KC_L      , KC_SCLN   , KC_QUOT   , KC_ENT    , KC_NUHS   , KC_UP     ,
        // Row 4: Shift, Bottom Row & Arrows
        KC_LSFT   , KC_Z      , KC_X      , KC_C      , KC_V      , KC_B      , KC_N      , KC_M      , KC_COMM   , KC_DOT    , KC_SLSH   , KC_RSFT   , KC_NUBS   , KC_LEFT   , KC_DOWN   , KC_RGHT   ,
        // Row 5: Spacebars & Modifier Keys
        KC_LCTL   , KC_LGUI   , KC_LALT   , KC_SPC    , KC_SPC    , KC_RALT   , KC_RGUI   , KC_RCTL
    )
};
