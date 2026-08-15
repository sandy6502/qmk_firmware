/*
 * Microsoft Sculpt Ergonomic Keyboard - QMK Keyboard C Configuration (v3)
 * Powered by RP2040 and customized for modern QMK layouts.
 *
 * This file contains the primary keyboard-level initialization structures. 
 * Since we no longer rely on the analog Fn slide switch, this file has been
 * thoroughly simplified and cleaned.
 */

#include "quantum.h"

// Clean configuration without slide-switch analog dividers or board-level overrides.
void keyboard_init_kb(void) {
    keyboard_init_user();
}
