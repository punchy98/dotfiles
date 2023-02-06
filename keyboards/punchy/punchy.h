#pragma once
#include QMK_KEYBOARD_H
#include "sofle_keycodes.h"
#include "layers.h"
#include "sofle_keycode_aliases.h"
#include "version.h"


#ifdef USER_MOUSE_JIGGLE_ENABLE
#    include "mouse_jiggle.h"
#endif

#ifdef USER_SECRETS_ENABLE
#    include "secrets.h"
#endif

#ifdef USER_SUPER_ALT_TAB_ENABLE
#    include "super_alt_tab.h"
#endif
