#pragma once
#define IGNORE_MOD_TAP_INTERRUPT
#ifdef TAPPING_TERM // TAPPING_TERM is set to 100 by default in the default sofle config.h file
#undef TAPPING_TERM
#endif
#define TAPPING_TERM 200 //TAPPING_TERM is how long a tap is a tap, right now a tap is 200ms, tested with 100ms and that is too quick to be a tap on the sofle, 200 seems to be too slow and is causing accidental parenthesis
#define RETRO_TAPPING
/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/
