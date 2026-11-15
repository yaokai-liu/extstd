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
 * Filename: extfloat.h
 * Creator: Yaokai Liu
 * Create Date: 2026-11-01
 * Copyright (c) 2026 Yaokai Liu. All rights reserved.
 **/

#ifndef EXTSTD_EXTFLOAT_H
#define EXTSTD_EXTFLOAT_H
#include <float.h>
#include <extint.h>

#ifndef FLOAT32_T_DEFINED
typedef float   float32_t;
#define FLOAT32_T_DEFINED "float"
#endif
static_assert(sizeof(float32_t) == 4, "float32_t must be 32-bit");
static_assert(FLT_RADIX == 2, "radix must be 2");
static_assert(FLT_MANT_DIG == 24, "float must have 24-bit mantissa (binary32)");
static_assert(FLT_MAX_EXP == 128, "float exponent range must match binary32");
static_assert(FLT_MIN_EXP == -125, "float exponent range must match binary32");

#ifndef FLOAT64_T_DEFINED
typedef double  float64_t;
#define FLOAT64_T_DEFINED "double"
#endif
static_assert(sizeof(float64_t) == 8, "float64_t must be 64-bit");
static_assert(DBL_MANT_DIG == 53, "double must have 53-bit mantissa (binary64)");
static_assert(DBL_MAX_EXP == 1024, "double exponent range must match binary64");
static_assert(DBL_MIN_EXP == -1021, "double exponent range must match binary64");

#ifndef FLOAT16_T_DEFINED
#ifdef __FLT16_MANT_DIG__
typedef _Float16        float16_t;
#define FLOAT16_T_DEFINED "_Float16"
#else
typedef unsigned short  float16_t;
#define FLOAT16_T_DEFINED "unsigned short"
#endif
#endif
static_assert(sizeof(float16_t) == 2, "float16_t must be 16-bit");

#ifndef FLOAT128_T_DEFINED
#ifdef __FLT128_MANT_DIG__
typedef __float128  float128_t;
#define FLOAT128_T_DEFINED "__float128"
#else
typedef uint128_t   float128_t;
#define FLOAT128_T_DEFINED "uint128_t"
#endif
#endif
static_assert(sizeof(float128_t) == 16, "float128_t must be 128-bit");

// Float types follow IEEE754 standard.
#define FLOAT16_EXP_BIT     5
#define FLOAT16_MANT_BIT    10
#define FLOAT32_EXP_BIT     8
#define FLOAT32_MANT_BIT    23
#define FLOAT64_EXP_BIT     11
#define FLOAT64_MANT_BIT    52
#define FLOAT128_EXP_BIT    15
#define FLOAT128_MANT_BIT   112
#define FLOAT16_EXP_MAX     (((uint16_t )1U << FLOAT16_EXP_BIT) - 1)
#define FLOAT16_MANT_MAX    (((uint16_t )1U << FLOAT16_MANT_BIT) - 1)
#define FLOAT32_EXP_MAX     (((uint32_t )1U << FLOAT32_EXP_BIT) - 1)
#define FLOAT32_MANT_MAX    (((uint32_t )1U << FLOAT32_MANT_BIT) - 1)
#define FLOAT64_EXP_MAX     (((uint64_t )1U << FLOAT64_EXP_BIT) - 1)
#define FLOAT64_MANT_MAX    (((uint64_t )1U << FLOAT64_MANT_BIT) - 1)
#define FLOAT128_EXP_MAX    (((uint128_t)1U << FLOAT128_EXP_BIT) - 1)
#define FLOAT128_MANT_MAX   (((uint128_t)1U << FLOAT128_MANT_BIT) - 1)
#define FLOAT16_EXP_BIAS    (((uint16_t) 1U << (FLOAT16_EXP_BIT - 1)) - 1)
#define FLOAT32_EXP_BIAS    (((uint32_t) 1U << (FLOAT32_EXP_BIT - 1)) - 1)
#define FLOAT64_EXP_BIAS    (((uint64_t) 1U << (FLOAT64_EXP_BIT - 1)) - 1)
#define FLOAT128_EXP_BIAS   (((uint128_t)1U << (FLOAT128_EXP_BIT - 1)) - 1)

// never return the NaN
// @mantissa: is required in form of '1BB...BB', here FLOAT16_MANT_BIT count of 'B'.
//            assumed 'BB...BB' not more than FLOAT16_MANT_MAX
//            'xxxxxBB...BB' can be accepted (only BB...BB are effective), but not suggested.
float16_t extstd_float16_compose(bool sign, uint16_t mantissa, int16_t exponent);

// never return the NaN
// @mantissa: is required in form of 1BB...BB, here FLOAT32_MANT_BIT count of 'B'.
//            assumed 'BB...BB' not more than FLOAT32_MANT_MAX
//            'xxxxxBB...BB' can be accepted (only BB...BB are effective), but not suggested.
float32_t extstd_float32_compose(bool sign, uint32_t mantissa, int16_t exponent);
// never return the NaN
// @mantissa: is required in form of 1BB...BB, here FLOAT64_MANT_BIT count of 'B'.
//            assumed 'BB...BB' not more than FLOAT64_MANT_MAX
//            'xxxxxBB...BB' can be accepted (only BB...BB are effective), but not suggested.
float64_t extstd_float64_compose(bool sign, uint64_t mantissa, int16_t exponent);

// never return the NaN
// @mantissa: is required in form of 1BB...BB, here FLOAT128_MANT_BIT count of 'B'.
//            assumed 'BB...BB' not more than FLOAT128_MANT_MAX
//            'xxxxxBB...BB' can be accepted (only BB...BB are effective), but not suggested.
float128_t extstd_float128_compose(bool sign, uint128_t mantissa, int32_t exponent);

// never return the NaN
// @mantissa: is required in form of 1BB...BB, here FLOAT256_MANT_BIT count of 'B'.
//            assumed 'BB...BB' not more than FLOAT256_MANT_MAX
//            'xxxxxBB...BB' can be accepted (only BB...BB are effective), but not suggested.
// float256_t extstd_float256_compose(bool sign, uint256_t  mantissa, int32_t exponent);

// val == [sign]mantissa * 2^{exponent}
// if (exponent == INT16_MAX): means INF/-INF or NaN/-NaN
void extstd_float16_decompose(const float16_t val, uint16_t *mantissa, int16_t *exponent, bool *sign);

// val == [sign]mantissa * 2^{exponent}
// if (exponent == INT16_MAX): means INF/-INF or NaN/-NaN
void extstd_float32_decompose(const float32_t val, uint32_t *mantissa, int16_t *exponent, bool *sign);

// val == [sign]mantissa * 2^{exponent}
// if (exponent == INT16_MAX): means INF/-INF or NaN/-NaN
void extstd_float64_decompose(const float64_t val, uint64_t *mantissa, int16_t *exponent, bool *sign);

// val == [sign]mantissa * 2^{exponent}
// if (exponent == INT16_MAX): means INF/-INF or NaN/-NaN
void extstd_float128_decompose(const float128_t val, uint128_t *mantissa, int32_t *exponent, bool *sign);

#endif //EXTSTD_EXTFLOAT_H
