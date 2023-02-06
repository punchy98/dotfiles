#include QMK_KEYBOARD_H
#include "process_records.h"

uint8_t mod_state;
uint8_t oneshot_mods; 

__attribute__ ((weak))
bool process_record_user_kb(uint16_t keycode, keyrecord_t *record) {
    return true;
}

// Runs for each key down or up event.
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!(
#ifdef USER_MOUSE_JIGGLE_ENABLE
        process_record_mouse_jiggle(keycode, record) &&
#endif
#ifdef USER_SECRETS_ENABLE
        process_record_secrets(keycode, record) &&
#endif
#ifdef USER_SUPER_ALT_TAB_ENABLE
        process_record_super_alt_tab(keycode, record) &&
#endif
        true)) {
        return false;
    }


    // Miscellaneous keycode handling
    mod_state = get_mods();
    oneshot_mods = get_oneshot_mods();
    switch(keycode)
    {
        
        case BRACES:  { // Types [], {}, or <> and puts cursor between braces.
            if (record->event.pressed) {
              clear_oneshot_mods();  // Temporarily disable mods.
              unregister_mods(MOD_MASK_CSAG);
              if ((mod_state | oneshot_mods) & MOD_MASK_SHIFT) {
                SEND_STRING("{}");
              } else if ((mod_state | oneshot_mods) & MOD_MASK_CTRL) {
                SEND_STRING("<>");
              } else {
                SEND_STRING("[]");
              }
              tap_code(KC_LEFT);  // Move cursor between braces.
              register_mods(mod_state);  // Restore mods.
            }
        return false;
                      }
        case PRG_EQ: {
            if (record->event.pressed) {
                SEND_STRING("==");
            }
            return false;
        }
        case PRG_NE: {
            if (record->event.pressed) {
                SEND_STRING("!=");
            }
            return false;
        }
        case PRG_GEQ: {
            if (record->event.pressed) {
                SEND_STRING(">=");
            }
            return false;
        }
        case PRG_LEQ: {
            if (record->event.pressed) {
                SEND_STRING("<=");
            }
            return false;
        }
        case PRG_ARR: {
            if (record->event.pressed) {
                SEND_STRING("=>");
            }
            return false;
        }

        case PS_ITEM: {
            if (record->event.pressed) {
                SEND_STRING("$_");
            }
            return false;
        }
        case FS_PIPE: {
            if (record->event.pressed) {
                SEND_STRING("|>");
            }
            return false;
        }
        case FS_ARR: {
            if (record->event.pressed) {
                SEND_STRING("->");
            }
            return false;
        }
        case SHEBANG: {
            if (record->event.pressed) {
                SEND_STRING("#!");
            }
            return false;
        }
//        case SECRET: {
//            if (record->event.pressed) {
//                SEND_STRING(SS_TAP(K_SECR1));
//            }
//            return false;
//        }
    }

    return process_record_user_kb(keycode, record);
}
