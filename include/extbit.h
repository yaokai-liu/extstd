/**
 * License
 *
 * extstd - Extend Library For Standard C (C23 mainly)
 * Copyright (C) 2026 Yaokai Liu
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 * Project Name: extstd
 * Module Name:
 * Filename: extbit.h
 * Creator: Yaokai Liu
 * Create Date: 2026-11-01
 * Copyright (c) 2026 Yaokai Liu. All rights reserved.
 **/

#ifndef EXTSTD_EXTBIT_H
#define EXTSTD_EXTBIT_H
#if __has_include(<stdbit.h>)
#include <stdbit.h>
#else
#ifndef __has_c_attribute
#  define __has_c_attribute(x) 0
#endif
#if __has_c_attribute(unsequenced)
#  define ATTR_UNSEQUENCED [[unsequenced]]
#elif defined(__GNUC__)
#  define ATTR_UNSEQUENCED __attribute__((__const__))
#else
#  define ATTR_UNSEQUENCED
#endif
unsigned int stdc_leading_zeros_uc(unsigned char value) ATTR_UNSEQUENCED;
unsigned int stdc_leading_zeros_us(unsigned short value) ATTR_UNSEQUENCED;
unsigned int stdc_leading_zeros_ui(unsigned int value) ATTR_UNSEQUENCED;
unsigned int stdc_leading_zeros_ul(unsigned long int value) ATTR_UNSEQUENCED;
unsigned int stdc_leading_zeros_ull(unsigned long long int value) ATTR_UNSEQUENCED;
#define stdc_leading_zeros(u)  _Generic((u),          \
  unsigned char         : stdc_leading_zeros_uc (u),  \
  unsigned short        : stdc_leading_zeros_us (u),  \
  unsigned int          : stdc_leading_zeros_ui (u),  \
  unsigned long int     : stdc_leading_zeros_ul (u),  \
  unsigned long long int: stdc_leading_zeros_ull(u),  \
  default:    0                                       \
)
unsigned int stdc_leading_ones_uc(unsigned char value) ATTR_UNSEQUENCED;
unsigned int stdc_leading_ones_us(unsigned short value) ATTR_UNSEQUENCED;
unsigned int stdc_leading_ones_ui(unsigned int value) ATTR_UNSEQUENCED;
unsigned int stdc_leading_ones_ul(unsigned long int value) ATTR_UNSEQUENCED;
unsigned int stdc_leading_ones_ull(unsigned long long int value) ATTR_UNSEQUENCED;
#define stdc_leading_ones(u)  _Generic((u),         \
  unsigned char         : stdc_leading_ones_uc (u), \
  unsigned short        : stdc_leading_ones_us (u), \
  unsigned int          : stdc_leading_ones_ui (u), \
  unsigned long int     : stdc_leading_ones_ul (u), \
  unsigned long long int: stdc_leading_ones_ull(u), \
  default:    0                                     \
)
unsigned int stdc_trailing_zeros_uc(unsigned char value) ATTR_UNSEQUENCED;
unsigned int stdc_trailing_zeros_us(unsigned short value) ATTR_UNSEQUENCED;
unsigned int stdc_trailing_zeros_ui(unsigned int value) ATTR_UNSEQUENCED;
unsigned int stdc_trailing_zeros_ul(unsigned long int value) ATTR_UNSEQUENCED;
unsigned int stdc_trailing_zeros_ull(unsigned long long int value) ATTR_UNSEQUENCED;
#define stdc_trailing_zeros(u)  _Generic((u),         \
  unsigned char         : stdc_trailing_zeros_uc (u), \
  unsigned short        : stdc_trailing_zeros_us (u), \
  unsigned int          : stdc_trailing_zeros_ui (u), \
  unsigned long int     : stdc_trailing_zeros_ul (u), \
  unsigned long long int: stdc_trailing_zeros_ull(u), \
  default:    0                                       \
)
unsigned int stdc_trailing_ones_uc(unsigned char value) ATTR_UNSEQUENCED;
unsigned int stdc_trailing_ones_us(unsigned short value) ATTR_UNSEQUENCED;
unsigned int stdc_trailing_ones_ui(unsigned int value) ATTR_UNSEQUENCED;
unsigned int stdc_trailing_ones_ul(unsigned long int value) ATTR_UNSEQUENCED;
unsigned int stdc_trailing_ones_ull(unsigned long long int value) ATTR_UNSEQUENCED;
#define stdc_trailing_ones(u)  _Generic((u),         \
  unsigned char         : stdc_trailing_ones_uc (u), \
  unsigned short        : stdc_trailing_ones_us (u), \
  unsigned int          : stdc_trailing_ones_ui (u), \
  unsigned long int     : stdc_trailing_ones_ul (u), \
  unsigned long long int: stdc_trailing_ones_ull(u), \
  default:    0                                      \
)
unsigned int stdc_first_leading_zero_uc(unsigned char value) ATTR_UNSEQUENCED;
unsigned int stdc_first_leading_zero_us(unsigned short value) ATTR_UNSEQUENCED;
unsigned int stdc_first_leading_zero_ui(unsigned int value) ATTR_UNSEQUENCED;
unsigned int stdc_first_leading_zero_ul(unsigned long int value) ATTR_UNSEQUENCED;
unsigned int stdc_first_leading_zero_ull(unsigned long long int value) ATTR_UNSEQUENCED;
#define stdc_first_leading_zero(u)  _Generic((u),         \
  unsigned char         : stdc_first_leading_zero_uc (u), \
  unsigned short        : stdc_first_leading_zero_us (u), \
  unsigned int          : stdc_first_leading_zero_ui (u), \
  unsigned long int     : stdc_first_leading_zero_ul (u), \
  unsigned long long int: stdc_first_leading_zero_ull(u), \
  default:    0                                           \
)
unsigned int stdc_first_leading_one_uc(unsigned char value) ATTR_UNSEQUENCED;
unsigned int stdc_first_leading_one_us(unsigned short value) ATTR_UNSEQUENCED;
unsigned int stdc_first_leading_one_ui(unsigned int value) ATTR_UNSEQUENCED;
unsigned int stdc_first_leading_one_ul(unsigned long int value) ATTR_UNSEQUENCED;
unsigned int stdc_first_leading_one_ull(unsigned long long int value) ATTR_UNSEQUENCED;
#define stdc_first_leading_one(u)  _Generic((u),         \
  unsigned char         : stdc_first_leading_one_uc (u), \
  unsigned short        : stdc_first_leading_one_us (u), \
  unsigned int          : stdc_first_leading_one_ui (u), \
  unsigned long int     : stdc_first_leading_one_ul (u), \
  unsigned long long int: stdc_first_leading_one_ull(u), \
  default:    0                                          \
)
unsigned int stdc_first_trailing_zero_uc(unsigned char value) ATTR_UNSEQUENCED;
unsigned int stdc_first_trailing_zero_us(unsigned short value) ATTR_UNSEQUENCED;
unsigned int stdc_first_trailing_zero_ui(unsigned int value) ATTR_UNSEQUENCED;
unsigned int stdc_first_trailing_zero_ul(unsigned long int value) ATTR_UNSEQUENCED;
unsigned int stdc_first_trailing_zero_ull(unsigned long long int value) ATTR_UNSEQUENCED;
#define stdc_first_trailing_zero(u)  _Generic((u),         \
  unsigned char         : stdc_first_trailing_zero_uc (u), \
  unsigned short        : stdc_first_trailing_zero_us (u), \
  unsigned int          : stdc_first_trailing_zero_ui (u), \
  unsigned long int     : stdc_first_trailing_zero_ul (u), \
  unsigned long long int: stdc_first_trailing_zero_ull(u), \
  default:    0                                            \
)
unsigned int stdc_first_trailing_one_uc(unsigned char value) ATTR_UNSEQUENCED;
unsigned int stdc_first_trailing_one_us(unsigned short value) ATTR_UNSEQUENCED;
unsigned int stdc_first_trailing_one_ui(unsigned int value) ATTR_UNSEQUENCED;
unsigned int stdc_first_trailing_one_ul(unsigned long int value) ATTR_UNSEQUENCED;
unsigned int stdc_first_trailing_one_ull(unsigned long long int value) ATTR_UNSEQUENCED;
#define stdc_first_trailing_one(u)  _Generic((u),         \
  unsigned char         : stdc_first_trailing_one_uc (u), \
  unsigned short        : stdc_first_trailing_one_us (u), \
  unsigned int          : stdc_first_trailing_one_ui (u), \
  unsigned long int     : stdc_first_trailing_one_ul (u), \
  unsigned long long int: stdc_first_trailing_one_ull(u), \
  default:    0                                           \
)
unsigned int stdc_count_zeros_uc(unsigned char value) ATTR_UNSEQUENCED;
unsigned int stdc_count_zeros_us(unsigned short value) ATTR_UNSEQUENCED;
unsigned int stdc_count_zeros_ui(unsigned int value) ATTR_UNSEQUENCED;
unsigned int stdc_count_zeros_ul(unsigned long int value) ATTR_UNSEQUENCED;
unsigned int stdc_count_zeros_ull(unsigned long long int value) ATTR_UNSEQUENCED;
#define stdc_count_zeros(u)  _Generic((u),         \
  unsigned char         : stdc_count_zeros_uc (u), \
  unsigned short        : stdc_count_zeros_us (u), \
  unsigned int          : stdc_count_zeros_ui (u), \
  unsigned long int     : stdc_count_zeros_ul (u), \
  unsigned long long int: stdc_count_zeros_ull(u), \
  default:    0                                    \
)
unsigned int stdc_count_ones_uc(unsigned char value) ATTR_UNSEQUENCED;
unsigned int stdc_count_ones_us(unsigned short value) ATTR_UNSEQUENCED;
unsigned int stdc_count_ones_ui(unsigned int value) ATTR_UNSEQUENCED;
unsigned int stdc_count_ones_ul(unsigned long int value) ATTR_UNSEQUENCED;
unsigned int stdc_count_ones_ull(unsigned long long int value) ATTR_UNSEQUENCED;
#define stdc_count_ones(u)  _Generic((u),         \
  unsigned char         : stdc_count_ones_uc (u), \
  unsigned short        : stdc_count_ones_us (u), \
  unsigned int          : stdc_count_ones_ui (u), \
  unsigned long int     : stdc_count_ones_ul (u), \
  unsigned long long int: stdc_count_ones_ull(u), \
  default:    0                                   \
)
bool stdc_has_single_bit_uc(unsigned char value) ATTR_UNSEQUENCED;
bool stdc_has_single_bit_us(unsigned short value) ATTR_UNSEQUENCED;
bool stdc_has_single_bit_ui(unsigned int value) ATTR_UNSEQUENCED;
bool stdc_has_single_bit_ul(unsigned long int value) ATTR_UNSEQUENCED;
bool stdc_has_single_bit_ull(unsigned long long int value) ATTR_UNSEQUENCED;
#define stdc_has_single_bit(u)  _Generic((u),         \
  unsigned char         : stdc_has_single_bit_uc (u), \
  unsigned short        : stdc_has_single_bit_us (u), \
  unsigned int          : stdc_has_single_bit_ui (u), \
  unsigned long int     : stdc_has_single_bit_ul (u), \
  unsigned long long int: stdc_has_single_bit_ull(u), \
  default:    0                                       \
)
unsigned int stdc_bit_width_uc(unsigned char value) ATTR_UNSEQUENCED;
unsigned int stdc_bit_width_us(unsigned short value) ATTR_UNSEQUENCED;
unsigned int stdc_bit_width_ui(unsigned int value) ATTR_UNSEQUENCED;
unsigned int stdc_bit_width_ul(unsigned long int value) ATTR_UNSEQUENCED;
unsigned int stdc_bit_width_ull(unsigned long long int value) ATTR_UNSEQUENCED;
#define stdc_bit_width(u)  _Generic((u),         \
  unsigned char         : stdc_bit_width_uc (u), \
  unsigned short        : stdc_bit_width_us (u), \
  unsigned int          : stdc_bit_width_ui (u), \
  unsigned long int     : stdc_bit_width_ul (u), \
  unsigned long long int: stdc_bit_width_ull(u), \
  default:    0                                  \
)
unsigned char          stdc_bit_floor_uc(unsigned char value) ATTR_UNSEQUENCED;
unsigned short         stdc_bit_floor_us(unsigned short value) ATTR_UNSEQUENCED;
unsigned int           stdc_bit_floor_ui(unsigned int value) ATTR_UNSEQUENCED;
unsigned long int      stdc_bit_floor_ul(unsigned long int value) ATTR_UNSEQUENCED;
unsigned long long int stdc_bit_floor_ull(unsigned long long int value) ATTR_UNSEQUENCED;
#define stdc_bit_floor(u)  _Generic((u),         \
  unsigned char         : stdc_bit_floor_uc (u), \
  unsigned short        : stdc_bit_floor_us (u), \
  unsigned int          : stdc_bit_floor_ui (u), \
  unsigned long int     : stdc_bit_floor_ul (u), \
  unsigned long long int: stdc_bit_floor_ull(u), \
  default:    0                                  \
)
unsigned char          stdc_bit_ceil_uc(unsigned char value) ATTR_UNSEQUENCED;
unsigned short         stdc_bit_ceil_us(unsigned short value) ATTR_UNSEQUENCED;
unsigned int           stdc_bit_ceil_ui(unsigned int value) ATTR_UNSEQUENCED;
unsigned long int      stdc_bit_ceil_ul(unsigned long int value) ATTR_UNSEQUENCED;
unsigned long long int stdc_bit_ceil_ull(unsigned long long int value) ATTR_UNSEQUENCED;
#define stdc_bit_ceil(u)  _Generic((u),         \
  unsigned char         : stdc_bit_ceil_uc (u), \
  unsigned short        : stdc_bit_ceil_us (u), \
  unsigned int          : stdc_bit_ceil_ui (u), \
  unsigned long int     : stdc_bit_ceil_ul (u), \
  unsigned long long int: stdc_bit_ceil_ull(u), \
  default:    0                                 \
)

#endif
#include <limits.h>

#define typebit(_w)   (sizeof(_w) * CHAR_BIT)
#define typehalf(_w)  ((typeof(_w))((typeof(_w))1 << ((unsigned int)typebit(_w) - 1)))

#endif //EXTSTD_EXTBIT_H
