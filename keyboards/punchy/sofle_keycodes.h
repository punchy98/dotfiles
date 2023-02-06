#pragma once
#include QMK_KEYBOARD_H

// Custom keycodes and macros
enum userspace_custom_keycodes {
//    QK_FLSH,               // QMK flash command
 //   QK_VERS,               // QMK version
    KC_QWERTY = SAFE_RANGE,
    BRACES,
    // Programming macros
    PRG_EQ,                // ==
    PRG_NE,                // !=
    PRG_GEQ,               // >=
    PRG_LEQ,               // <=
    PRG_ARR,               // =>
    PS_ITEM,               // $_        (PowerShell - $PSItem variable)
    FS_PIPE,               // |>        (F# pipe operator)
    FS_ARR,                // ->        (F# lambda / pattern matching)
    SHEBANG,               // #!
    UPDIR,
    DOUBLEARR,
    REV2ARR,
    PGREP,

    // USER_MOUSE_JIGGLE_ENABLE
    MS_JIGL,

    // USER_ENABLE_SECRETS
    K_SECR1,
    K_SECR2,
    K_SECR3,
    K_SECR4,
    K_SECR5,
    K_SECR6,
    K_SECR7,

    DYNAMIC_MACRO_RANGE
};
