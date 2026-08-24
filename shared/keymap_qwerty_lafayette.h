#pragma once
#include "keycodes_aekeynox.h"

// Qwerty-Lafayette: same as Qwerty for letters, differs for a few symbols.
// Only symbols and keys used via AS() in keymaps need to be defined here.

// Letters (same physical position as Qwerty)
#define QL_A KC_A
#define QL_B KC_B
#define QL_C KC_C
#define QL_D KC_D
#define QL_E KC_E
#define QL_F KC_F
#define QL_G KC_G
#define QL_H KC_H
#define QL_I KC_I
#define QL_J KC_J
#define QL_K KC_K
#define QL_L KC_L
#define QL_M KC_M
#define QL_N KC_N
#define QL_O KC_O
#define QL_P KC_P
#define QL_Q KC_Q
#define QL_R KC_R
#define QL_S KC_S
#define QL_T KC_T
#define QL_U KC_U
#define QL_V KC_V
#define QL_W KC_W
#define QL_X KC_X
#define QL_Y KC_Y
#define QL_Z KC_Z

// Numbers (same as Qwerty)
#define QL_0 KC_0
#define QL_1 KC_1
#define QL_2 KC_2
#define QL_3 KC_3
#define QL_4 KC_4
#define QL_5 KC_5
#define QL_6 KC_6
#define QL_7 KC_7
#define QL_8 KC_8
#define QL_9 KC_9

// Symbols (same as Qwerty unless noted)
#define QL_CIRC KC_CIRC // ^
#define QL_DLR  KC_DLR  // $
#define QL_PERC KC_PERC // %
#define QL_AT   KC_AT   // @
#define QL_AMPR KC_AMPR // &
#define QL_ASTR KC_ASTR // *
#define QL_QUOT KC_QUOT // '
#define QL_GRV  KC_GRV  // `
#define QL_LCBR KC_LCBR // {
#define QL_LPRN KC_LPRN // (
#define QL_RPRN KC_RPRN // )
#define QL_RCBR KC_RCBR // }
#define QL_EQL  KC_EQL  // =
#define QL_BSLS KC_BSLS // backslash
#define QL_PLUS KC_PLUS // +
#define QL_MINS KC_MINS // -
#define QL_SLSH KC_SLSH // /
#define QL_DQUO KC_DQUO // "
#define QL_TILD KC_TILD // ~
#define QL_LBRC KC_LBRC // [
#define QL_RBRC KC_RBRC // ]
#define QL_UNDS KC_UNDS // _
#define QL_HASH KC_HASH // #
#define QL_PIPE KC_PIPE // |
#define QL_EXLM KC_EXLM // !
#define QL_QUES KC_QUES // ?
#define QL_COMM KC_COMM // ,
#define QL_DOT  KC_DOT  // .

// Lafayette-specific overrides (physical key differs from Qwerty)
#define QL_LABK KC_NUBS    // < is on NUBS key, not Shift+Comma
#define QL_RABK S(KC_NUBS) // > is Shift+NUBS
#define QL_SCLN S(KC_COMM) // ; is Shift+Comma
#define QL_COLN S(KC_DOT)  // : is Shift+Dot
