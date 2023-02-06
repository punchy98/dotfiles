#include QMK_KEYBOARD_H
#include "punchy.h"
// Tap Dance declarations
//enum {
//    TD_TAB_PIN,
//};

// Tap Dance definitions
//    // Tap once for Escape, twice for Caps Lock

//void tapd(qk_tap_dance_state_t *state, void *user_data) {
//    if (state->count == 1) {
//        tap_code(KC_TAB);
//        reset_tap_dance(state);
//    }
//    if (state->count == 2) {
//        register_code16(K_SECR1);
//        unregister_code16(K_SECR1);
//        reset_tap_dance(state);
//    }
//}

//qk_tap_dance_action_t tap_dance_actions[] = {
//    [TD_TAB_PIN] = ACTION_TAP_DANCE_FN(tapd)
//};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(QK_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, CW_TOGG, KC_A, KC_S, LT(5,KC_D), LT(3,KC_F), KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, SC_LSPO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_MUTE, SGUI(KC_S), KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, SC_RSPC, KC_LGUI, KC_LALT, KC_LCTL, KC_SPC, MO(_NUMROW), MO(_FULLSYM), KC_ENT, KC_HOME, KC_END, KC_DEL),
	[_NUMROW] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K_SECR5, K_SECR1, K_SECR2, K_SECR3, K_SECR4, KC_PPLS, KC_PMNS, KC_PAST, KC_PSLS, KC_PCMM, KC_TRNS, KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO, KC_NO, KC_NO, KC_CUT, KC_COPY, KC_PSTE, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_DOT, KC_NO, KC_NO, KC_NO, KC_NO, LCA(KC_DEL), MO(_MOUSE), KC_TRNS, KC_TRNS, KC_PEQL, KC_ENT, KC_PDOT, KC_TRNS),
	[_FULLSYM] = LAYOUT(KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_LSFT, KC_TRNS, KC_TRNS, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LBRC, KC_RBRC, KC_PIPE, KC_TRNS, KC_EQL, KC_MINS, KC_PLUS, BRACES, BRACES, KC_TRNS, KC_TRNS, BRACES, BRACES, KC_SCLN, KC_COLN, KC_BSLS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(_MOUSE), KC_TRNS, KC_TRNS, KC_TRNS),
	[_NAV] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_INS, KC_PSCR, KC_APP, KC_NO, KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO, KC_BSPC, KC_TRNS, KC_LALT, KC_LCTL, KC_LSFT, KC_TRNS, KC_CAPS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_BSPC, KC_TRNS, LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), KC_NO, KC_TRNS, KC_TRNS, KC_DEL, KC_WH_D, KC_WH_U, KC_INS, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(_MOUSE), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[_MOUSE] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN1, KC_NO, KC_BTN2, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, TG(0), KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS),
	[_NUMPAD] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NUM, KC_PSLS, KC_PAST, KC_PMNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P4, KC_P5, KC_P6, KC_PEQL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P1, KC_P2, KC_P3, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P0, KC_PDOT, KC_TRNS),
	[_LINUXSYM] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_AT, KC_AMPR, KC_PLUS, KC_EQL, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_NO, KC_NO, KC_NO, KC_NO, KC_EXLM, KC_TILD, KC_LT, KC_GT, KC_HASH, KC_PIPE, KC_LPRN, KC_RPRN, KC_BSLS, KC_NO, KC_NO, KC_NO, KC_NO, KC_SLSH, KC_ASTR, KC_NO, KC_NO, KC_NO, KC_NO, KC_DLR, KC_LCBR, KC_RCBR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};


#ifdef OLED_ENABLE

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        153,154,10,
        185,186,0
            };

   oled_write_P(qmk_logo, false);
}

static void print_status_narrow(void) {
   oled_write_P(PSTR("\n\n"), false);
    // Print current layer
    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
            oled_write_P(PSTR("Base\n"), false);
            break;
        case _FULLSYM:
            oled_write_P(PSTR("SYM"), false);
            break;
        case _LINUXSYM:
            oled_write_P(PSTR("LINUX"), false);
            break;
        case _NUMROW:
            oled_write_P(PSTR("NUM"), false);
            break;
        case _NAV:
            oled_write_P(PSTR("ARR\n"), false);
            break;
        case _MOUSE:
            oled_write_P(PSTR("MSE\n"), false);
            break;
        case _NUMPAD:
            oled_write_P(PSTR("NPD\n"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);
//    led_t led_usb_state = host_keyboard_led_state();
//    oled_write_ln_P(PSTR("CPSLK"), led_usb_state.caps_lock);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return rotation;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        render_logo();
    }
    return false;
}

#endif




layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _NUMROW, _FULLSYM, _LINUXSYM);
}



#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_PGUP);
        } else {
            tap_code(KC_PGDN);
        }
    }
    return true;
}

#endif
