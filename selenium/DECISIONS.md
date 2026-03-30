# Arguable Decisions

Quick reference of implementation choices that may warrant discussion. Each point links to the detailed rationale in [IMPLEMENTATION.md](./IMPLEMENTATION.md).

---

### Hold-tap behavior

- **`PERMISSIVE_HOLD` is disabled by default.** The spec explicitly rejects it. Available as opt-in in `options.h` for adventurous users. → [Why PERMISSIVE_HOLD is not used](./IMPLEMENTATION.md#why-permissive_hold-is-not-used)

- **Non-text keys use `HOLD_ON_OTHER_KEY_PRESS` instead of pure tapping-term.** This is stricter than ZMK's `hold-preferred` (triggers on key down, not just on timer expiry). Negligible difference at 150ms in practice, but not an exact match. → [Remaining gap](./IMPLEMENTATION.md#remaining-gap-zmk-native-hold-preferred-vs-qmk-native-hold_on_other_key_press)

### Not implemented (QMK platform gaps)

- **`magic_backspace` / `magic_space` (mod-morph)**: QMK keycode processing is global — can't scope a morph to a specific physical key without hardcoding matrix positions. Left out intentionally. → [Mod-morph decision](./IMPLEMENTATION.md#mod-morph-magic_backspacemagic_space)

- **`sym_shift_altgr` (Shift→AltGr on Sym key)**: Would require reimplementing one-shot layer + shift detection as a custom keycode. Ergol users can still access AltGr via `KC_RALT` on nav layers. → [sym_shift_altgr](./IMPLEMENTATION.md#sym_shift_altgr-shiftaltgr-morph)

- **Insecable space (`LS(SPACE)` on nav layers)**: `LT()` only accepts basic keycodes, and the base layer space shares the same keycode — no way to distinguish which layer the tap came from. → [Insecable space](./IMPLEMENTATION.md#insecable-space)

- **`C_AL_LOCK` (screen lock on FunMedia)**: HID consumer usage not available in `*_T()` keycodes. Position uses plain `KC_RGUI` instead. → [C_AL_LOCK](./IMPLEMENTATION.md#function-layer-c_al_lock-screen-lock)

### Custom keycodes

- **`LSK_RALT` reimplements ZMK's `EZ_LSK(RALT)`.** Returns to base layer + sticky AltGr. Manual tap/hold detection via static flag. → [EZ_LSK(RALT)](./IMPLEMENTATION.md#ez_lskralt-sticky-altgr-on-base-layer)

### Approximations

- **`SYM_NUM_LAYER` uses `MO()` instead of sticky.** QMK's `OSL()` breaks when nested (symbols + num = two `OSL()` active). Workaround: `MO()` for num (hold-only, not sticky). The spec says this key should be sticky for flavors with three thumb keys. → [OSL nesting bug](./IMPLEMENTATION.md#osl-nesting-bug-and-sym_num_layer)

- **2TK `SYM_NUM_LAYER`** uses `LT(_SE_NUM, KC_CAPS)` �� hold-preferred via `HOLD_ON_OTHER_KEY_PRESS`, taps CapsLock. → [SYM_NUM_LAYER](./IMPLEMENTATION.md#sym_num_layer-number-access-from-symbols-layer)

- **`&sk { quick-release; }` timing difference.** QMK releases one-shot mods on next key release; ZMK releases on next key press. Negligible in practice.
