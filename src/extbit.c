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

#include <extbit.h>

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
  _BitScanReverse(&index, (unsigned int) value);
  return (typebit(value) - 1) - (unsigned int)index;
#endif
}

inline unsigned int stdc_leading_zeros_us(unsigned short value) {
#ifdef __GNUC__
  return value ? (unsigned int)__builtin_clzg(value) : typebit(value);
#elif defined(_MSC_VER)
  if (value == 0) { return typebit(value); }
  unsigned long index;
  _BitScanReverse(&index, (unsigned int) value);
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
  return value > typehalf(value) ? 0 : (typeof(value)) ((typeof(value))1 << stdc_bit_width((unsigned char)(value - 1)));
}

inline unsigned short stdc_bit_ceil_us(unsigned short value) {
  if (value <= 1) { return 1; }
  return value > typehalf(value) ? 0 : (typeof(value)) ((typeof(value))1 << stdc_bit_width((unsigned short)(value - 1)));
}

inline unsigned int stdc_bit_ceil_ui(unsigned int value) {
  if (value <= 1) { return 1; }
  return value > typehalf(value) ? 0 : (typeof(value)) ((typeof(value))1 << stdc_bit_width((unsigned int)(value - 1)));
}

inline unsigned long int stdc_bit_ceil_ul(unsigned long int value) {
  if (value <= 1) { return 1; }
  return value > typehalf(value) ? 0 : (typeof(value)) ((typeof(value))1 << stdc_bit_width((unsigned long int)(value - 1)));
}

inline unsigned long long int stdc_bit_ceil_ull(unsigned long long int value) {
  if (value <= 1) { return 1; }
  return value > typehalf(value) ? 0 : (typeof(value)) ((typeof(value))1 << stdc_bit_width((unsigned long long int)(value - 1)));
}
#endif

#define UINT(w) uint##w##_t
#define INT(w) int##w##_t

#ifdef __GNUC__
#define extstd_leading_zeros_definition(_w)                             \
inline unsigned int extstd_leading_zeros_u##_w(UINT(_w) value) {        \
  return value ? (unsigned int)__builtin_clzg(value) : typebit(value);  \
}
#if (UINT8_MAX != UCHAR_MAX)
extstd_leading_zeros_definition(  8)
#endif
#if (UINT16_MAX != USHRT_MAX)
extstd_leading_zeros_definition( 16)
#endif
#if (UINT32_MAX != UINT_MAX)
extstd_leading_zeros_definition( 32)
#endif
#if (UINT64_MAX != ULONG_MAX && UINT64_MAX != ULLONG_MAX)
extstd_leading_zeros_definition( 64)
#endif
#elifdef _MSC_VER
#define extstd_leading_zeros_definition32(_w)                       \
inline unsigned int extstd_leading_zeros_u##_w(UINT(_w) value) {    \
  if (value == 0) { return typebit(value); }                        \
  unsigned long index;                                              \
  _BitScanReverse(&index, (unsigned int)value);                     \
  return (typebit(value) - 1) - (unsigned int)index;                \
}
#define extstd_leading_zeros_definition64(_w)                     \
inline unsigned int extstd_leading_zeros_u##_w(UINT(_w) value) {  \
  if (value == 0) { return typebit(value); }                      \
  unsigned long index;                                            \
  _BitScanReverse64(&index, value);                               \
  return (typebit(value) - 1) - (unsigned int)index;              \
}
#if (UINT8_MAX != UCHAR_MAX)
extstd_leading_zeros_definition32(  8)
#endif
#if (UINT16_MAX != USHRT_MAX)
extstd_leading_zeros_definition32( 16)
#endif
#if (UINT32_MAX != UINT_MAX)
extstd_leading_zeros_definition32( 32)
#endif
#if (UINT64_MAX != ULONG_MAX && UINT64_MAX != ULLONG_MAX)
extstd_leading_zeros_definition64( 64)
#endif
#endif
inline unsigned int extstd_leading_zeros_u128(uint128_t value) {
  if (!value) { return typebit(value); }
  if (value <= (uint128_t) UINT64_MAX) { return 64U + extstd_leading_zeros_u64((uint64_t)value); }
  return extstd_leading_zeros_u64((uint64_t)(value >> 64));
}
inline unsigned int extstd_leading_zeros_u256(uint256_t value) {
  if (!value) { return typebit(value); }
  if (value <= (uint256_t) UINT128_MAX) { return 128U + extstd_leading_zeros_u128((uint128_t)value); }
  return extstd_leading_zeros_u128((uint128_t)(value >> 128));
}

#define extstd_leading_ones_definition(_w)                      \
inline unsigned int extstd_leading_ones_u##_w(UINT(_w) value) { \
  return extstd_leading_zeros((typeof(value))~value);           \
}
#if (UINT8_MAX != UCHAR_MAX)
extstd_leading_ones_definition(  8)
#endif
#if (UINT16_MAX != USHRT_MAX)
extstd_leading_ones_definition( 16)
#endif
#if (UINT32_MAX != UINT_MAX)
extstd_leading_ones_definition( 32)
#endif
#if (UINT64_MAX != ULONG_MAX && UINT64_MAX != ULLONG_MAX)
extstd_leading_ones_definition( 64)
#endif
extstd_leading_ones_definition(128)
extstd_leading_ones_definition(256)

#ifdef __GNUC__
#define extstd_trailing_zeros_definition(_w)                            \
inline unsigned int extstd_trailing_zeros_u##_w(UINT(_w) value) {       \
  return value ? (unsigned int)__builtin_ctzg(value) : typebit(value);  \
}
#if (UINT8_MAX != UCHAR_MAX)
extstd_trailing_zeros_definition(  8)
#endif
#if (UINT16_MAX != USHRT_MAX)
extstd_trailing_zeros_definition( 16)
#endif
#if (UINT32_MAX != UINT_MAX)
extstd_trailing_zeros_definition( 32)
#endif
#if (UINT64_MAX != ULONG_MAX && UINT64_MAX != ULLONG_MAX)
extstd_trailing_zeros_definition( 64)
#endif
#elifdef _MSC_VER
#define extstd_trailing_zeros_definition32(_w)                     \
inline unsigned int extstd_trailing_zeros_u##_w(UINT(_w) value) {  \
  if (value == 0) { return typebit(value); }                       \
  unsigned long index;                                             \
  _BitScanForward(&index, (unsigned int)value);                    \
  return (unsigned int)index;                                      \
}
#define extstd_trailing_zeros_definition64(_w)                     \
inline unsigned int extstd_trailing_zeros_u##_w(UINT(_w) value) {  \
  if (value == 0) { return typebit(value); }                       \
  unsigned long index;                                             \
  _BitScanForward64(&index, value);                                \
  return (unsigned int)index;                                      \
}
#if (UINT8_MAX != UCHAR_MAX)
extstd_trailing_zeros_definition32(  8)
#endif
#if (UINT16_MAX != USHRT_MAX)
extstd_trailing_zeros_definition32( 16)
#endif
#if (UINT32_MAX != UINT_MAX)
extstd_trailing_zeros_definition32( 32)
#endif
#if (UINT64_MAX != ULONG_MAX && UINT64_MAX != ULLONG_MAX)
extstd_trailing_zeros_definition64( 64)
#endif
#endif
inline unsigned int extstd_trailing_zeros_u128(uint128_t value) {
  if (!value) { return typebit(value); }
  if (value <= (uint128_t) UINT64_MAX) {return extstd_trailing_zeros_u64((uint64_t)value); }
  return 64U + extstd_trailing_zeros_u64((uint64_t)(value >> 64));
}
inline unsigned int extstd_trailing_zeros_u256(uint256_t value) {
  if (!value) { return typebit(value); }
  if (value <= (uint256_t) UINT128_MAX) { return extstd_trailing_zeros_u128((uint128_t)value); }
  return 128U + extstd_trailing_zeros_u128((uint128_t)(value >> 128));
}

#define extstd_trailing_ones_definition(_w)                       \
inline unsigned int extstd_trailing_ones_u##_w(UINT(_w) value) {  \
  return extstd_trailing_zeros((typeof(value))~value);            \
}
#if (UINT8_MAX != UCHAR_MAX)
extstd_trailing_ones_definition(  8)
#endif
#if (UINT16_MAX != USHRT_MAX)
extstd_trailing_ones_definition( 16)
#endif
#if (UINT32_MAX != UINT_MAX)
extstd_trailing_ones_definition( 32)
#endif
#if (UINT64_MAX != ULONG_MAX && UINT64_MAX != ULLONG_MAX)
extstd_trailing_ones_definition( 64)
#endif
extstd_trailing_ones_definition(128)
extstd_trailing_ones_definition(256)

#define extstd_first_leading_zero_definition(_w)                                         \
inline unsigned int extstd_first_leading_zero_u##_w(UINT(_w) value) {                    \
  return value == UINT##_w##_MAX ? 0 : extstd_leading_zeros((typeof(value))~value) + 1U; \
}
#if (UINT8_MAX != UCHAR_MAX)
extstd_first_leading_zero_definition(  8)
#endif
#if (UINT16_MAX != USHRT_MAX)
extstd_first_leading_zero_definition( 16)
#endif
#if (UINT32_MAX != UINT_MAX)
extstd_first_leading_zero_definition( 32)
#endif
#if (UINT64_MAX != ULONG_MAX && UINT64_MAX != ULLONG_MAX)
extstd_first_leading_zero_definition( 64)
#endif
extstd_first_leading_zero_definition(128)
extstd_first_leading_zero_definition(256)

#define extstd_first_leading_one_definition(_w)                       \
inline unsigned int extstd_first_leading_one_u##_w(UINT(_w) value) {  \
  return value ? extstd_leading_zeros(value) + 1U : 0;                \
}
#if (UINT8_MAX != UCHAR_MAX)
extstd_first_leading_one_definition(  8)
#endif
#if (UINT16_MAX != USHRT_MAX)
extstd_first_leading_one_definition( 16)
#endif
#if (UINT32_MAX != UINT_MAX)
extstd_first_leading_one_definition( 32)
#endif
#if (UINT64_MAX != ULONG_MAX && UINT64_MAX != ULLONG_MAX)
extstd_first_leading_one_definition( 64)
#endif
extstd_first_leading_one_definition(128)
extstd_first_leading_one_definition(256)

#define extstd_first_trailing_zero_definition(_w)                                         \
inline unsigned int extstd_first_trailing_zero_u##_w(UINT(_w) value) {                    \
  return value == UINT##_w##_MAX ? 0 : extstd_trailing_zeros((typeof(value))~value) + 1U; \
}
#if (UINT8_MAX != UCHAR_MAX)
extstd_first_trailing_zero_definition(  8)
#endif
#if (UINT16_MAX != USHRT_MAX)
extstd_first_trailing_zero_definition( 16)
#endif
#if (UINT32_MAX != UINT_MAX)
extstd_first_trailing_zero_definition( 32)
#endif
#if (UINT64_MAX != ULONG_MAX && UINT64_MAX != ULLONG_MAX)
extstd_first_trailing_zero_definition( 64)
#endif
extstd_first_trailing_zero_definition(128)
extstd_first_trailing_zero_definition(256)

#define extstd_first_trailing_one_definition(_w)                       \
inline unsigned int extstd_first_trailing_one_u##_w(UINT(_w) value) {  \
  return value ? extstd_trailing_zeros(value) + 1U : 0;                \
}
#if (UINT8_MAX != UCHAR_MAX)
extstd_first_trailing_one_definition(  8)
#endif
#if (UINT16_MAX != USHRT_MAX)
extstd_first_trailing_one_definition( 16)
#endif
#if (UINT32_MAX != UINT_MAX)
extstd_first_trailing_one_definition( 32)
#endif
#if (UINT64_MAX != ULONG_MAX && UINT64_MAX != ULLONG_MAX)
extstd_first_trailing_one_definition( 64)
#endif
extstd_first_trailing_one_definition(128)
extstd_first_trailing_one_definition(256)

#define extstd_count_zeros_definition(_w)                             \
inline unsigned int extstd_count_zeros_u##_w(UINT(_w) value) {        \
  unsigned int count = 0;                                             \
  for (unsigned int i = 0; i < (unsigned int) typebit(value); i++) {  \
    if (!(value & ((typeof(value))1 << i))) { count += 1; }           \
  }                                                                   \
  return count;                                                       \
}
#if (UINT8_MAX != UCHAR_MAX)
extstd_count_zeros_definition(  8)
#endif
#if (UINT16_MAX != USHRT_MAX)
extstd_count_zeros_definition( 16)
#endif
#if (UINT32_MAX != UINT_MAX)
extstd_count_zeros_definition( 32)
#endif
#if (UINT64_MAX != ULONG_MAX && UINT64_MAX != ULLONG_MAX)
extstd_count_zeros_definition( 64)
#endif
extstd_count_zeros_definition(128)
extstd_count_zeros_definition(256)

#define extstd_count_ones_definition(_w)                              \
inline unsigned int extstd_count_ones_u##_w(UINT(_w) value) {         \
  unsigned int count = 0;                                             \
  for (unsigned int i = 0; i < (unsigned int) typebit(value); i++) {  \
    if (value & ((typeof(value))1 << i)) { count += 1; }              \
  }                                                                   \
  return count;                                                       \
}
#if (UINT8_MAX != UCHAR_MAX)
extstd_count_ones_definition(  8)
#endif
#if (UINT16_MAX != USHRT_MAX)
extstd_count_ones_definition( 16)
#endif
#if (UINT32_MAX != UINT_MAX)
extstd_count_ones_definition( 32)
#endif
#if (UINT64_MAX != ULONG_MAX && UINT64_MAX != ULLONG_MAX)
extstd_count_ones_definition( 64)
#endif
extstd_count_ones_definition(128)
extstd_count_ones_definition(256)

#define extstd_has_single_bit_definition(_w)              \
inline bool extstd_has_single_bit_u##_w(UINT(_w) value) { \
  return value && !(value & (typeof(value))(value - 1));  \
}
#if (UINT8_MAX != UCHAR_MAX)
extstd_has_single_bit_definition(  8)
#endif
#if (UINT16_MAX != USHRT_MAX)
extstd_has_single_bit_definition( 16)
#endif
#if (UINT32_MAX != UINT_MAX)
extstd_has_single_bit_definition( 32)
#endif
#if (UINT64_MAX != ULONG_MAX && UINT64_MAX != ULLONG_MAX)
extstd_has_single_bit_definition( 64)
#endif
extstd_has_single_bit_definition(128)
extstd_has_single_bit_definition(256)

#define extstd_bit_width_definition(_w)                                          \
inline unsigned int extstd_bit_width_u##_w(UINT(_w) value) {                     \
  return value ? (unsigned int)typebit(value) - extstd_leading_zeros(value) : 0; \
}
#if (UINT8_MAX != UCHAR_MAX)
extstd_bit_width_definition(  8)
#endif
#if (UINT16_MAX != USHRT_MAX)
extstd_bit_width_definition( 16)
#endif
#if (UINT32_MAX != UINT_MAX)
extstd_bit_width_definition( 32)
#endif
#if (UINT64_MAX != ULONG_MAX && UINT64_MAX != ULLONG_MAX)
extstd_bit_width_definition( 64)
#endif
extstd_bit_width_definition(128)
extstd_bit_width_definition(256)

#define extstd_bit_floor_definition(_w)                                                                     \
inline UINT(_w) extstd_bit_floor_u##_w(UINT(_w) value) {                                                    \
  return value ? (typeof(value))1 << ((unsigned int)typebit(value) - 1U - extstd_leading_zeros(value)) : 0; \
}
#if (UINT8_MAX != UCHAR_MAX)
extstd_bit_floor_definition(  8)
#endif
#if (UINT16_MAX != USHRT_MAX)
extstd_bit_floor_definition( 16)
#endif
#if (UINT32_MAX != UINT_MAX)
extstd_bit_floor_definition( 32)
#endif
#if (UINT64_MAX != ULONG_MAX && UINT64_MAX != ULLONG_MAX)
extstd_bit_floor_definition( 64)
#endif
extstd_bit_floor_definition(128)
extstd_bit_floor_definition(256)

#define extstd_bit_ceil_definition(_w)                                                                    \
inline UINT(_w) extstd_bit_ceil_u##_w(UINT(_w) value) {                                                   \
  if (value <= 1) { return 1; }                                                                           \
  return value > typehalf(value) ? 0 : (typeof(value)) ((typeof(value))1 << extstd_bit_width(value - 1)); \
}
#if (UINT8_MAX != UCHAR_MAX)
extstd_bit_ceil_definition(  8)
#endif
#if (UINT16_MAX != USHRT_MAX)
extstd_bit_ceil_definition( 16)
#endif
#if (UINT32_MAX != UINT_MAX)
extstd_bit_ceil_definition( 32)
#endif
#if (UINT64_MAX != ULONG_MAX && UINT64_MAX != ULLONG_MAX)
extstd_bit_ceil_definition( 64)
#endif
extstd_bit_ceil_definition(128)
extstd_bit_ceil_definition(256)

