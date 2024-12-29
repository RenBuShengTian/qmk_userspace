/**
 * Copyright 2021 Charly Delay <charly@codesink.dev> (@0xcharly)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

enum charybdis_keymap_layers {
    LAYER_BASE = 0,
    LAYER_BTRL = 1,
    LAYER_NUM = 2,
    LAYER_FUN = 3,
};

// Mod-Tap Keys
#define CT_CAP  CTL_T(KC_CAPS)
#define TO_BASE TO(LAYER_BASE)
#define TO_BTRL TO(LAYER_BTRL)
#define TO_FUN  TO(LAYER_FUN)
#define TO_NUM  TO(LAYER_NUM)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // 0. 基础布局
  [LAYER_BASE] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       QK_GESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,       KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
        KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSLS,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
        CT_CAP,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,       KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,       KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  KC_BSPC,  KC_SPC,  TO_NUM,     TO_FUN,  KC_ENT,
  //                            ├───────────────────────────┤ ├──────────────────┤
                                           KC_LGUI, KC_LALT,     KC_APP
  //                            ╰───────────────────────────╯ ╰──────────────────╯

  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
  //      Esc        1        2        3        4        5           6        7        8        9        0       <-
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
  //      Tab        Q        W        E        R        T           Y        U        I        O        P        |
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
  //     Caps        A        S        D        F        G           H        J        K        L        ;        '
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
  //    Shift        Z        X        C        V        B           N        M        ,        .        /    Shift
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
  //                              BackSp    Space   To(NUM)     To(FUN)   Enter
  //                            ├───────────────────────────┤ ├──────────────────┤
  //                                          Win      Alt        Menu
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  // 1. 优化布局
  [LAYER_BTRL] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       QK_GESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,       KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
        KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSLS,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
        CT_CAP,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,       KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,       KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  KC_BSPC,  KC_SPC,  TO_NUM,     TO_FUN,  KC_ENT,
  //                            ├───────────────────────────┤ ├──────────────────┤
                                           KC_LGUI, KC_LALT,     KC_APP
  //                            ╰───────────────────────────╯ ╰──────────────────╯

  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
  //      Esc        1        2        3        4        5           6        7        8        9        0       <-
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
  //      Tab        Q        W        E        R        T           Y        U        I        O        P        |
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
  //     Caps        A        S        D        F        G           H        J        K        L        ;        '
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
  //    Shift        Z        X        C        V        B           N        M        ,        .        /    Shift
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
  //                              BackSp    Space   To(NUM)     To(FUN)   Enter
  //                            ├───────────────────────────┤ ├──────────────────┤
  //                                          Win      Alt        Menu
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  // 2. 编辑区, NumPad
  [LAYER_NUM] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       QK_GESC, KC_CALC, KC_PSLS, KC_PAST, KC_PMNS, KC_PPLS,    KC_VOLU,  KC_INS, KC_HOME, KC_PGUP, KC_BRIU, UG_HUEU,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
        KC_TAB,  KC_DLR,   KC_P7,   KC_P8,   KC_P9, KC_PERC,    KC_VOLD,  KC_DEL,  KC_END, KC_PGDN, KC_BRID, UG_SATU,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
        CT_CAP,   KC_AT,   KC_P4,   KC_P5,   KC_P6, KC_PEQL,    KC_MPLY, KC_MPRV,   KC_UP, KC_MNXT, UG_TOGG, UG_VALU,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_LSFT,   KC_P0,   KC_P1,   KC_P2,   KC_P3, KC_PDOT,    KC_MUTE, KC_LEFT, KC_DOWN, KC_RGHT, UG_NEXT, UG_SPDU,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  _______, _______, TO_BASE,    TO_BTRL, _______,
  //                            ├───────────────────────────┤ ├──────────────────┤
                                           _______, _______,    _______
  //                            ╰───────────────────────────╯ ╰──────────────────╯

  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
  //      Esc     Calc        /        *        -        +        Vol+      Ins     Home     PgUp      Bri+    Hue+
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
  //      Tab        $        7        8        9        %        Vol-      Del      End     PgDw      Bri-    Sat+
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
  //     Ctrl        @        4        5        6        =        Play     Prev       ↑     Next      RGB+    Val+
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
  //    Shift        0        1        2        3        .        Mute       ←       ↓       →      Anm+    Spd+
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
  //                              BackSp    Space   2(BASE)     2(BTRL)   Enter
  //                            ├───────────────────────────┤ ├──────────────────┤
  //                                          Win      Alt        Menu
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  // 3. Fn区, 符号
  [LAYER_FUN] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       QK_GESC, XXXXXXX,  KC_F10,  KC_F11,  KC_F12, XXXXXXX,    XXXXXXX, KC_PSCR, KC_SCRL, KC_PAUS, KC_MINS,  KC_EQL,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
        KC_TAB, XXXXXXX,   KC_F7,   KC_F8,   KC_F9, XXXXXXX,    XXXXXXX, KC_WREF, KC_WHOM, KC_WSCH, KC_MINS,  KC_EQL,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
        CT_CAP, XXXXXXX,   KC_F4,   KC_F5,   KC_F6, XXXXXXX,    XXXXXXX, KC_WBAK, KC_WSTP, KC_WFWD, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_LSFT, XXXXXXX,   KC_F1,   KC_F2,   KC_F3, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_RSFT,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  _______, _______, TO_BASE,    TO_BTRL, _______,
  //                            ├───────────────────────────┤ ├──────────────────┤
                                           _______, _______,    _______
  //                            ╰───────────────────────────╯ ╰──────────────────╯

  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
  //      Esc               F10      F11      F12                         PrtSc    SLock    Pause        -        =
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
  //      Tab                F7       F8       F9                          BRef    BHome     BSch        [        ]
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
  //     Ctrl                F4       F5       F6                          BBak    BStop     BFwd                  
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
  //    Shift                F1       F2       F3                                                             Shift
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
  //                              BackSp    Space   2(BASE)     2(BTRL)   Enter
  //                            ├───────────────────────────┤ ├──────────────────┤
  //                                          Win      Alt        Menu
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  )
  
};

// Combos
enum combos {
  QTAB_ESC,
  PBSP_DEL,
  RT_LPRN,
  YU_RPRN,
  FG_LBRC,
  HJ_RBRC,
  VB_LCBR,
  NM_RCBR,
  FB_BSLS,
  NJ_SLSH,
  DF_BSPC,
  JK_ENT,
};

const uint16_t PROGMEM qtab_combo[] = {KC_Q,  KC_TAB, COMBO_END};
const uint16_t PROGMEM pbsp_combo[] = {KC_P, KC_BSPC, COMBO_END};
const uint16_t PROGMEM rt_combo[] = {KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM yu_combo[] = {KC_Y, KC_U, COMBO_END};
const uint16_t PROGMEM fg_combo[] = {KC_F, KC_G, COMBO_END};
const uint16_t PROGMEM hj_combo[] = {KC_H, KC_J, COMBO_END};
const uint16_t PROGMEM vb_combo[] = {KC_V, KC_B, COMBO_END};
const uint16_t PROGMEM nm_combo[] = {KC_N, KC_M, COMBO_END};
const uint16_t PROGMEM fb_combo[] = {KC_F, KC_B, COMBO_END};
const uint16_t PROGMEM nj_combo[] = {KC_N, KC_J, COMBO_END};
const uint16_t PROGMEM df_combo[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};

combo_t key_combos[] = {
  [QTAB_ESC] = COMBO(qtab_combo, KC_ESC), // Q + Tab -> Esc
  [PBSP_DEL] = COMBO(pbsp_combo, KC_DEL), // P + BSp -> Del 
  [RT_LPRN] = COMBO(rt_combo, KC_LPRN),   // R + T   -> '('
  [YU_RPRN] = COMBO(yu_combo, KC_RPRN),   // Y + U   -> ')'
  [FG_LBRC] = COMBO(fg_combo, KC_LBRC),   // F + G   -> '['
  [HJ_RBRC] = COMBO(hj_combo, KC_RBRC),   // H + J   -> ']'
  [VB_LCBR] = COMBO(vb_combo, KC_LCBR),   // V + B   -> '{'
  [NM_RCBR] = COMBO(nm_combo, KC_RCBR),   // N + M   -> '}'
  [FB_BSLS] = COMBO(fb_combo, KC_BSLS),   // F + B   -> '\'
  [NJ_SLSH] = COMBO(nj_combo, KC_SLSH),   // N + J   -> '/'
  [DF_BSPC] = COMBO(df_combo, KC_BSPC),   // D + F   -> BSp
  [JK_ENT] = COMBO(jk_combo, KC_ENT),     // J + K   -> Ent
};
