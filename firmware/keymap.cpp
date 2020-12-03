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
#define KC_PINF PRINT_INFO
#define KC_PBLE PRINT_BLE
#define KC_MSRE KC_MS_OFF


// Initialize matrix with nothing...
std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix =
    KEYMAP2ARRAY(KEYMAP(
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, 
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO
    ));

    void process_user_macros(uint16_t macroid)
{
    switch ((macroid))
    { 
        case PASS:
            addStringToQueue("9737386OP");
            addKeycodeToQueue(KC_BSPC);
            addStringToQueue("o86"); 
        break;
        case (CBR_FN):
            addStringToQueue("{}"); 
            addKeycodeToQueue(KC_LEFT);
        break;
        case (BRC_FN):
            addStringToQueue("[]");
            addKeycodeToQueue(KC_LEFT);
        break;
        case PRN_FN:
            addStringToQueue("()"); 
            addKeycodeToQueue(KC_LEFT);
        break;
        case IP:
            addStringToQueue("192.168.1.");
        break;
        case SMILE:
            addStringToQueue(":)");
        break;
    }
}


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
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,     KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,       KC_P, KC_BSPC,
        KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,     KC_G,   KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
        LAYER_3, KC_LCTL, KC_LALT, KC_LGUI, LAYER_1,  KC_SPC, KC_SPC, LAYER_2,KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT 
    );

uint32_t layer0_single_HOLD[MATRIX_ROWS][MATRIX_COLS] =
    KEYMAP(
         _______,_______,_______,_______,_______,_______,LCTL(KC_Y),_______,_______,_______,_______,_______,
        _______,LCTL(KC_A),_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,LCTL(KC_Z),LCTL(KC_X),LCTL(KC_C),LCTL(KC_V),_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,LGUI(KC_V),_______,_______,_______,_______,_______,_______,_______,_______
    );



 /* Layer 1 (lower) Qwerty Plank
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
        KC_GRV ,KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5   ,KC_6   ,KC_7   ,KC_8   ,KC_9   ,KC_0   ,KC_DEL , \
        _______,KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,KC_F6  ,KC_MINS,KC_EQL ,KC_LBRC,KC_RBRC,KC_BSLS, \
        _______,KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 ,KC_F11 ,KC_F12 ,_______,KC_MPLY,KC_PGDN,KC_PGUP,RGB_MOD, \
        _______,_______,_______,_______,_______,KC_PINF,KC_PBLE,_______,KC_MNXT,OS(KC_VOLD),OS(KC_VOLU),KC_MPRV  \

        );


     /* Layer 2 (Raise) Qwerty Plank
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
        KC_TILD ,KC_EXLM,KC_AT  ,KC_HASH,KC_DLR ,KC_PERC,KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_DEL , \
        _______,KC_BTN2,KC_MS_U,KC_BTN1,KC_MSRE,_______,_______,KC_UNDS,KC_PLUS,KC_LCBR,KC_RCBR,KC_PIPE, \
        _______,KC_MS_L,KC_MS_D,KC_MS_R,_______,_______,_______,_______,KC_MPLY,KC_END ,KC_HOME,RGB_TOG, \
        _______,KC_ACL0,KC_ACL1,KC_ACL2,_______,_______,_______,_______,KC_MNXT,OS(KC_VOLD),OS(KC_VOLU),KC_MPRV  \
        );

     // Layer 3 (Adjast) Qwerty Plank
    uint32_t layer3_single[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP( \
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______
);


    for (int row = 0; row < MATRIX_ROWS; ++row)
    {
        for (int col = 0; col < MATRIX_COLS; ++col)
        {
                matrix[row][col].addActivation(_L0, Method::PRESS, layer0_single[row][col]);
                matrix[row][col].addActivation(_L0, Method::DT_DOUBLETAP, layer0_single_HOLD[row][col]);
                matrix[row][col].addActivation(_L1, Method::PRESS, layer1_single[row][col]);
                matrix[row][col].addActivation(_L2, Method::PRESS, layer2_single[row][col]);
                matrix[row][col].addActivation(_L3, Method::PRESS, layer3_single[row][col]);


           
            // if you want to add Tap/Hold or Tap/Doubletap activations, then you add them below.

        }
    }

}
