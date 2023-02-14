#include QMK_KEYBOARD_H
#include "punchy.h"
//
//uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
//    switch (keycode) {
 //       case LALT_T(KC_BSLS):
  //          return 150;
   //     case LCTL_T(KC_HOME):
    //        return 150;
     //   default:
      //      return TAPPING_TERM;
    //}
//}
//
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
enum combos {
  XC_COPY,
  CV_PASTE,
  XV_CUT,
//  SBS_DEL,
};

const uint16_t PROGMEM xc_combo[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM cv_combo[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM xv_combo[] = {KC_X, KC_V, COMBO_END};
//const uint16_t PROGMEM sb_combo[] = {KC_LSFT, KC_BSPC, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [XC_COPY] = COMBO(xc_combo, LCTL(KC_C)),
  [CV_PASTE] = COMBO(cv_combo, LCTL(KC_V)),
  [XV_CUT] = COMBO(xv_combo, LCTL(KC_X)),
 // [SBS_DEL] = COMBO(sb_combo, LCTL(KC_BSPC)),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* BEGIN
 * EMPTYTEMPLATE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |      |      |      |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |      |      |      |      | /       /       \      \  |      |      |      |      |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *END         `----------------------------------'           '------''---------------------------'
 */
/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |`~Esc |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  -_  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |Caps W|   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------| MUTE  |    |WINShfS|------+------+------+------+------+------|
 * |LShft(|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShft)|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | Win  | ALT  | LCTL | Space| /Home   /       \End   \  |Enter |DELETE|INSERT|DELETE|
 *            |      |      |      |      |/ NUMROW/         \LSYM  \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
	[0] = LAYOUT(
            QK_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS,
            KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, 
            CW_TOGG, KC_A, KC_S, LT(_NUMPAD,KC_D), LT(_NAV,KC_F), KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, 
            SC_LSPO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_MUTE, SGUI(KC_S), KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, SC_RSPC, 
            KC_LGUI, KC_LALT, KC_LCTL, KC_SPC, LT(_NUMROW,KC_HOME), LT(_LINUXSYM,KC_END), KC_ENT, KC_DEL, KC_INS, KC_DEL
            ),
/*
 * NUMROW
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |SECR5 |SECR1 |SECR2 |SECR3 |SECR4 |                    |      |      |      |      |      | TRNS |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |  1   |  2   |  3   |  4   |  5   |-------.    ,-------|  6   |   7  |  8   |  9   |   0  |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |      |      |CtlAlt|      | /NUMROW /       \LINSYM\  |      |      |      |      |
 *            |      |      |Del   |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
	[_NUMROW] = LAYOUT(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
            KC_NO, K_SECR5, K_SECR1, K_SECR2, K_SECR3, K_SECR4, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, 
            KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO, 
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_DOT, KC_NO,
            KC_NO, KC_NO, KC_NO, LCA(KC_DEL), KC_NO, MO(_NUMROW), MO(_LINUXSYM), KC_NO, KC_NO, KC_NO, KC_NO
            ),
/* 
 * NAV
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | TRNS | TRNS | TRNS | TRNS | TRNS | TRNS |                    | TRNS |TRNS  | TRNS | TRNS | TRNS | TRNS |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TRNS |INSERT|PRTSCR| APP  |      |      |                    | HOME | PGDN | PGUP | END  |      | BSPC |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TRNS | LALT | LCTL | LSHIF| TRNS | CAPS |-------.    ,-------|LEFT  | DOWN | UP   | RIGHT|      | BSPC |
 * |------+------+------+------+------+------| TRNS  |    | TRNS  |------+------+------+------+------+------|
 * | TRNS | UNDO | CUT  | COPY | PASTE|      |-------|    |-------|DELETE| MWDN |MWUP  |INSERT|      |TRNS  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | TRNS |TRNS  | TRNS |      | /NUMROW /       \LINSYM\  | TRNS | TRNS | TRNS | TRNS |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *             `----------------------------------'           '------''---------------------------'
 */
	[_NAV] = LAYOUT(
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
            KC_TRNS, KC_INS, KC_PSCR, KC_APP, KC_NO, KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO, KC_BSPC,
            KC_TRNS, KC_LALT, KC_LCTL, KC_LSFT, KC_TRNS, KC_CAPS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_BSPC, 
            KC_TRNS, LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), KC_NO, KC_TRNS, KC_TRNS, KC_DEL, KC_WH_D, KC_WH_U, KC_INS, KC_NO, KC_TRNS, 
            KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, MO(_NUMROW), MO(_LINUXSYM), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
            ),
    
/* 
 * NUMPAD
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      | NUM  |  /   |  *   |  -   |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |GAMING|      |                    |      |  7   |  8   |  9   |  +   |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |  4   |  5   |  6   |  =   |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |  1   |  2   |  3   |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |      |      |      |      | /NUMROW /       \LINSYM\  |      |  0   |  .   |TRNS  |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *             `----------------------------------'           '------''---------------------------'
 */
	[_NUMPAD] = LAYOUT(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NUM, KC_PSLS, KC_PAST, KC_PMNS, KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, TG(_GAMING), KC_NO, KC_NO, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P4, KC_P5, KC_P6, KC_PEQL, KC_NO, 
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P1, KC_P2, KC_P3, KC_NO, KC_NO, 
            KC_NO, KC_NO, KC_NO, KC_NO, MO(_NUMROW), MO(_LINUXSYM), KC_NO, KC_P0, KC_PDOT, KC_TRNS
            ),
/* 
 * LINUXSYM
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |   `  |   @  |   &  |   +  |   =  |  %   |                    |   ^  |BRACES|BRACES| PGREP|      | BSPC |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |  !   |   ~  |  <   |  >   |  #   |-------.    ,-------|  $   |  *   |PSITEM|   \  |  ../ |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |SHIFT |      |   /  |  <<  |  >>  |      |-------|    |-------|  |   |   {  |   }  |SHBANG|      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |      |      |      |      | /NUMROW /       \LINSYM\  |      |      |      |      |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *             `----------------------------------'           '------''---------------------------'
 */
	[_LINUXSYM] = LAYOUT(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_GRV, KC_AT, KC_AMPR, KC_PLUS, KC_EQL, KC_PERC, KC_CIRC, BRACES, BRACES, PGREP, KC_NO, KC_BSPC,
            KC_NO, KC_EXLM, KC_TILD, KC_LT, KC_GT, KC_HASH, KC_DLR, KC_ASTR, PS_ITEM, KC_BSLS, UPDIR, KC_NO,
            KC_LSFT, KC_NO, KC_SLSH, REV2ARR, DOUBLEARR, KC_NO, KC_NO, KC_NO, KC_PIPE, KC_LCBR, KC_RCBR, SHEBANG,KC_NO, KC_NO, 
            KC_NO, KC_NO, KC_NO, KC_NO, MO(_NUMROW), MO(_LINUXSYM), KC_NO, KC_NO, KC_NO, KC_NO
            ),
/*
 * GAMING
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |`~Esc |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  -_  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |Caps W|   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------| MUTE  |    |GAMMING|------+------+------+------+------+------|
 * |LShft(|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShft)|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | Win  | ALT  | LCTL | Space| /       /       \      \  |Enter |HOME  | END  |DELETE|
 *            |      |      |      |      |/NUMROW /         \LINSYM\ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
	[_GAMING] = LAYOUT(
            QK_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, 
            KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, 
            CW_TOGG, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, 
            SC_LSPO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_MUTE, TG(_GAMING), KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, SC_RSPC, 
            KC_LGUI, KC_LALT, KC_LCTL, KC_SPC, MO(_NUMROW), MO(_LINUXSYM), KC_ENT, KC_HOME, KC_END, KC_DEL
            )
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
        case _LINUXSYM:
            oled_write_P(PSTR("LINUX"), false);
            break;
        case _NUMROW:
            oled_write_P(PSTR("NUM"), false);
            break;
        case _NAV:
            oled_write_P(PSTR("NAV\n"), false);
            break;
        case _NUMPAD:
            oled_write_P(PSTR("NPD\n"), false);
            break;
        case _GAMING:
            oled_write_P(PSTR("GAME\nMODE\n"), false);
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




///layer_state_t layer_state_set_user(layer_state_t state) {
    //return update_tri_layer_state(state, _NUMROW, _LINUXSYM, _LINUXSYM);
//}



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
