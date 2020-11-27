/*
Copyright 2018 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#include "keymap.h"

// Initialize matrix with nothing...
std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix =
    KEYMAP2ARRAY(KEYMAP(
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, 
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO
    ));


void setupKeymap() {
/* Qwerty Plank
 * ,------------------------------------------------.
 * | Esc  |   Q  |   W  |   E  |   R  |   T  |   Y* | 
 * |------+------+------+------+------+-------------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |   H* |
 * |------+------+------+------+------+------|------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |Space |
 * |------+------+------+------+------+------+------'
 * | Ctrl | GUI  | Alt  | L(3) | L(1) |Space |
 * `-----------------------------------------'
 */

uint32_t layer0_single[MATRIX_ROWS][MATRIX_COLS] =
    KEYMAP(
        PRINT_BLE,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,  KC_Y, 
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,  KC_H,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,  KC_SPC,
        KC_LCTL, KC_LGUI, KC_LALT, LAYER_3, LAYER_1, KC_SPC,_______
    );





 /* Layer 1 (Raise) Qwerty Plank
 * ,------------------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |   -  | 
 * |------+------+------+------+------+-------------|
 * | Del  |  F1  | F2   |  F3  | F4   |  F5  |  [   |
 * |------+------+------+------+------+------|------|
 * | Shift|  F7  | F8   |  F9  |  F10 | F11  |Space |
 * |------+------+------+------+------+------+------'
 * | Ctrl | GUI  | Alt  | L(3) | L(1) |Space |
 * `-----------------------------------------'
 */
    uint32_t layer1_single[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP( \
        KC_GRAVE,KC_1,   KC_2,   KC_3,   KC_4,   KC_5,    KC_MINUS,  \
        KC_DEL  ,KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  , KC_LBRC,   \
        KC_LSFT ,KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 ,KC_F11 , KC_SPC,  \
        KC_LCTL , KC_LGUI, KC_LALT, LAYER_3, LAYER_1, KC_SPC,_______ \
        );


     /* Layer 2 (lower) Qwerty Plank
 * ,------------------------------------------------.
 * |  ~   |   !  |   @  |   #  |   $  |   %  |   _  |
 * |------+------+------+------+------+-------------|
 * | Del  |  F1  | F2   |  F3  | F4   |  F5  |  (   |
 * |------+------+------+------+------+------|------|
 * | Shift|  F7  | F8   |  F9  |  F10 | F11  |Space |
 * |------+------+------+------+------+------+------'
 * | Ctrl | GUI  | Alt  | L(3) | L(1) |Space |
 * `-----------------------------------------'
 */
    uint32_t layer2_single[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP( \
        KC_TILD ,KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_UNDS,  \
        KC_DEL  ,KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_LPRN,   \
        KC_LSFT ,KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_SPC,  \
        KC_LCTL ,KC_LGUI, KC_LALT, LAYER_3, LAYER_1, KC_SPC,  _______ \
        );


/* Layer 3 Qwerty Plank
 * ,------------------------------------------------.
 * | ESC* |  F1  |  F2  |  F3  |  F4  |  F5  |PRTSCR| 
 * |------+------+------+------+------+-------------|
 * | CAPL*| PUP* | NEXT*| PLAY*| PREV*| VOL+*| MUTE*|
 * |------+------+------+------+------+------|------|
 * | Shift|PDOWN*| INS* | HOME*| END* | VOL-*|Space |
 * |------+------+------+------+------+------+------'
 * | Ctrl | GUI  | Alt  | L(3) | L(1) |Space |
 * `-----------------------------------------'
 */
    uint32_t layer3_single[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP( \
        KC_ESC,       KC_F1,      KC_F2,              KC_F3,                  KC_F4,                  KC_F5,      KC_PSCREEN,  \
        KC_CAPSLOCK,  KC_PGUP,    KC_MEDIA_NEXT_TRACK,KC_MEDIA_PLAY_PAUSE,    KC_MEDIA_PREV_TRACK,    KC_VOLU,    KC_MUTE,   \
        KC_LSFT,      KC_PGDN,    KC_INS,             KC_HOME,                KC_END,                 KC_VOLD,    KC_SPC,  \
        KC_LCTL ,     KC_LGUI,    KC_LALT,            LAYER_3,                LAYER_1,                KC_SPC,     _______ \
        );




    for (int row = 0; row < MATRIX_ROWS; ++row)
    {
        for (int col = 0; col < MATRIX_COLS; ++col)
        {
                matrix[row][col].addActivation(_L0, Method::PRESS, layer0_single[row][col]);
                matrix[row][col].addActivation(_L1, Method::PRESS, layer1_single[row][col]);
                matrix[row][col].addActivation(_L2, Method::PRESS, layer2_single[row][col]);
                matrix[row][col].addActivation(_L3, Method::PRESS, layer3_single[row][col]);
           
            // if you want to add Tap/Hold or Tap/Doubletap activations, then you add them below.

        }
    }
}
