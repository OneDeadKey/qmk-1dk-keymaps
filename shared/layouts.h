// clang-format off

#pragma once

// ╭─────────────────────────────────────────────────────────╮
// │                 QMK layouts definitions                 │
// ╰─────────────────────────────────────────────────────────╯

//  ──────────────────────────< Generic layouts >──────────────────────────

#if defined ONEDEADKEY_LAYOUT_split_3x5_2
#define ONEDEADKEY_LAYOUT(\
        k11, k12, k13, k14, k15, k16,     k17, k18, k19, k1a, k1b, k1c,\
        k21, k22, k23, k24, k25, k26,     k27, k28, k29, k2a, k2b, k2c,\
        k31, k32, k33, k34, k35, k36,     k37, k38, k39, k3a, k3b, k3c,\
        k41, k42, k43, k44, k45, k46,     k47, k48, k49, k4a, k4b, k4c,\
                       k51, k52, k53,     k54, k55, k56\
    )\
    LAYOUT_split_3x5_2(\
             k22, k23, k24, k25, k26,     k27, k28, k29, k2a, k2b,\
             k32, k33, k34, k35, k36,     k37, k38, k39, k3a, k3b,\
             k42, k43, k44, k45, k46,     k47, k48, k49, k4a, k4b,\
                       k51, k52,               k55, k56\
    )

#elif defined ONEDEADKEY_LAYOUT_split_3x5_3
#define ONEDEADKEY_LAYOUT(\
        k11, k12, k13, k14, k15, k16,     k17, k18, k19, k1a, k1b, k1c,\
        k21, k22, k23, k24, k25, k26,     k27, k28, k29, k2a, k2b, k2c,\
        k31, k32, k33, k34, k35, k36,     k37, k38, k39, k3a, k3b, k3c,\
        k41, k42, k43, k44, k45, k46,     k47, k48, k49, k4a, k4b, k4c,\
                       k51, k52, k53,     k54, k55, k56\
    )\
    LAYOUT_split_3x5_3(\
             k22, k23, k24, k25, k26,     k27, k28, k29, k2a, k2b,\
             k32, k33, k34, k35, k36,     k37, k38, k39, k3a, k3b,\
             k42, k43, k44, k45, k46,     k47, k48, k49, k4a, k4b,\
                       k51, k52, k53,     k54, k55, k56\
    )

#elif defined ONEDEADKEY_LAYOUT_split_3x6_3
#define ONEDEADKEY_LAYOUT(\
        k11, k12, k13, k14, k15, k16,     k17, k18, k19, k1a, k1b, k1c,\
        k21, k22, k23, k24, k25, k26,     k27, k28, k29, k2a, k2b, k2c,\
        k31, k32, k33, k34, k35, k36,     k37, k38, k39, k3a, k3b, k3c,\
        k41, k42, k43, k44, k45, k46,     k47, k48, k49, k4a, k4b, k4c,\
                       k51, k52, k53,     k54, k55, k56\
    )\
    LAYOUT_split_3x6_3(\
        k21, k22, k23, k24, k25, k26,     k27, k28, k29, k2a, k2b, k2c,\
        k31, k32, k33, k34, k35, k36,     k37, k38, k39, k3a, k3b, k3c,\
        k41, k42, k43, k44, k45, k46,     k47, k48, k49, k4a, k4b, k4c,\
                       k51, k52, k53,     k54, k55, k56\
    )

//  ──< Corne v4 ex2: 3x6_3 + 2 inner-column keys per side (top + middle) >──
//  The 4 extra keys are off-spec. Defaults to KC_NO. Override in options.h:
//    #define ODK_EXT_LT KC_TAB   // left  inner-top
//    #define ODK_EXT_LB KC_LCTL  // left  inner-middle
//    #define ODK_EXT_RT KC_BSPC  // right inner-top
//    #define ODK_EXT_RB KC_RSFT  // right inner-middle
#elif defined ONEDEADKEY_LAYOUT_split_3x6_3_ex2
#ifndef ODK_EXT_LT
#    define ODK_EXT_LT KC_NO
#endif
#ifndef ODK_EXT_LB
#    define ODK_EXT_LB KC_NO
#endif
#ifndef ODK_EXT_RT
#    define ODK_EXT_RT KC_NO
#endif
#ifndef ODK_EXT_RB
#    define ODK_EXT_RB KC_NO
#endif
#define ONEDEADKEY_LAYOUT(\
        k11, k12, k13, k14, k15, k16,     k17, k18, k19, k1a, k1b, k1c,\
        k21, k22, k23, k24, k25, k26,     k27, k28, k29, k2a, k2b, k2c,\
        k31, k32, k33, k34, k35, k36,     k37, k38, k39, k3a, k3b, k3c,\
        k41, k42, k43, k44, k45, k46,     k47, k48, k49, k4a, k4b, k4c,\
                       k51, k52, k53,     k54, k55, k56\
    )\
    LAYOUT_split_3x6_3_ex2(\
        k21, k22, k23, k24, k25, k26, ODK_EXT_LT,     ODK_EXT_RT, k27, k28, k29, k2a, k2b, k2c,\
        k31, k32, k33, k34, k35, k36, ODK_EXT_LB,     ODK_EXT_RB, k37, k38, k39, k3a, k3b, k3c,\
        k41, k42, k43, k44, k45, k46,                             k47, k48, k49, k4a, k4b, k4c,\
                                 k51, k52, k53,     k54, k55, k56\
    )

//  ──< Corne v4 ex2: 3x5_3 + 2 inner-column keys per side (top + middle) >──
//  Same ODK_EXT_* overrides as split_3x6_3_ex2 apply.
#elif defined ONEDEADKEY_LAYOUT_split_3x5_3_ex2
#ifndef ODK_EXT_LT
#    define ODK_EXT_LT KC_NO
#endif
#ifndef ODK_EXT_LB
#    define ODK_EXT_LB KC_NO
#endif
#ifndef ODK_EXT_RT
#    define ODK_EXT_RT KC_NO
#endif
#ifndef ODK_EXT_RB
#    define ODK_EXT_RB KC_NO
#endif
#define ONEDEADKEY_LAYOUT(\
        k11, k12, k13, k14, k15, k16,     k17, k18, k19, k1a, k1b, k1c,\
        k21, k22, k23, k24, k25, k26,     k27, k28, k29, k2a, k2b, k2c,\
        k31, k32, k33, k34, k35, k36,     k37, k38, k39, k3a, k3b, k3c,\
        k41, k42, k43, k44, k45, k46,     k47, k48, k49, k4a, k4b, k4c,\
                       k51, k52, k53,     k54, k55, k56\
    )\
    LAYOUT_split_3x5_3_ex2(\
             k22, k23, k24, k25, k26, ODK_EXT_LT,     ODK_EXT_RT, k27, k28, k29, k2a, k2b,\
             k32, k33, k34, k35, k36, ODK_EXT_LB,     ODK_EXT_RB, k37, k38, k39, k3a, k3b,\
             k42, k43, k44, k45, k46,                             k47, k48, k49, k4a, k4b,\
                                 k51, k52, k53,     k54, k55, k56\
    )

#elif defined ONEDEADKEY_LAYOUT_ortho_4x10
#define ONEDEADKEY_LAYOUT(\
        k11, k12, k13, k14, k15, k16,     k17, k18, k19, k1a, k1b, k1c,\
        k21, k22, k23, k24, k25, k26,     k27, k28, k29, k2a, k2b, k2c,\
        k31, k32, k33, k34, k35, k36,     k37, k38, k39, k3a, k3b, k3c,\
        k41, k42, k43, k44, k45, k46,     k47, k48, k49, k4a, k4b, k4c,\
                       k51, k52, k53,     k54, k55, k56\
    )\
    LAYOUT_ortho_4x10(\
             k22, k23, k24, k25, k26,     k27, k28, k29, k2a, k2b,\
             k32, k33, k34, k35, k36,     k37, k38, k39, k3a, k3b,\
             k42, k43, k44, k45, k46,     k47, k48, k49, k4a, k4b,\
             XX,  XX,  k51, k52, k53,     k54, k55, k56, XX,  XX,\
    )

#elif defined ONEDEADKEY_LAYOUT_ortho_4x12
#define ONEDEADKEY_LAYOUT(\
        k11, k12, k13, k14, k15, k16,     k17, k18, k19, k1a, k1b, k1c,\
        k21, k22, k23, k24, k25, k26,     k27, k28, k29, k2a, k2b, k2c,\
        k31, k32, k33, k34, k35, k36,     k37, k38, k39, k3a, k3b, k3c,\
        k41, k42, k43, k44, k45, k46,     k47, k48, k49, k4a, k4b, k4c,\
                       k51, k52, k53,     k54, k55, k56\
    )\
    LAYOUT_ortho_4x12(\
        k21, k22, k23, k24, k25, k26,     k27, k28, k29, k2a, k2b, k2c,\
        k31, k32, k33, k34, k35, k36,     k37, k38, k39, k3a, k3b, k3c,\
        k41, k42, k43, k44, k45, k46,     k47, k48, k49, k4a, k4b, k4c,\
        XX,  XX,  XX,  k51, k52, k53,     k54, k55, k56, XX,  XX,  XX,\
    )

#elif defined ONEDEADKEY_LAYOUT_ortho_5x10
#define ONEDEADKEY_LAYOUT(\
        k11, k12, k13, k14, k15, k16,     k17, k18, k19, k1a, k1b, k1c,\
        k21, k22, k23, k24, k25, k26,     k27, k28, k29, k2a, k2b, k2c,\
        k31, k32, k33, k34, k35, k36,     k37, k38, k39, k3a, k3b, k3c,\
        k41, k42, k43, k44, k45, k46,     k47, k48, k49, k4a, k4b, k4c,\
                       k51, k52, k53,     k54, k55, k56\
    )\
    LAYOUT_ortho_4x10(\
             k12, k13, k14, k15, k16,     k17, k18, k19, k1a, k1b,\
             k22, k23, k24, k25, k26,     k27, k28, k29, k2a, k2b,\
             k32, k33, k34, k35, k36,     k37, k38, k39, k3a, k3b,\
             k42, k43, k44, k45, k46,     k47, k48, k49, k4a, k4b,\
             XX,  XX,  k51, k52, k53,     k54, k55, k56, XX,  XX,\
    )

#elif defined ONEDEADKEY_LAYOUT_ortho_5x12
#define ONEDEADKEY_LAYOUT(\
        k11, k12, k13, k14, k15, k16,     k17, k18, k19, k1a, k1b, k1c,\
        k21, k22, k23, k24, k25, k26,     k27, k28, k29, k2a, k2b, k2c,\
        k31, k32, k33, k34, k35, k36,     k37, k38, k39, k3a, k3b, k3c,\
        k41, k42, k43, k44, k45, k46,     k47, k48, k49, k4a, k4b, k4c,\
                       k51, k52, k53,     k54, k55, k56\
    )\
    LAYOUT_ortho_5x12(\
        k11, k12, k13, k14, k15, k16,     k17, k18, k19, k1a, k1b, k1c,\
        k21, k22, k23, k24, k25, k26,     k27, k28, k29, k2a, k2b, k2c,\
        k31, k32, k33, k34, k35, k36,     k37, k38, k39, k3a, k3b, k3c,\
        k41, k42, k43, k44, k45, k46,     k47, k48, k49, k4a, k4b, k4c,\
        XX,  XX,  XX,  k51, k52, k53,     k54, k55, k56, XX,  XX,  XX,\
    )

//  ─────────────────< Custom keyboard-specific layouts >──────────────

#elif defined ONEDEADKEY_LAYOUT_planck_grid
#define ONEDEADKEY_LAYOUT(\
        k11, k12, k13, k14, k15, k16,      k17, k18, k19, k1a, k1b, k1c,\
        k21, k22, k23, k24, k25, k26,      k27, k28, k29, k2a, k2b, k2c,\
        k31, k32, k33, k34, k35, k36,      k37, k38, k39, k3a, k3b, k3c,\
        k41, k42, k43, k44, k45, k46,      k47, k48, k49, k4a, k4b, k4c,\
                       k51, k52, k53,      k54, k55, k56\
    LAYOUT_planck_grid(\
        k11, k12, k13, k14, k15, k16,     k17, k18, k19, k1a, k1b, k1c,\
        k21, k22, k23, k24, k25, k26,     k27, k28, k29, k2a, k2b, k2c,\
        k31, k32, k33, k34, k35, k36,     k37, k38, k39, k3a, k3b, k3c,\
        k41, k42, k43, k44, k45, k46,     k47, k48, k49, k4a, k4b, k4c,\
        XX,  XX,  XX,  k53, k51,      k55,     k56, k54, XX,  XX,  XX,\
    )

#elif defined ONEDEADKEY_LAYOUT_keebio_iris
#define ONEDEADKEY_LAYOUT(\
        k11, k12, k13, k14, k15, k16,      k17, k18, k19, k1a, k1b, k1c,\
        k21, k22, k23, k24, k25, k26,      k27, k28, k29, k2a, k2b, k2c,\
        k31, k32, k33, k34, k35, k36,      k37, k38, k39, k3a, k3b, k3c,\
        k41, k42, k43, k44, k45, k46,      k47, k48, k49, k4a, k4b, k4c,\
                       k51, k52, k53,      k54, k55, k56\
    ) LAYOUT(\
        k11, k12, k13, k14, k15, k16,         k17, k18, k19, k1a, k1b, k1c,\
        k21, k22, k23, k24, k25, k26,         k27, k28, k29, k2a, k2b, k2c,\
        k31, k32, k33, k34, k35, k36,         k37, k38, k39, k3a, k3b, k3c,\
        k41, k42, k43, k44, k45, k46, XX, XX, k47, k48, k49, k4a, k4b, k4c,\
                       k51, k52, k53,         k54, k55, k56\
    )

#else
#    error "Arsenik: Unknown layout"
#endif
