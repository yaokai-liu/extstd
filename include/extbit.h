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
#ifndef __has_c_attribute
#  define __has_c_attribute(x) 0
#endif
#if __has_c_attribute(unsequenced)
#  define EXTSTD_ATTR_UNSEQUENCED [[unsequenced]]
#elif defined(__GNUC__)
#  define EXTSTD_ATTR_UNSEQUENCED __attribute__((__const__))
#else
#  define EXTSTD_ATTR_UNSEQUENCED
#endif

#if __has_include(<stdbit.h>)
#include <stdbit.h>
#else
unsigned int stdc_leading_zeros_uc(unsigned char value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_leading_zeros_us(unsigned short value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_leading_zeros_ui(unsigned int value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_leading_zeros_ul(unsigned long int value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_leading_zeros_ull(unsigned long long int value) EXTSTD_ATTR_UNSEQUENCED;
#define stdc_leading_zeros(u)  _Generic((u),          \
  unsigned char         : stdc_leading_zeros_uc (u),  \
  unsigned short        : stdc_leading_zeros_us (u),  \
  unsigned int          : stdc_leading_zeros_ui (u),  \
  unsigned long int     : stdc_leading_zeros_ul (u),  \
  unsigned long long int: stdc_leading_zeros_ull(u),  \
  default:    0                                       \
)
unsigned int stdc_leading_ones_uc(unsigned char value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_leading_ones_us(unsigned short value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_leading_ones_ui(unsigned int value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_leading_ones_ul(unsigned long int value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_leading_ones_ull(unsigned long long int value) EXTSTD_ATTR_UNSEQUENCED;
#define stdc_leading_ones(u)  _Generic((u),         \
  unsigned char         : stdc_leading_ones_uc (u), \
  unsigned short        : stdc_leading_ones_us (u), \
  unsigned int          : stdc_leading_ones_ui (u), \
  unsigned long int     : stdc_leading_ones_ul (u), \
  unsigned long long int: stdc_leading_ones_ull(u), \
  default:    0                                     \
)
unsigned int stdc_trailing_zeros_uc(unsigned char value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_trailing_zeros_us(unsigned short value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_trailing_zeros_ui(unsigned int value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_trailing_zeros_ul(unsigned long int value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_trailing_zeros_ull(unsigned long long int value) EXTSTD_ATTR_UNSEQUENCED;
#define stdc_trailing_zeros(u)  _Generic((u),         \
  unsigned char         : stdc_trailing_zeros_uc (u), \
  unsigned short        : stdc_trailing_zeros_us (u), \
  unsigned int          : stdc_trailing_zeros_ui (u), \
  unsigned long int     : stdc_trailing_zeros_ul (u), \
  unsigned long long int: stdc_trailing_zeros_ull(u), \
  default:    0                                       \
)
unsigned int stdc_trailing_ones_uc(unsigned char value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_trailing_ones_us(unsigned short value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_trailing_ones_ui(unsigned int value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_trailing_ones_ul(unsigned long int value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_trailing_ones_ull(unsigned long long int value) EXTSTD_ATTR_UNSEQUENCED;
#define stdc_trailing_ones(u)  _Generic((u),         \
  unsigned char         : stdc_trailing_ones_uc (u), \
  unsigned short        : stdc_trailing_ones_us (u), \
  unsigned int          : stdc_trailing_ones_ui (u), \
  unsigned long int     : stdc_trailing_ones_ul (u), \
  unsigned long long int: stdc_trailing_ones_ull(u), \
  default:    0                                      \
)
unsigned int stdc_first_leading_zero_uc(unsigned char value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_first_leading_zero_us(unsigned short value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_first_leading_zero_ui(unsigned int value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_first_leading_zero_ul(unsigned long int value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_first_leading_zero_ull(unsigned long long int value) EXTSTD_ATTR_UNSEQUENCED;
#define stdc_first_leading_zero(u)  _Generic((u),         \
  unsigned char         : stdc_first_leading_zero_uc (u), \
  unsigned short        : stdc_first_leading_zero_us (u), \
  unsigned int          : stdc_first_leading_zero_ui (u), \
  unsigned long int     : stdc_first_leading_zero_ul (u), \
  unsigned long long int: stdc_first_leading_zero_ull(u), \
  default:    0                                           \
)
unsigned int stdc_first_leading_one_uc(unsigned char value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_first_leading_one_us(unsigned short value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_first_leading_one_ui(unsigned int value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_first_leading_one_ul(unsigned long int value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_first_leading_one_ull(unsigned long long int value) EXTSTD_ATTR_UNSEQUENCED;
#define stdc_first_leading_one(u)  _Generic((u),         \
  unsigned char         : stdc_first_leading_one_uc (u), \
  unsigned short        : stdc_first_leading_one_us (u), \
  unsigned int          : stdc_first_leading_one_ui (u), \
  unsigned long int     : stdc_first_leading_one_ul (u), \
  unsigned long long int: stdc_first_leading_one_ull(u), \
  default:    0                                          \
)
unsigned int stdc_first_trailing_zero_uc(unsigned char value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_first_trailing_zero_us(unsigned short value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_first_trailing_zero_ui(unsigned int value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_first_trailing_zero_ul(unsigned long int value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_first_trailing_zero_ull(unsigned long long int value) EXTSTD_ATTR_UNSEQUENCED;
#define stdc_first_trailing_zero(u)  _Generic((u),         \
  unsigned char         : stdc_first_trailing_zero_uc (u), \
  unsigned short        : stdc_first_trailing_zero_us (u), \
  unsigned int          : stdc_first_trailing_zero_ui (u), \
  unsigned long int     : stdc_first_trailing_zero_ul (u), \
  unsigned long long int: stdc_first_trailing_zero_ull(u), \
  default:    0                                            \
)
unsigned int stdc_first_trailing_one_uc(unsigned char value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_first_trailing_one_us(unsigned short value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_first_trailing_one_ui(unsigned int value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_first_trailing_one_ul(unsigned long int value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_first_trailing_one_ull(unsigned long long int value) EXTSTD_ATTR_UNSEQUENCED;
#define stdc_first_trailing_one(u)  _Generic((u),         \
  unsigned char         : stdc_first_trailing_one_uc (u), \
  unsigned short        : stdc_first_trailing_one_us (u), \
  unsigned int          : stdc_first_trailing_one_ui (u), \
  unsigned long int     : stdc_first_trailing_one_ul (u), \
  unsigned long long int: stdc_first_trailing_one_ull(u), \
  default:    0                                           \
)
unsigned int stdc_count_zeros_uc(unsigned char value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_count_zeros_us(unsigned short value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_count_zeros_ui(unsigned int value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_count_zeros_ul(unsigned long int value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_count_zeros_ull(unsigned long long int value) EXTSTD_ATTR_UNSEQUENCED;
#define stdc_count_zeros(u)  _Generic((u),         \
  unsigned char         : stdc_count_zeros_uc (u), \
  unsigned short        : stdc_count_zeros_us (u), \
  unsigned int          : stdc_count_zeros_ui (u), \
  unsigned long int     : stdc_count_zeros_ul (u), \
  unsigned long long int: stdc_count_zeros_ull(u), \
  default:    0                                    \
)
unsigned int stdc_count_ones_uc(unsigned char value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_count_ones_us(unsigned short value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_count_ones_ui(unsigned int value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_count_ones_ul(unsigned long int value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_count_ones_ull(unsigned long long int value) EXTSTD_ATTR_UNSEQUENCED;
#define stdc_count_ones(u)  _Generic((u),         \
  unsigned char         : stdc_count_ones_uc (u), \
  unsigned short        : stdc_count_ones_us (u), \
  unsigned int          : stdc_count_ones_ui (u), \
  unsigned long int     : stdc_count_ones_ul (u), \
  unsigned long long int: stdc_count_ones_ull(u), \
  default:    0                                   \
)
bool stdc_has_single_bit_uc(unsigned char value) EXTSTD_ATTR_UNSEQUENCED;
bool stdc_has_single_bit_us(unsigned short value) EXTSTD_ATTR_UNSEQUENCED;
bool stdc_has_single_bit_ui(unsigned int value) EXTSTD_ATTR_UNSEQUENCED;
bool stdc_has_single_bit_ul(unsigned long int value) EXTSTD_ATTR_UNSEQUENCED;
bool stdc_has_single_bit_ull(unsigned long long int value) EXTSTD_ATTR_UNSEQUENCED;
#define stdc_has_single_bit(u)  _Generic((u),         \
  unsigned char         : stdc_has_single_bit_uc (u), \
  unsigned short        : stdc_has_single_bit_us (u), \
  unsigned int          : stdc_has_single_bit_ui (u), \
  unsigned long int     : stdc_has_single_bit_ul (u), \
  unsigned long long int: stdc_has_single_bit_ull(u), \
  default:    0                                       \
)
unsigned int stdc_bit_width_uc(unsigned char value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_bit_width_us(unsigned short value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_bit_width_ui(unsigned int value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_bit_width_ul(unsigned long int value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int stdc_bit_width_ull(unsigned long long int value) EXTSTD_ATTR_UNSEQUENCED;
#define stdc_bit_width(u)  _Generic((u),         \
  unsigned char         : stdc_bit_width_uc (u), \
  unsigned short        : stdc_bit_width_us (u), \
  unsigned int          : stdc_bit_width_ui (u), \
  unsigned long int     : stdc_bit_width_ul (u), \
  unsigned long long int: stdc_bit_width_ull(u), \
  default:    0                                  \
)
unsigned char          stdc_bit_floor_uc(unsigned char value) EXTSTD_ATTR_UNSEQUENCED;
unsigned short         stdc_bit_floor_us(unsigned short value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int           stdc_bit_floor_ui(unsigned int value) EXTSTD_ATTR_UNSEQUENCED;
unsigned long int      stdc_bit_floor_ul(unsigned long int value) EXTSTD_ATTR_UNSEQUENCED;
unsigned long long int stdc_bit_floor_ull(unsigned long long int value) EXTSTD_ATTR_UNSEQUENCED;
#define stdc_bit_floor(u)  _Generic((u),         \
  unsigned char         : stdc_bit_floor_uc (u), \
  unsigned short        : stdc_bit_floor_us (u), \
  unsigned int          : stdc_bit_floor_ui (u), \
  unsigned long int     : stdc_bit_floor_ul (u), \
  unsigned long long int: stdc_bit_floor_ull(u), \
  default:    0                                  \
)
unsigned char          stdc_bit_ceil_uc(unsigned char value) EXTSTD_ATTR_UNSEQUENCED;
unsigned short         stdc_bit_ceil_us(unsigned short value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int           stdc_bit_ceil_ui(unsigned int value) EXTSTD_ATTR_UNSEQUENCED;
unsigned long int      stdc_bit_ceil_ul(unsigned long int value) EXTSTD_ATTR_UNSEQUENCED;
unsigned long long int stdc_bit_ceil_ull(unsigned long long int value) EXTSTD_ATTR_UNSEQUENCED;
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
#include "extint.h"
#define typebit(_w)   (sizeof(_w) * CHAR_BIT)
#define typehalf(_w)  ((typeof(_w))((typeof(_w))1 << ((unsigned int)typebit(_w) - 1)))
#if (UINT8_MAX == UCHAR_MAX)
#define extstd_leading_zeros_u8 stdc_leading_zeros_uc
#else
unsigned int extstd_leading_zeros_u8  (uint8_t   value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT16_MAX == USHRT_MAX)
#define extstd_leading_zeros_u16  stdc_leading_zeros_us
#else
unsigned int extstd_leading_zeros_u16 (uint16_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT32_MAX == UINT_MAX)
#define extstd_leading_zeros_u32  stdc_leading_zeros_ui
#else
unsigned int extstd_leading_zeros_u32 (uint32_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT64_MAX == ULONG_MAX)
#define extstd_leading_zeros_u64  stdc_leading_zeros_ul
#elif (UINT64_MAX == ULLONG_MAX)
#define extstd_leading_zeros_u64  stdc_leading_zeros_ull
#else
unsigned int extstd_leading_zeros_u64 (uint64_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
unsigned int extstd_leading_zeros_u128(uint128_t value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int extstd_leading_zeros_u256(uint256_t value) EXTSTD_ATTR_UNSEQUENCED;
#define extstd_leading_zeros(u)  _Generic((u),  \
  uint8_t   : extstd_leading_zeros_u8  (u),     \
  uint16_t  : extstd_leading_zeros_u16 (u),     \
  uint32_t  : extstd_leading_zeros_u32 (u),     \
  uint64_t  : extstd_leading_zeros_u64 (u),     \
  uint128_t : extstd_leading_zeros_u128(u),     \
  uint256_t : extstd_leading_zeros_u256(u),     \
  default:    0                                 \
)
#if (UINT8_MAX == UCHAR_MAX)
#define extstd_leading_ones_u8   stdc_leading_ones_uc 
#else
unsigned int extstd_leading_ones_u8  (uint8_t   value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT16_MAX == USHRT_MAX)
#define extstd_leading_ones_u16  stdc_leading_ones_us
#else
unsigned int extstd_leading_ones_u16 (uint16_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT32_MAX == UINT_MAX)
#define extstd_leading_ones_u32  stdc_leading_ones_ui
#else
unsigned int extstd_leading_ones_u32 (uint32_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT64_MAX == ULONG_MAX)
#define extstd_leading_ones_u64  stdc_leading_ones_ul
#elif (UINT64_MAX == ULLONG_MAX)
#define extstd_leading_ones_u64  stdc_leading_ones_ull
#else
unsigned int extstd_leading_ones_u64 (uint64_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
unsigned int extstd_leading_ones_u128(uint128_t value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int extstd_leading_ones_u256(uint256_t value) EXTSTD_ATTR_UNSEQUENCED;
#define extstd_leading_ones(u)  _Generic((u), \
  uint8_t   : extstd_leading_ones_u8  (u),    \
  uint16_t  : extstd_leading_ones_u16 (u),    \
  uint32_t  : extstd_leading_ones_u32 (u),    \
  uint64_t  : extstd_leading_ones_u64 (u),    \
  uint128_t : extstd_leading_ones_u128(u),    \
  uint256_t : extstd_leading_ones_u256(u),    \
  default:    0                               \
)
#if (UINT8_MAX == UCHAR_MAX)
#define extstd_trailing_zeros_u8   stdc_trailing_zeros_uc 
#else
unsigned int extstd_trailing_zeros_u8  (uint8_t   value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT16_MAX == USHRT_MAX)
#define extstd_trailing_zeros_u16  stdc_trailing_zeros_us
#else
unsigned int extstd_trailing_zeros_u16 (uint16_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT32_MAX == UINT_MAX)
#define extstd_trailing_zeros_u32  stdc_trailing_zeros_ui
#else
unsigned int extstd_trailing_zeros_u32 (uint32_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT64_MAX == ULONG_MAX)
#define extstd_trailing_zeros_u64  stdc_trailing_zeros_ul
#elif (UINT64_MAX == ULLONG_MAX)
#define extstd_trailing_zeros_u64  stdc_trailing_zeros_ull
#else
unsigned int extstd_trailing_zeros_u64 (uint64_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
unsigned int extstd_trailing_zeros_u128(uint128_t value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int extstd_trailing_zeros_u256(uint256_t value) EXTSTD_ATTR_UNSEQUENCED;
#define extstd_trailing_zeros(u)  _Generic((u), \
  uint8_t   : extstd_trailing_zeros_u8  (u),    \
  uint16_t  : extstd_trailing_zeros_u16 (u),    \
  uint32_t  : extstd_trailing_zeros_u32 (u),    \
  uint64_t  : extstd_trailing_zeros_u64 (u),    \
  uint128_t : extstd_trailing_zeros_u128(u),    \
  uint256_t : extstd_trailing_zeros_u256(u),    \
  default:    0                                 \
)
#if (UINT8_MAX == UCHAR_MAX)
#define extstd_trailing_ones_u8   stdc_trailing_ones_uc 
#else
unsigned int extstd_trailing_ones_u8  (uint8_t   value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT16_MAX == USHRT_MAX)
#define extstd_trailing_ones_u16  stdc_trailing_ones_us
#else
unsigned int extstd_trailing_ones_u16 (uint16_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT32_MAX == UINT_MAX)
#define extstd_trailing_ones_u32  stdc_trailing_ones_ui
#else
unsigned int extstd_trailing_ones_u32 (uint32_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT64_MAX == ULONG_MAX)
#define extstd_trailing_ones_u64  stdc_trailing_ones_ul
#elif (UINT64_MAX == ULLONG_MAX)
#define extstd_trailing_ones_u64  stdc_trailing_ones_ull
#else
unsigned int extstd_trailing_ones_u64 (uint64_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
unsigned int extstd_trailing_ones_u128(uint128_t value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int extstd_trailing_ones_u256(uint256_t value) EXTSTD_ATTR_UNSEQUENCED;
#define extstd_trailing_ones(u)  _Generic((u),  \
  uint8_t   : extstd_trailing_ones_u8  (u),     \
  uint16_t  : extstd_trailing_ones_u16 (u),     \
  uint32_t  : extstd_trailing_ones_u32 (u),     \
  uint64_t  : extstd_trailing_ones_u64 (u),     \
  uint128_t : extstd_trailing_ones_u128(u),     \
  uint256_t : extstd_trailing_ones_u256(u),     \
  default:    0                                 \
)
#if (UINT8_MAX == UCHAR_MAX)
#define extstd_first_leading_zero_u8   stdc_first_leading_zero_uc 
#else
unsigned int extstd_first_leading_zero_u8  (uint8_t   value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT16_MAX == USHRT_MAX)
#define extstd_first_leading_zero_u16  stdc_first_leading_zero_us
#else
unsigned int extstd_first_leading_zero_u16 (uint16_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT32_MAX == UINT_MAX)
#define extstd_first_leading_zero_u32  stdc_first_leading_zero_ui
#else
unsigned int extstd_first_leading_zero_u32 (uint32_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT64_MAX == ULONG_MAX)
#define extstd_first_leading_zero_u64  stdc_first_leading_zero_ul
#elif (UINT64_MAX == ULLONG_MAX)
#define extstd_first_leading_zero_u64  stdc_first_leading_zero_ull
#else
unsigned int extstd_first_leading_zero_u64 (uint64_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
unsigned int extstd_first_leading_zero_u128(uint128_t value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int extstd_first_leading_zero_u256(uint256_t value) EXTSTD_ATTR_UNSEQUENCED;
#define extstd_first_leading_zero(u)  _Generic((u), \
  uint8_t   : extstd_first_leading_zero_u8  (u),    \
  uint16_t  : extstd_first_leading_zero_u16 (u),    \
  uint32_t  : extstd_first_leading_zero_u32 (u),    \
  uint64_t  : extstd_first_leading_zero_u64 (u),    \
  uint128_t : extstd_first_leading_zero_u128(u),    \
  uint256_t : extstd_first_leading_zero_u256(u),    \
  default:    0                                     \
)
#if (UINT8_MAX == UCHAR_MAX)
#define extstd_first_leading_one_u8   stdc_first_leading_one_uc 
#else
unsigned int extstd_first_leading_one_u8  (uint8_t   value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT16_MAX == USHRT_MAX)
#define extstd_first_leading_one_u16  stdc_first_leading_one_us
#else
unsigned int extstd_first_leading_one_u16 (uint16_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT32_MAX == UINT_MAX)
#define extstd_first_leading_one_u32  stdc_first_leading_one_ui
#else
unsigned int extstd_first_leading_one_u32 (uint32_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT64_MAX == ULONG_MAX)
#define extstd_first_leading_one_u64  stdc_first_leading_one_ul
#elif (UINT64_MAX == ULLONG_MAX)
#define extstd_first_leading_one_u64  stdc_first_leading_one_ull
#else
unsigned int extstd_first_leading_one_u64 (uint64_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
unsigned int extstd_first_leading_one_u128(uint128_t value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int extstd_first_leading_one_u256(uint256_t value) EXTSTD_ATTR_UNSEQUENCED;
#define extstd_first_leading_one(u)  _Generic((u),  \
  uint8_t   : extstd_first_leading_one_u8  (u),     \
  uint16_t  : extstd_first_leading_one_u16 (u),     \
  uint32_t  : extstd_first_leading_one_u32 (u),     \
  uint64_t  : extstd_first_leading_one_u64 (u),     \
  uint128_t : extstd_first_leading_one_u128(u),     \
  uint256_t : extstd_first_leading_one_u256(u),     \
  default:    0                                     \
)
#if (UINT8_MAX == UCHAR_MAX)
#define extstd_first_trailing_zero_u8   stdc_first_trailing_zero_uc 
#else
unsigned int extstd_first_trailing_zero_u8  (uint8_t   value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT16_MAX == USHRT_MAX)
#define extstd_first_trailing_zero_u16  stdc_first_trailing_zero_us
#else
unsigned int extstd_first_trailing_zero_u16 (uint16_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT32_MAX == UINT_MAX)
#define extstd_first_trailing_zero_u32  stdc_first_trailing_zero_ui
#else
unsigned int extstd_first_trailing_zero_u32 (uint32_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT64_MAX == ULONG_MAX)
#define extstd_first_trailing_zero_u64  stdc_first_trailing_zero_ul
#elif (UINT64_MAX == ULLONG_MAX)
#define extstd_first_trailing_zero_u64  stdc_first_trailing_zero_ull
#else
unsigned int extstd_first_trailing_zero_u64 (uint64_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
unsigned int extstd_first_trailing_zero_u128(uint128_t value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int extstd_first_trailing_zero_u256(uint256_t value) EXTSTD_ATTR_UNSEQUENCED;
#define extstd_first_trailing_zero(u)  _Generic((u),  \
  uint8_t   : extstd_first_trailing_zero_u8  (u),     \
  uint16_t  : extstd_first_trailing_zero_u16 (u),     \
  uint32_t  : extstd_first_trailing_zero_u32 (u),     \
  uint64_t  : extstd_first_trailing_zero_u64 (u),     \
  uint128_t : extstd_first_trailing_zero_u128(u),     \
  uint256_t : extstd_first_trailing_zero_u256(u),     \
  default:    0                                       \
)
#if (UINT8_MAX == UCHAR_MAX)
#define extstd_first_trailing_one_u8   stdc_first_trailing_one_uc 
#else
unsigned int extstd_first_trailing_one_u8  (uint8_t   value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT16_MAX == USHRT_MAX)
#define extstd_first_trailing_one_u16  stdc_first_trailing_one_us
#else
unsigned int extstd_first_trailing_one_u16 (uint16_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT32_MAX == UINT_MAX)
#define extstd_first_trailing_one_u32  stdc_first_trailing_one_ui
#else
unsigned int extstd_first_trailing_one_u32 (uint32_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT64_MAX == ULONG_MAX)
#define extstd_first_trailing_one_u64  stdc_first_trailing_one_ul
#elif (UINT64_MAX == ULLONG_MAX)
#define extstd_first_trailing_one_u64  stdc_first_trailing_one_ull
#else
unsigned int extstd_first_trailing_one_u64 (uint64_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
unsigned int extstd_first_trailing_one_u128(uint128_t value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int extstd_first_trailing_one_u256(uint256_t value) EXTSTD_ATTR_UNSEQUENCED;
#define extstd_first_trailing_one(u)  _Generic((u), \
  uint8_t   : extstd_first_trailing_one_u8  (u),    \
  uint16_t  : extstd_first_trailing_one_u16 (u),    \
  uint32_t  : extstd_first_trailing_one_u32 (u),    \
  uint64_t  : extstd_first_trailing_one_u64 (u),    \
  uint128_t : extstd_first_trailing_one_u128(u),    \
  uint256_t : extstd_first_trailing_one_u256(u),    \
  default:    0                                     \
)
#if (UINT8_MAX == UCHAR_MAX)
#define extstd_count_zeros_u8   stdc_count_zeros_uc 
#else
unsigned int extstd_count_zeros_u8  (uint8_t   value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT16_MAX == USHRT_MAX)
#define extstd_count_zeros_u16  stdc_count_zeros_us
#else
unsigned int extstd_count_zeros_u16 (uint16_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT32_MAX == UINT_MAX)
#define extstd_count_zeros_u32  stdc_count_zeros_ui
#else
unsigned int extstd_count_zeros_u32 (uint32_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT64_MAX == ULONG_MAX)
#define extstd_count_zeros_u64  stdc_count_zeros_ul
#elif (UINT64_MAX == ULLONG_MAX)
#define extstd_count_zeros_u64  stdc_count_zeros_ull
#else
unsigned int extstd_count_zeros_u64 (uint64_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
unsigned int extstd_count_zeros_u128(uint128_t value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int extstd_count_zeros_u256(uint256_t value) EXTSTD_ATTR_UNSEQUENCED;
#define extstd_count_zeros(u)  _Generic((u),  \
  uint8_t   : extstd_count_zeros_u8  (u),     \
  uint16_t  : extstd_count_zeros_u16 (u),     \
  uint32_t  : extstd_count_zeros_u32 (u),     \
  uint64_t  : extstd_count_zeros_u64 (u),     \
  uint128_t : extstd_count_zeros_u128(u),     \
  uint256_t : extstd_count_zeros_u256(u),     \
  default:    0                               \
)
#if (UINT8_MAX == UCHAR_MAX)
#define extstd_count_ones_u8   stdc_count_ones_uc 
#else
unsigned int extstd_count_ones_u8  (uint8_t   value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT16_MAX == USHRT_MAX)
#define extstd_count_ones_u16  stdc_count_ones_us
#else
unsigned int extstd_count_ones_u16 (uint16_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT32_MAX == UINT_MAX)
#define extstd_count_ones_u32  stdc_count_ones_ui
#else
unsigned int extstd_count_ones_u32 (uint32_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT64_MAX == ULONG_MAX)
#define extstd_count_ones_u64  stdc_count_ones_ul
#elif (UINT64_MAX == ULLONG_MAX)
#define extstd_count_ones_u64  stdc_count_ones_ull
#else
unsigned int extstd_count_ones_u64 (uint64_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
unsigned int extstd_count_ones_u128(uint128_t value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int extstd_count_ones_u256(uint256_t value) EXTSTD_ATTR_UNSEQUENCED;
#define extstd_count_ones(u)  _Generic((u), \
  uint8_t   : extstd_count_ones_u8  (u),    \
  uint16_t  : extstd_count_ones_u16 (u),    \
  uint32_t  : extstd_count_ones_u32 (u),    \
  uint64_t  : extstd_count_ones_u64 (u),    \
  uint128_t : extstd_count_ones_u128(u),    \
  uint256_t : extstd_count_ones_u256(u),    \
  default:    0                             \
)
#if (UINT8_MAX == UCHAR_MAX)
#define extstd_has_single_bit_u8 stdc_has_single_bit_uc
#else
bool extstd_has_single_bit_u8  (uint8_t   value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT16_MAX == USHRT_MAX)
#define extstd_has_single_bit_u16 stdc_has_single_bit_us
#else
bool extstd_has_single_bit_u16 (uint16_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT32_MAX == UINT_MAX)
#define extstd_has_single_bit_u32 stdc_has_single_bit_ui
#else
bool extstd_has_single_bit_u32 (uint32_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT64_MAX == ULONG_MAX)
#define extstd_has_single_bit_u64 stdc_has_single_bit_ul
#elif (UINT64_MAX == ULLONG_MAX)
#define extstd_has_single_bit_u64 stdc_has_single_bit_ull
#else
bool extstd_has_single_bit_u64 (uint64_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
bool extstd_has_single_bit_u128(uint128_t value) EXTSTD_ATTR_UNSEQUENCED;
bool extstd_has_single_bit_u256(uint256_t value) EXTSTD_ATTR_UNSEQUENCED;
#define extstd_has_single_bit(u)  _Generic((u), \
  uint8_t   : extstd_has_single_bit_u8  (u),    \
  uint16_t  : extstd_has_single_bit_u16 (u),    \
  uint32_t  : extstd_has_single_bit_u32 (u),    \
  uint64_t  : extstd_has_single_bit_u64 (u),    \
  uint128_t : extstd_has_single_bit_u128(u),    \
  uint256_t : extstd_has_single_bit_u256(u),    \
  default:    0                                 \
)
#if (UINT8_MAX == UCHAR_MAX)
#define extstd_bit_width_u8   stdc_bit_width_uc 
#else
unsigned int extstd_bit_width_u8  (uint8_t   value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT16_MAX == USHRT_MAX)
#define extstd_bit_width_u16  stdc_bit_width_us
#else
unsigned int extstd_bit_width_u16 (uint16_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT32_MAX == UINT_MAX)
#define extstd_bit_width_u32  stdc_bit_width_ui
#else
unsigned int extstd_bit_width_u32 (uint32_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT64_MAX == ULONG_MAX)
#define extstd_bit_width_u64  stdc_bit_width_ul
#elif (UINT64_MAX == ULLONG_MAX)
#define extstd_bit_width_u64  stdc_bit_width_ull
#else
unsigned int extstd_bit_width_u64 (uint64_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
unsigned int extstd_bit_width_u128(uint128_t value) EXTSTD_ATTR_UNSEQUENCED;
unsigned int extstd_bit_width_u256(uint256_t value) EXTSTD_ATTR_UNSEQUENCED;
#define extstd_bit_width(u)  _Generic((u),  \
  uint8_t   : extstd_bit_width_u8  (u),     \
  uint16_t  : extstd_bit_width_u16 (u),     \
  uint32_t  : extstd_bit_width_u32 (u),     \
  uint64_t  : extstd_bit_width_u64 (u),     \
  uint128_t : extstd_bit_width_u128(u),     \
  uint256_t : extstd_bit_width_u256(u),     \
  default:    0                             \
)
#if (UINT8_MAX == UCHAR_MAX)
#define extstd_bit_floor_u8   stdc_bit_floor_uc
#else
uint8_t   extstd_bit_floor_u8  (uint8_t   value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT16_MAX == USHRT_MAX)
#define extstd_bit_floor_u16 stdc_bit_floor_us
#else
uint16_t  extstd_bit_floor_u16 (uint16_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT32_MAX == UINT_MAX)
#define extstd_bit_floor_u32 stdc_bit_floor_ui
#else
uint32_t  extstd_bit_floor_u32 (uint32_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT64_MAX == ULONG_MAX)
#define extstd_bit_floor_u64 stdc_bit_floor_ul
#elif (UINT64_MAX == ULLONG_MAX)
#define extstd_bit_floor_u64  stdc_bit_floor_ull
#else
uint64_t  extstd_bit_floor_u64 (uint64_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
uint128_t extstd_bit_floor_u128(uint128_t value) EXTSTD_ATTR_UNSEQUENCED;
uint256_t extstd_bit_floor_u256(uint256_t value) EXTSTD_ATTR_UNSEQUENCED;
#define extstd_bit_floor(u)  _Generic((u),  \
  uint8_t   : extstd_bit_floor_u8  (u),     \
  uint16_t  : extstd_bit_floor_u16 (u),     \
  uint32_t  : extstd_bit_floor_u32 (u),     \
  uint64_t  : extstd_bit_floor_u64 (u),     \
  uint128_t : extstd_bit_floor_u128(u),     \
  uint256_t : extstd_bit_floor_u256(u),     \
  default:    0                             \
)
#if (UINT8_MAX == UCHAR_MAX)
#define extstd_bit_ceil_u8   stdc_bit_ceil_uc
#else
uint8_t   extstd_bit_ceil_u8  (uint8_t   value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT16_MAX == USHRT_MAX)
#define extstd_bit_ceil_u16 stdc_bit_ceil_us
#else
uint16_t  extstd_bit_ceil_u16 (uint16_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT32_MAX == UINT_MAX)
#define extstd_bit_ceil_u32 stdc_bit_ceil_ui
#else
uint32_t  extstd_bit_ceil_u32 (uint32_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
#if (UINT64_MAX == ULONG_MAX)
#define extstd_bit_ceil_u64 stdc_bit_ceil_ul
#elif (UINT64_MAX == ULLONG_MAX)
#define extstd_bit_ceil_u64  stdc_bit_ceil_ull
#else
uint64_t  extstd_bit_ceil_u64 (uint64_t  value) EXTSTD_ATTR_UNSEQUENCED;
#endif
uint128_t extstd_bit_ceil_u128(uint128_t value) EXTSTD_ATTR_UNSEQUENCED;
uint256_t extstd_bit_ceil_u256(uint256_t value) EXTSTD_ATTR_UNSEQUENCED;
#define extstd_bit_ceil(u)  _Generic((u), \
  uint8_t   : extstd_bit_ceil_u8  (u),    \
  uint16_t  : extstd_bit_ceil_u16 (u),    \
  uint32_t  : extstd_bit_ceil_u32 (u),    \
  uint64_t  : extstd_bit_ceil_u64 (u),    \
  uint128_t : extstd_bit_ceil_u128(u),    \
  uint256_t : extstd_bit_ceil_u256(u),    \
  default:    0                           \
)

#endif //EXTSTD_EXTBIT_H
