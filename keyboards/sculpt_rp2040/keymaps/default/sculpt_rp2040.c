/*
 * Microsoft Sculpt Ergonomic Keyboard - QMK Keyboard C Configuration
 * Powered by RP2040 and customized for modern QMK layouts.
 *
 * This file handles keyboard-level hardware initialization and the custom
 * hardware-level layer switching logic powered by the physical Fn slide switch.
 */

#include "quantum.h"

#ifdef DIP_SWITCH_ENABLE
/**
 * QMK DIP Switch Update Callback
 *
 * On your custom Sculpt replacement PCB, the physical Fn slide-switch on the
 * top-right center bezel changes the resistance of a voltage divider connected
 * to GP0. This translates to a digital HIGH (~2.24V) or LOW (~0.55V) state.
 *
 * In your keyboard.json, GP0 is configured as DIP switch index 0.
 *
 * - active == true (GP0 HIGH, low resistance state): Toggle Layer 1 (_FN) ON.
 * - active == false (GP0 LOW, high resistance state): Toggle Layer 1 (_FN) OFF.
 */
void dip_switch_update_kb(uint8_t index, bool active) {
    if (index == 0) {
        if (active) {
            layer_on(1); // Turn ON Layer 1 (_FN)
        } else {
            layer_off(1); // Turn OFF Layer 1 (_FN)
        }
    }
    // Call user-level handler to ensure keymaps can still use custom overrides
    dip_switch_update_user(index, active);
}
#endif

/**
 * Keyboard-level initialization override
 *
 * This function runs once when the RP2040 boots up. It ensures that the current
 * layer state is initialized to match the physical position of the Fn slide
 * switch right from power-up.
 */
void keyboard_init_kb(void) {
#ifdef DIP_SWITCH_ENABLE
    // Read the initial hardware pin state of GP0 (DIP Switch 0)
    // to prevent starting on the wrong layer if booted with Fn active.
    if (dip_switch_state(0)) {
        layer_on(1);
    } else {
        layer_off(1);
    }
#endif
    keyboard_init_user();
}
