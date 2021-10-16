#include QMK_KEYBOARD_H

enum layers {
    _QWERTY,
    _LOWER,
    _RAISE,
    _ADJUST,
};

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

// Text navigation / manipulation
#define LNE_BEG LCMD(KC_LEFT)
#define LNE_END LCMD(KC_RGHT)
#define DEL_LNE LCMD(KC_BSPC)
#define PRV_WRD LOPT(KC_LEFT)
#define NXT_WRD LOPT(KC_RGHT)

// Undo / redo / cut / copy / paste
#define UNDO  LCMD(KC_Z)
#define REDO  LSFT(UNDO)
#define CUT   LCMD(KC_X)
#define COPY  LCMD(KC_C)
#define PASTE LCMD(KC_V)
