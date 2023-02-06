#pragma once
#include QMK_KEYBOARD_H
#include "sofle_keycodes.h"

void matrix_scan_mouse_jiggle(void);

bool process_record_mouse_jiggle(uint16_t keycode, const keyrecord_t *record);
