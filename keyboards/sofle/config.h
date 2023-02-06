#pragma once
#define IGNORE_MOD_TAP_INTERRUPT
#ifdef TAPPING_TERM // TAPPING_TERM is set to 100 by default in the default sofle config.h file
#undef TAPPING_TERM
#endif
#define TAPPING_TERM 200 //TAPPING_TERM is how long a tap is a tap, right now a tap is 200ms, tested with 100ms and that is too quick to be a tap on the sofle, 175 is still too quick, 200 is too slow and is causing accidental parenthesis 200 seems to be the best
#define RETRO_TAPPING
#define USER_SUPER_ALT_TAB_TIMEOUT 500
