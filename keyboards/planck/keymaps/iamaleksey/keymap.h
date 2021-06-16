#include QMK_KEYBOARD_H

enum layers { _COLEMAK, _QWERTY, _WASD, _LOWER, _RAISE, _ADJUST };
#define LWR_TAB LT(_LOWER, KC_TAB)
#define RSE_ENT LT(_RAISE, KC_ENT)
#define COLEMAK DF(_COLEMAK)
#define QWERTY  DF(_QWERTY)
#define WASD    DF(_WASD)
#define LOWER   MO(_LOWER)
#define RAISE   MO(_RAISE)

enum dances { _Q_ESC };
#define Q_ESC TD(_Q_ESC)

// Home row mods (Colemak-DHm)
#define LCTL_A LCTL_T(KC_A)
#define LOPT_R LOPT_T(KC_R)
#define LCMD_S LCMD_T(KC_S)
#define SHFT_T LSFT_T(KC_T)
#define RSFT_N RSFT_T(KC_N)
#define RCMD_E RCMD_T(KC_E)
#define ROPT_I LOPT_T(KC_I)
#define RCTL_O RCTL_T(KC_O)

// Home row mods (QWERTY)
#define LCTL_A LCTL_T(KC_A)
#define LOPT_S LOPT_T(KC_S)
#define LCMD_D LCMD_T(KC_D)
#define SHFT_F LSFT_T(KC_F)
#define RSFT_J RSFT_T(KC_J)
#define RCMD_K RCMD_T(KC_K)
#define ROPT_L ROPT_T(KC_L)
#define CTL_SCLN RCTL_T(KC_SCLN)
