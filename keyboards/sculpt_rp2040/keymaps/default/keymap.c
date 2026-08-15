/*
 * Microsoft Sculpt Ergonomic Keyboard - QMK Firmware Keymap (v7 - Standard & MIT Layouts + DIP Switch Support)
 * Powered by RP2040 and customized for modern QMK layouts.
 *
 * This configuration defines three layers:
 *   - Layer 0 (_STD): Standard keyboard layout with standard modifiers.
 *   - Layer 1 (_MIT): Alternate "MIT" keyboard layout where:
 *       - Left Alt -> Control (KC_LCTL)
 *       - Left GUI -> Alt (KC_LALT)
 *       - Left Control -> GUI (KC_LGUI)
 *       - Alt Gr / Right Alt -> Control (KC_RCTL)
 *       - Right GUI / Right App -> Left Alt (KC_LALT)
 *       - Right Control -> Right GUI (KC_RGUI)
 *   - Layer 2 (_MEDIA): Transparent media-keys overlay activated via the GP0 hardware DIP switch.
 *
 * Profile Layer Toggles:
 *   - Shift + F1: Enables Standard Base Profile (_STD).
 *   - Shift + F2: Enables MIT Base Profile (_MIT).
 *
 * Hardware Reset (UF2 Bootloader Mode) without unplugging:
 *   - Left Shift + Right Shift + Escape (Press simultaneously)
 */

#include QMK_KEYBOARD_H

// Layer definitions
enum layers {
    _STD = 0,
    _MIT,
    _MEDIA
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // LAYER 0: STANDARD BASE (Standard Modifier Pinout - Function Keys Default)
    [_STD] = LAYOUT_iso(
        // Row 0: Function Row (F1-F12)
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
    ),

    // LAYER 1: MIT BASE (Swapped Modifier Pinout - Function Keys Default)
    [_MIT] = LAYOUT_iso(
        // Row 0: Function Row (F1-F12)
        KC_ESC    , KC_F1     , KC_F2     , KC_F3     , KC_F4     , KC_F5     , KC_F6     , KC_F13    , KC_F7     , KC_F8     , KC_F9     , KC_F10    , KC_F11    , KC_F12    , KC_PSCR   , KC_SCRL   , KC_PAUS   ,
        // Row 1: Number Row & Right Clusters
        KC_GRV    , KC_1      , KC_2      , KC_3      , KC_4      , KC_5      , KC_6      , KC_7      , KC_8      , KC_9      , KC_0      , KC_MINS   , KC_EQL    , KC_BSPC   , KC_INS    , KC_HOME   , KC_PGUP   ,
        // Row 2: Tab & QWERTY Row
        KC_TAB    , KC_Q      , KC_W      , KC_E      , KC_R      , KC_T      , KC_Y      , KC_U      , KC_I      , KC_O      , KC_P      , KC_LBRC   , KC_RBRC   , KC_DEL    , KC_END    , KC_PGDN   ,
        // Row 3: Home Row & Up Arrow
        KC_CAPS   , KC_A      , KC_S      , KC_D      , KC_F      , KC_G      , KC_H      , KC_J      , KC_K      , KC_L      , KC_SCLN   , KC_QUOT   , KC_ENT    , KC_NUHS   , KC_UP     ,
        // Row 4: Shift, Bottom Row & Arrows
        KC_LSFT   , KC_Z      , KC_X      , KC_C      , KC_V      , KC_B      , KC_N      , KC_M      , KC_COMM   , KC_DOT    , KC_SLSH   , KC_RSFT   , KC_NUBS   , KC_LEFT   , KC_DOWN   , KC_RGHT   ,
        // Row 5: Spacebars & Custom MIT Modifier Keys
        KC_LGUI   , KC_LALT   , KC_LCTL   , KC_SPC    , KC_SPC    , KC_RCTL   , KC_LALT   , KC_RGUI   
    ),

    // LAYER 2: MEDIA OVERLAY (Activated when DIP switch GP0 is in Media position - LOW)
    [_MEDIA] = LAYOUT_iso(
        // Row 0: Media Keys (Overlayed over F-Keys when DIP switch is active)
        KC_ESC    , KC_MUTE   , KC_VOLD   , KC_VOLU   , KC_MPLY   , KC_MPRV   , KC_MNXT   , KC_F13    , KC_WBAK   , KC_WFWD   , KC_WREF   , KC_WSCH   , KC_WFAV   , KC_WHOM   , KC_PSCR   , KC_SCRL   , KC_PAUS   ,
        // Row 1: All transparent to pass-through base layer keys
        KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   ,
        // Row 2: All transparent to pass-through base layer keys
        KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   ,
        // Row 3: All transparent to pass-through base layer keys
        KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   ,
        // Row 4: All transparent to pass-through base layer keys
        KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   ,
        // Row 5: All transparent to pass-through base layer keys
        KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   , KC_TRNS   
    )
};

// Handle custom keypresses: Shift + F1, Shift + F2, and LShift + RShift + ESC
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    uint8_t mods = get_mods();
    bool is_shift = (mods & MOD_MASK_SHIFT);

    switch (keycode) {
        case KC_F1:
            if (record->event.pressed && is_shift) {
                // Shift + F1 -> Activate Standard Layer (default layer 0)
                default_layer_set(1UL << _STD);
                return false; // Suppress standard F1 keypress
            }
            break;

        case KC_F2:
            if (record->event.pressed && is_shift) {
                // Shift + F2 -> Activate MIT Layer (default layer 1)
                default_layer_set(1UL << _MIT);
                return false; // Suppress standard F2 keypress
            }
            break;

        case KC_ESC:
            if (record->event.pressed) {
                // Check if both Left Shift AND Right Shift are being held down simultaneously
                if ((get_mods() & MOD_BIT(KC_LSFT)) && (get_mods() & MOD_BIT(KC_RSFT))) {
                    // Trigger software reset into the UF2 bootloader drive mode
                    reset_keyboard();
                    return false; // Suppress ESC keypress
                }
            }
            break;
    }
    return true;
}
