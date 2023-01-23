/* Copyright 2019 kakunpc
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

#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT_all( \
    k01, k06, k02, k07, k03, k08, k04, k09, k05, k10, \
    k11, k16, k12, k17, k13, k18, k14, k19, k15, k20, \
    k21, k26, k22, k27, k23, k28, k24, k29, k25, k30, \
    k31, k36, k32, k37, k33, k38, k34, k39, k35, k40, \
    k41, k46, k42, k47, k43, k48, k44, k49, k45, k50, \
    k51, k56, k52, k57, k53, k58, k54, k59, k55, k60, \

{ \
    { k01, k11, k21, k31, k41, k51}, \
    { k06, k16, k26, k36, k46, k56}, \
    { k02, k12, k22, k32, k42, k52}, \
    { k07, k17, k27, k37, k47, k57}, \
    { k03, k13, k23, k33, k43, k53}, \
    { k08, k18, k28, k38, k48, k58}, \
    { k04, k14, k24, k34, k44, k54}, \
    { k09, k19, k29, k39, k49, k59}, \
    { k05, k15, k25, k35, k45, k55}, \
    { k10, k20, k30, k40, k50, k60} \
}
