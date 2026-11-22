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
 * Filename: extfloat.c
 * Creator: Yaokai Liu
 * Create Date: 2026-11-01
 * Copyright (c) 2026 Yaokai Liu. All rights reserved.
 **/
#include "extbit.h"
#include "extint.h"
#include "extfloat.h"
#include <string.h>

#define max(a, b)   ((a) >  (b) ? (a) :  (b))
#define abs(a)      ((a) >  (0) ? (a) : -(a))
#define sgn(a)      ((a) == (0) ? 0 : ((a) > 0) ? 1  :  -1)

#define FLOAT(w) float##w##_t
#define UINT(w) uint##w##_t
#define INT(w) int##w##_t

#define float_compose(_w, _ew)                                                                  \
inline FLOAT(_w) extstd_float##_w##_compose(bool sign, UINT(_w) mantissa, INT(_ew) exponent) {  \
  const uint32_t result_bits = _w;                                                              \
  const uint32_t order_bits = FLOAT##_w##_EXP_BIT;                                              \
  const UINT(_w) order_MASK = (((UINT(_w)) 1) << order_bits) - 1;                               \
  const uint32_t mant_bits = result_bits - order_bits - 1;                                      \
  const UINT(_w) mant_MASK = (((UINT(_w)) 1) << mant_bits) - 1;                                 \
                                                                                                \
  uint32_t final_exp = 0;                                                                       \
  UINT(_w) final_mant = 0;                                                                      \
                                                                                                \
  exponent += (INT(_ew))FLOAT##_w##_EXP_BIAS;                                                   \
  if (exponent < -FLOAT##_w##_MANT_BIT) {                                                       \
    final_exp = 0; final_mant = 0;                                                              \
  } else if (exponent <= 0) {                                                                   \
    final_exp = 0;                                                                              \
    final_mant = (mantissa & mant_MASK) >> (-exponent);                                         \
  } else if (exponent >= (INT(_ew))order_MASK) {                                                \
    final_exp  = order_MASK; final_mant  = 0;                                                   \
  } else {                                                                                      \
    final_exp  = exponent & order_MASK;                                                         \
    final_mant = mantissa & mant_MASK;                                                          \
  }                                                                                             \
  union { UINT(_w) I; FLOAT(_w) F; } val = {};                                                  \
  val.I = (((UINT(_w))sign) << (result_bits - 1))                                               \
        | ((((UINT(_w))final_exp)) << mant_bits)                                                \
        | (final_mant);                                                                         \
  return val.F;                                                                                 \
}

float_compose( 16, 16)
float_compose( 32, 16)
float_compose( 64, 16)
float_compose(128, 32)

#define float_decompose(_w, _ew)                                                                                    \
inline void extstd_float##_w##_decompose(const FLOAT(_w) val, UINT(_w) *mantissa, INT(_ew) *exponent, bool *sign) { \
  UINT(_w) bits = 0;                                                                                                \
  memcpy(&bits, &val, sizeof(UINT(_w)));                                                                            \
  *sign = bits >> ((_w) - 1);                                                                                       \
  const UINT(_w) mant = bits & ~(UINT##_w##_MAX << FLOAT##_w##_MANT_BIT);                                           \
  const UINT(_w) biased_exp = (bits << 1) >> (FLOAT##_w##_MANT_BIT + 1);                                            \
  if (biased_exp == FLOAT##_w##_EXP_MAX) {                                                                          \
    *exponent = INT##_ew##_MAX;                                                                                     \
    *mantissa = mant;                                                                                               \
  } else if (biased_exp == 0) {                                                                                     \
    *exponent = (INT(_ew)) (1 - FLOAT##_w##_EXP_BIAS) - FLOAT##_w##_EXP_BIT;                                        \
    *mantissa = mant;                                                                                               \
  } else {                                                                                                          \
    *exponent = (INT(_ew)) ((int32_t)biased_exp - FLOAT##_w##_EXP_BIAS) - FLOAT##_w##_EXP_BIT;                      \
    *mantissa = mant | ((UINT(_w))1 << FLOAT##_w##_MANT_BIT);                                                       \
  }                                                                                                                 \
}

float_decompose( 16, 16)
float_decompose( 32, 16)
float_decompose( 64, 16)
float_decompose(128, 32)

