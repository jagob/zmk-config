/* Copyright 2019
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

#pragma once

#include <dt-bindings/zmk/keys.h>
#include <dt-bindings/zmk/modifiers.h>

// clang-format off

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ½ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ + │ ´ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ Å │ ¨ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Æ │ Ø │ ' │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define DK_HALF GRAVE  // ½
#define DK_1    N1     // 1
#define DK_2    N2     // 2
#define DK_3    N3     // 3
#define DK_4    N4     // 4
#define DK_5    N5     // 5
#define DK_6    N6     // 6
#define DK_7    N7     // 7
#define DK_8    N8     // 8
#define DK_9    N9     // 9
#define DK_0    N0     // 0
#define DK_PLUS MINUS  // +
#define DK_ACUT EQUAL  // ´ (dead)
// Row 2
#define DK_Q    Q     // Q
#define DK_W    W     // W
#define DK_E    E     // E
#define DK_R    R     // R
#define DK_T    T     // T
#define DK_Y    Y     // Y
#define DK_U    U     // U
#define DK_I    I     // I
#define DK_O    O     // O
#define DK_P    P     // P
#define DK_ARNG LBKT  // Å
#define DK_DIAE RBKT  // ¨ (dead)
// Row 3
#define DK_A    A     // A
#define DK_S    S     // S
#define DK_D    D     // D
#define DK_F    F     // F
#define DK_G    G     // G
#define DK_H    H     // H
#define DK_J    J     // J
#define DK_K    K     // K
#define DK_L    L     // L
#define DK_AE   A     // Æ KC_SCLN
#define DK_OSTR O     // Ø KC_QUOT
#define DK_QUOT NUHS  // '
// Row 4
#define DK_LABK NUBS   // <
#define DK_Z    Z      // Z
#define DK_X    X      // X
#define DK_C    C      // C
#define DK_V    V      // V
#define DK_B    B      // B
#define DK_N    N      // N
#define DK_M    M      // M
#define DK_COMM COMMA  // ,
#define DK_DOT  DOT    // .
#define DK_MINS FSLH   // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ § │ ! │ " │ # │ ¤ │ % │ & │ / │ ( │ ) │ = │ ? │ ` │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ ^ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │ * │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define DK_SECT LS(DK_HALF)  // §
#define DK_EXLM LS(DK_1)     // !
#define DK_DQUO LS(DK_2)     // "
#define DK_HASH LS(DK_3)     // #
#define DK_CURR LS(DK_4)     // ¤
#define DK_PERC LS(DK_5)     // %
#define DK_AMPR LS(DK_6)     // &
#define DK_SLSH LS(DK_7)     // /
#define DK_LPRN LS(DK_8)     // (
#define DK_RPRN LS(DK_9)     // )
#define DK_EQL  LS(DK_0)     // =
#define DK_QUES LS(DK_PLUS)  // ?
#define DK_GRV  LS(DK_ACUT)  // ` (dead)
// Row 2
#define DK_CIRC LS(DK_DIAE)  // ^ (dead)
// Row 3
#define DK_ASTR LS(DK_QUOT)  // *
// Row 4
#define DK_RABK LS(DK_LABK)  // >
#define DK_SCLN LS(DK_COMM)  // ;
#define DK_COLN LS(DK_DOT)   // :
#define DK_UNDS LS(DK_MINS)  // _

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │ @ │ £ │ $ │ € │   │ { │ [ │ ] │ } │   │ | │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ ~ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ \ │   │   │   │   │   │   │ µ │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define DK_AT   RA(DK_2)     // @
#define DK_PND  RA(DK_3)     // £
#define DK_DLR  RA(DK_4)     // $
#define DK_EURO RA(DK_5)     // €
#define DK_LCBR RA(DK_7)     // {
#define DK_LBRC RA(DK_8)     // [
#define DK_RBRC RA(DK_9)     // ]
#define DK_RCBR RA(DK_0)     // }
#define DK_PIPE RA(DK_ACUT)  // |
// Row 2
#define DK_TILD RA(DK_DIAE)  // ~ (dead)
// Row 4
#define DK_BSLS RA(DK_LABK)  // (backslash)
#define DK_MICR RA(DK_M)     // µ
