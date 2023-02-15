#pragma once

#include QMK_KEYBOARD_H

#define SFT_TAB  LSFT(KC_TAB)
#define WIN_TAB  LGUI(KC_TAB)
#define WIN_L    LGUI(KC_L)
#define WIN_V    LGUI(KC_V)
#define ALT_F4   LALT(KC_F4)
#define CTL_DEL  LCTL_T(KC_DEL)
#define CTL_ESC  CTL_T(KC_ESC)
#define ALT_ENT  ALT_T(KC_ENT)
#define ALT_TAB  ALT_T(KC_TAB)

#define OSM_LSF OSM(MOD_LSFT)
#define OSM_RSF OSM(MOD_RSFT)

// OS shortcuts (Windows)
#define OS_COPY LCTL(KC_C)
#define OS_PAST LCTL(KC_V)
#define OS_CUT  LCTL(KC_X)
#define OS_UNDO LCTL(KC_Z)
#define OS_SALL LCTL(KC_A)
#define OS_FIND LCTL(KC_F)


// Mouse keys
#define M_UP KC_MS_UP
#define M_DOWN KC_MS_DOWN
#define M_LEFT KC_MS_LEFT
#define M_RIGHT KC_MS_RIGHT
#define M_LCLIK KC_MS_BTN1
#define M_RCLIK KC_MS_BTN2
#define M_MCLIK KC_MS_BTN3
#define M_WHLUP KC_WH_U
#define M_WHLDN KC_WH_D


// Windows 10 shortcuts: change desktop to the left/right
#define DESKLFT LCTL(LGUI(KC_LEFT))
#define DESKRGT LCTL(LGUI(KC_RGHT))

