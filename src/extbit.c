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
 * Filename: extbit.c
 * Creator: Yaokai Liu
 * Create Date: 2026-11-15
 * Copyright (c) 2026 Yaokai Liu. All rights reserved.
 **/

#include "extbit.h"

#if !__has_include(<stdbit.h>)
#if !defined(__GNUC__) && !defined(_MSC_VER)
#error "unsopported C language compiler."
#endif
inline unsigned int stdc_leading_zeros_uc(unsigned char value) {
#ifdef __GNUC__
  return value ? (unsigned int)__builtin_clzg(value) : typebit(value);
#elifdef _MSC_VER
  if (value == 0) { return typebit(value); }
  unsigned long index;
  _BitScanReverse(&index, value);
  return (typebit(value) - 1) - (unsigned int)index;
#endif
}

inline unsigned int stdc_leading_zeros_us(unsigned short value) {
#ifdef __GNUC__
  return value ? (unsigned int)__builtin_clzg(value) : typebit(value);
#elif defined(_MSC_VER)
  if (value == 0) { return typebit(value); }
  unsigned long index;
  _BitScanReverse(&index, value);
  return (typebit(value) - 1) - (unsigned int)index;
#endif
}

inline unsigned int stdc_leading_zeros_ui(unsigned int value) {
#ifdef __GNUC__
  return value ? (unsigned int)__builtin_clzg(value) : typebit(value);
#elif defined(_MSC_VER)
  if (value == 0) { return typebit(value); }
  unsigned long index;
  _BitScanReverse(&index, value);
  return (typebit(value) - 1) - (unsigned int)index;
#endif
}

inline unsigned int stdc_leading_zeros_ul(unsigned long int value) {
#ifdef __GNUC__
  return value ? (unsigned int)__builtin_clzg(value) : typebit(value);
#elif defined(_MSC_VER)
  if (value == 0) { return typebit(value); }
  unsigned long index;
  _BitScanReverse(&index, value);
  return (typebit(value) - 1) - (unsigned int)index;
#endif
}

inline unsigned int stdc_leading_zeros_ull(unsigned long long int value) {
#ifdef __GNUC__
  return value ? (unsigned int)__builtin_clzg(value) : typebit(value);
#elif defined(_MSC_VER)
  if (value == 0) { return typebit(value); }
  unsigned long index;
  _BitScanReverse64(&index, value);
  return (typebit(value) - 1) - (unsigned int)index;
#endif
}

inline unsigned int stdc_leading_ones_uc(unsigned char value) {
  return stdc_leading_zeros((typeof(value))~value);
}

inline unsigned int stdc_leading_ones_us(unsigned short value) {
  return stdc_leading_zeros((typeof(value))~value);
}

inline unsigned int stdc_leading_ones_ui(unsigned int value) {
  return stdc_leading_zeros((typeof(value))~value);
}

inline unsigned int stdc_leading_ones_ul(unsigned long int value) {
  return stdc_leading_zeros((typeof(value))~value);
}

inline unsigned int stdc_leading_ones_ull(unsigned long long int value) {
  return stdc_leading_zeros((typeof(value))~value);
}

inline unsigned int stdc_trailing_zeros_uc(unsigned char value) {
#ifdef __GNUC__
  return value ? __builtin_ctzg(value) : typebit(value);
#elif defined(_MSC_VER)
  if (value == 0) { return typebit(value); }
  unsigned long index;
  _BitScanForward(&index, value);
  return (unsigned int)index;
#endif
}

inline unsigned int stdc_trailing_zeros_us(unsigned short value) {
#ifdef __GNUC__
  return value ? __builtin_ctzg(value) : typebit(value);
#elif defined(_MSC_VER)
  if (value == 0) { return typebit(value); }
  unsigned long index;
  _BitScanForward(&index, value);
  return (unsigned int)index;
#endif
}

inline unsigned int stdc_trailing_zeros_ui(unsigned int value) {
#ifdef __GNUC__
  return value ? __builtin_ctzg(value) : typebit(value);
#elif defined(_MSC_VER)
  if (value == 0) { return typebit(value); }
  unsigned long index;
  _BitScanForward(&index, value);
  return (unsigned int)index;
#endif
}

inline unsigned int stdc_trailing_zeros_ul(unsigned long int value) {
#ifdef __GNUC__
  return value ? __builtin_ctzg(value) : typebit(value);
#elif defined(_MSC_VER)
  if (value == 0) { return typebit(value); }
  unsigned long index;
  _BitScanForward(&index, value);
  return (unsigned int)index;
#endif
}

inline unsigned int stdc_trailing_zeros_ull(unsigned long long int value) {
#ifdef __GNUC__
  return value ? __builtin_ctzg(value) : typebit(value);
#elif defined(_MSC_VER)
  if (value == 0) { return typebit(value); }
  unsigned long index;
  _BitScanForward64(&index, value);
  return (unsigned int)index;
#endif
}

inline unsigned int stdc_trailing_ones_uc(unsigned char value) {
  return stdc_trailing_zeros((typeof(value))~value);
}

inline unsigned int stdc_trailing_ones_us(unsigned short value) {
  return stdc_trailing_zeros((typeof(value))~value);
}

inline unsigned int stdc_trailing_ones_ui(unsigned int value) {
  return stdc_trailing_zeros((typeof(value))~value);
}

inline unsigned int stdc_trailing_ones_ul(unsigned long int value) {
  return stdc_trailing_zeros((typeof(value))~value);
}

inline unsigned int stdc_trailing_ones_ull(unsigned long long int value) {
  return stdc_trailing_zeros((typeof(value))~value);
}

inline unsigned int stdc_first_leading_zero_uc(unsigned char value) {
  return value == UCHAR_MAX ? 0 : stdc_leading_zeros((typeof(value))~value) + 1U;
}

inline unsigned int stdc_first_leading_zero_us(unsigned short value) {
  return value == USHRT_MAX ? 0 : stdc_leading_zeros((typeof(value))~value) + 1U;
}

inline unsigned int stdc_first_leading_zero_ui(unsigned int value) {
  return value == UINT_MAX ? 0 : stdc_leading_zeros((typeof(value))~value) + 1U;
}

inline unsigned int stdc_first_leading_zero_ul(unsigned long int value) {
  return value == ULONG_MAX ? 0 : stdc_leading_zeros((typeof(value))~value) + 1U;
}

inline unsigned int stdc_first_leading_zero_ull(unsigned long long int value) {
  return value == ULLONG_MAX ? 0 : stdc_leading_zeros((typeof(value))~value) + 1U;
}

inline unsigned int stdc_first_leading_one_uc(unsigned char value) {
  return value ? stdc_leading_zeros(value) + 1U : 0;
}

inline unsigned int stdc_first_leading_one_us(unsigned short value) {
  return value ? stdc_leading_zeros(value) + 1U : 0;
}

inline unsigned int stdc_first_leading_one_ui(unsigned int value) {
  return value ? stdc_leading_zeros(value) + 1U : 0;
}

inline unsigned int stdc_first_leading_one_ul(unsigned long int value) {
  return value ? stdc_leading_zeros(value) + 1U : 0;
}

inline unsigned int stdc_first_leading_one_ull(unsigned long long int value) {
  return value ? stdc_leading_zeros(value) + 1U : 0;
}

inline unsigned int stdc_first_trailing_zero_uc(unsigned char value) {
  return value == UCHAR_MAX ? 0 : stdc_trailing_zeros((typeof(value))~value) + 1U;
}

inline unsigned int stdc_first_trailing_zero_us(unsigned short value) {
  return value == USHRT_MAX ? 0 : stdc_trailing_zeros((typeof(value))~value) + 1U;
}

inline unsigned int stdc_first_trailing_zero_ui(unsigned int value) {
  return value == UINT_MAX ? 0 : stdc_trailing_zeros((typeof(value))~value) + 1U;
}

inline unsigned int stdc_first_trailing_zero_ul(unsigned long int value) {
  return value == ULONG_MAX ? 0 : stdc_trailing_zeros((typeof(value))~value) + 1U;
}

inline unsigned int stdc_first_trailing_zero_ull(unsigned long long int value) {
  return value == ULLONG_MAX ? 0 : stdc_trailing_zeros((typeof(value))~value) + 1U;
}

inline unsigned int stdc_first_trailing_one_uc(unsigned char value) {
  return value ? stdc_trailing_zeros(value) + 1U : 0;
}

inline unsigned int stdc_first_trailing_one_us(unsigned short value) {
  return value ? stdc_trailing_zeros(value) + 1U : 0;
}

inline unsigned int stdc_first_trailing_one_ui(unsigned int value) {
  return value ? stdc_trailing_zeros(value) + 1U : 0;
}

inline unsigned int stdc_first_trailing_one_ul(unsigned long int value) {
  return value ? stdc_trailing_zeros(value) + 1U : 0;
}

inline unsigned int stdc_first_trailing_one_ull(unsigned long long int value) {
  return value ? stdc_trailing_zeros(value) + 1U : 0;
}

inline unsigned int stdc_count_zeros_uc(unsigned char value) {
  unsigned int count = 0;
  for (unsigned int i = 0; i < (unsigned int) typebit(value); i++) {
    if (!(value & ((typeof(value))1 << i))) { count += 1; }
  }
  return count;
}

inline unsigned int stdc_count_zeros_us(unsigned short value) {
  unsigned int count = 0;
  for (unsigned int i = 0; i < (unsigned int) typebit(value); i++) {
    if (!(value & ((typeof(value))1 << i))) { count += 1; }
  }
  return count;
}

inline unsigned int stdc_count_zeros_ui(unsigned int value) {
  unsigned int count = 0;
  for (unsigned int i = 0; i < (unsigned int) typebit(value); i++) {
    if (!(value & ((typeof(value))1 << i))) { count += 1; }
  }
  return count;
}

inline unsigned int stdc_count_zeros_ul(unsigned long int value) {
  unsigned int count = 0;
  for (unsigned int i = 0; i < (unsigned int) typebit(value); i++) {
    if (!(value & ((typeof(value))1 << i))) { count += 1; }
  }
  return count;
}

inline unsigned int stdc_count_zeros_ull(unsigned long long int value) {
  unsigned int count = 0;
  for (unsigned int i = 0; i < (unsigned int) typebit(value); i++) {
    if (!(value & ((typeof(value))1 << i))) { count += 1; }
  }
  return count;
}

inline unsigned int stdc_count_ones_uc(unsigned char value) {
  unsigned int count = 0;
  for (unsigned int i = 0; i < (unsigned int) typebit(value); i++) {
    if (value & ((typeof(value))1 << i)) { count += 1; }
  }
  return count;
}

inline unsigned int stdc_count_ones_us(unsigned short value) {
  unsigned int count = 0;
  for (unsigned int i = 0; i < (unsigned int) typebit(value); i++) {
    if (value & ((typeof(value))1 << i)) { count += 1; }
  }
  return count;
}

inline unsigned int stdc_count_ones_ui(unsigned int value) {
  unsigned int count = 0;
  for (unsigned int i = 0; i < (unsigned int) typebit(value); i++) {
    if (value & ((typeof(value))1 << i)) { count += 1; }
  }
  return count;
}

inline unsigned int stdc_count_ones_ul(unsigned long int value) {
  unsigned int count = 0;
  for (unsigned int i = 0; i < (unsigned int) typebit(value); i++) {
    if (value & ((typeof(value))1 << i)) { count += 1; }
  }
  return count;
}

inline unsigned int stdc_count_ones_ull(unsigned long long int value) {
  unsigned int count = 0;
  for (unsigned int i = 0; i < (unsigned int) typebit(value); i++) {
    if (value & ((typeof(value))1 << i)) { count += 1; }
  }
  return count;
}

inline bool stdc_has_single_bit_uc(unsigned char value) {
  return value && !(value & (typeof(value))(value - 1));
}

inline bool stdc_has_single_bit_us(unsigned short value) {
  return value && !(value & (typeof(value))(value - 1));
}

inline bool stdc_has_single_bit_ui(unsigned int value) {
  return value && !(value & (typeof(value))(value - 1));
}

inline bool stdc_has_single_bit_ul(unsigned long int value) {
  return value && !(value & (typeof(value))(value - 1));
}

inline bool stdc_has_single_bit_ull(unsigned long long int value) {
  return value && !(value & (typeof(value))(value - 1));
}

inline unsigned int stdc_bit_width_uc(unsigned char value) {
  return value ? (unsigned int)typebit(value) - stdc_leading_zeros(value) : 0;
}

inline unsigned int stdc_bit_width_us(unsigned short value) {
  return value ? (unsigned int)typebit(value) - stdc_leading_zeros(value) : 0;
}

inline unsigned int stdc_bit_width_ui(unsigned int value) {
  return value ? (unsigned int)typebit(value) - stdc_leading_zeros(value) : 0;
}

inline unsigned int stdc_bit_width_ul(unsigned long int value) {
  return value ? (unsigned int)typebit(value) - stdc_leading_zeros(value) : 0;
}

inline unsigned int stdc_bit_width_ull(unsigned long long int value) {
  return value ? (unsigned int)typebit(value) - stdc_leading_zeros(value) : 0;
}

inline unsigned char stdc_bit_floor_uc(unsigned char value) {
  return value ? (typeof(value))1 << ((unsigned int)typebit(value) - 1U - stdc_leading_zeros(value)) : 0;
}

inline unsigned short stdc_bit_floor_us(unsigned short value) {
  return value ? (typeof(value))1 << ((unsigned int)typebit(value) - 1U - stdc_leading_zeros(value)) : 0;
}

inline unsigned int stdc_bit_floor_ui(unsigned int value) {
  return value ? (typeof(value))1 << ((unsigned int)typebit(value) - 1U - stdc_leading_zeros(value)) : 0;
}

inline unsigned long int stdc_bit_floor_ul(unsigned long int value) {
  return value ? (typeof(value))1 << ((unsigned int)typebit(value) - 1U - stdc_leading_zeros(value)) : 0;
}

inline unsigned long long int stdc_bit_floor_ull(unsigned long long int value) {
  return value ? (typeof(value))1 << ((unsigned int)typebit(value) - 1U - stdc_leading_zeros(value)) : 0;
}

inline unsigned char stdc_bit_ceil_uc(unsigned char value) {
  if (value <= 1) { return 1; }
  return value > typehalf(value) ? 0 : (typeof(value)) ((typeof(value))1 << stdc_bit_width(value - 1));
}

inline unsigned short stdc_bit_ceil_us(unsigned short value) {
  if (value <= 1) { return 1; }
  return value > typehalf(value) ? 0 : (typeof(value)) ((typeof(value))1 << stdc_bit_width(value - 1));
}

inline unsigned int stdc_bit_ceil_ui(unsigned int value) {
  if (value <= 1) { return 1; }
  return value > typehalf(value) ? 0 : (typeof(value)) ((typeof(value))1 << stdc_bit_width(value - 1));
}

inline unsigned long int stdc_bit_ceil_ul(unsigned long int value) {
  if (value <= 1) { return 1; }
  return value > typehalf(value) ? 0 : (typeof(value)) ((typeof(value))1 << stdc_bit_width(value - 1));
}

inline unsigned long long int stdc_bit_ceil_ull(unsigned long long int value) {
  if (value <= 1) { return 1; }
  return value > typehalf(value) ? 0 : (typeof(value)) ((typeof(value))1 << stdc_bit_width(value - 1));
}
#endif

