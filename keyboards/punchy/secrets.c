#include QMK_KEYBOARD_H
#include "punchy.h"
#include "secret_definitions.h"

#ifndef MACRO_TIMER
#define MACRO_TIMER 5
#endif
#if (__has_include("secrets.h") && !defined(NO_SECRETS))
#include "secrets.h"
#else
static const char * const secrets[] = {
  "test1",
  "test2",
  "test3",
  "test4",
  "test5"
  "test6"
  "test7"
};
#endif
;bool process_record_secrets(uint16_t keycode, const keyrecord_t *record) {
  switch (keycode) {
    case K_SECR1 ... K_SECR7: // Secrets!  Externally defined strings, not stored in repo
      if (record->event.pressed) {
        clear_mods();
        clear_oneshot_mods();
        send_string_with_delay(secrets[keycode - K_SECR1], MACRO_TIMER);
      }
      return false;
      break;
  }
  return true;
}
