#pragma once
#include "keycodes.h"

// Aliases
#define EG_GRV  KC_GRV  // `
#define EG_1    KC_1    // 1
#define EG_2    KC_2    // 2
#define EG_3    KC_3    // 3
#define EG_4    KC_4    // 4
#define EG_5    KC_5    // 5
#define EG_6    KC_6    // 6
#define EG_7    KC_7    // 7
#define EG_8    KC_8    // 8
#define EG_9    KC_9    // 9
#define EG_0    KC_0    // 0
#define EG_SLSH KC_MINS // /
#define EG_EQL  KC_EQL  // =
#define EG_Y    KC_Q    // Y
#define EG_ODK  KC_W    // odk (dead diaeresis)
#define EG_O    KC_E    // O
#define EG_F    KC_R    // F
#define EG_K    KC_T    // K
#define EG_V    KC_Y    // V
#define EG_P    KC_U    // P
#define EG_L    KC_I    // L
#define EG_C    KC_O    // C
#define EG_Q    KC_P    // Q
#define EG_LBRC KC_LBRC // [
#define EG_RBRC KC_RBRC // ]
#define EG_I    KC_A    // I
#define EG_A    KC_S    // A
#define EG_E    KC_D    // E
#define EG_U    KC_F    // U
#define EG_COMM KC_G    // ,
#define EG_G    KC_H    // G
#define EG_T    KC_J    // T
#define EG_N    KC_K    // N
#define EG_S    KC_L    // S
#define EG_R    KC_SCLN // R
#define EG_QUOT KC_QUOT // '
#define EG_BSLS KC_NUHS // (backslash)
#define EG_LABK KC_NUBS // <
#define EG_J    KC_Z    // J
#define EG_DOT  KC_X    // .
#define EG_MINS KC_C    // -
#define EG_H    KC_V    // H
#define EG_Z    KC_B    // Z
#define EG_B    KC_N    // B
#define EG_D    KC_M    // D
#define EG_M    KC_COMM // M
#define EG_W    KC_DOT  // W
#define EG_X    KC_SLSH // X

// SHIFTED
#define EG_TILD S(EG_GRV)  // ~
#define EG_EURO S(EG_1)    // €
#define EG_AT   S(EG_2)    // @
#define EG_HASH S(EG_3)    // #
#define EG_DLR  S(EG_4)    // $
#define EG_PERC S(EG_5)    // %
#define EG_CIRC S(EG_6)    // ^
#define EG_AMPR S(EG_7)    // &
#define EG_ASTR S(EG_8)    // *
#define EG_LDQF S(EG_9)    // <<
#define EG_RDQF S(EG_0)    // >>
#define EG_UNDS S(EG_SLSH) // _
#define EG_PLUS S(EG_EQL)  // +
#define EG_SCLN S(EG_COMM) // ;
#define EG_COLN S(EG_DOT)  // :
#define EG_QUES S(EG_MINS) // ?
#define EG_LCBR S(EG_LBRC) // {
#define EG_RCBR S(EG_RBRC) // }
#define EG_DQUO S(EG_QUOT) // "
#define EG_PIPE S(EG_BSLS) // |
#define EG_RABK S(EG_LABK) // >

// ALTGR
#define EG_LPRN ALGR(EG_A) // (
#define EG_RPRN ALGR(EG_E) // )
#define EG_EXLM ALGR(EG_D) // !
