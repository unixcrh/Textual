// The MIT License
// 
// Copyright (c) 2013 Gwendal Roué
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.






/*
 * Set up standard GRMustache versions
 */
#define GRMUSTACHE_VERSION_6_0  6000
#define GRMUSTACHE_VERSION_6_1  6010
#define GRMUSTACHE_VERSION_6_2  6020
#define GRMUSTACHE_VERSION_6_3  6030
#define GRMUSTACHE_VERSION_6_4  6040






/* 
 * If max GRMustacheVersion not specified, assume 6.4
 */
#ifndef GRMUSTACHE_VERSION_MAX_ALLOWED
#define GRMUSTACHE_VERSION_MAX_ALLOWED    GRMUSTACHE_VERSION_6_4
#endif

/*
 * if min GRMustacheVersion not specified, assume max
 */
#ifndef GRMUSTACHE_VERSION_MIN_REQUIRED
#define GRMUSTACHE_VERSION_MIN_REQUIRED    GRMUSTACHE_VERSION_MAX_ALLOWED
#endif

/*
 * Error on bad values
 */
#if GRMUSTACHE_VERSION_MAX_ALLOWED < GRMUSTACHE_VERSION_MIN_REQUIRED
#error GRMUSTACHE_VERSION_MAX_ALLOWED must be >= GRMUSTACHE_VERSION_MIN_REQUIRED
#endif
#if GRMUSTACHE_VERSION_MIN_REQUIRED < GRMUSTACHE_VERSION_6_0
#error GRMUSTACHE_VERSION_MIN_REQUIRED must be >= GRMUSTACHE_VERSION_6_0
#endif






/*
 * AVAILABLE_GRMUSTACHE_VERSION_6_0_AND_LATER
 * 
 * Used on declarations introduced in GRMustache 6.0
 */
#define AVAILABLE_GRMUSTACHE_VERSION_6_0_AND_LATER

/*
 * AVAILABLE_GRMUSTACHE_VERSION_6_0_AND_LATER_BUT_DEPRECATED
 * 
 * Used on declarations introduced in GRMustache 6.0, 
 * and deprecated in GRMustache 6.0
 */
#define AVAILABLE_GRMUSTACHE_VERSION_6_0_AND_LATER_BUT_DEPRECATED    DEPRECATED_ATTRIBUTE

/*
 * DEPRECATED_IN_GRMUSTACHE_VERSION_6_0_AND_LATER
 * 
 * Used on types deprecated in GRMustache 6.0
 */
#define DEPRECATED_IN_GRMUSTACHE_VERSION_6_0_AND_LATER    DEPRECATED_ATTRIBUTE






/*
 * AVAILABLE_GRMUSTACHE_VERSION_6_1_AND_LATER
 * 
 * Used on declarations introduced in GRMustache 6.1
 */
#if GRMUSTACHE_VERSION_MAX_ALLOWED < GRMUSTACHE_VERSION_6_1
#define AVAILABLE_GRMUSTACHE_VERSION_6_1_AND_LATER    UNAVAILABLE_ATTRIBUTE
#elif GRMUSTACHE_VERSION_MIN_REQUIRED < GRMUSTACHE_VERSION_6_1
#define AVAILABLE_GRMUSTACHE_VERSION_6_1_AND_LATER    WEAK_IMPORT_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_6_1_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_6_1_AND_LATER_BUT_DEPRECATED
 * 
 * Used on declarations introduced in GRMustache 6.1,
 * and deprecated in GRMustache 6.1
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_6_1
#define AVAILABLE_GRMUSTACHE_VERSION_6_1_AND_LATER_BUT_DEPRECATED    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_6_1_AND_LATER_BUT_DEPRECATED    AVAILABLE_GRMUSTACHE_VERSION_6_1_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_6_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_6_1
 * 
 * Used on declarations introduced in GRMustache 6.0,
 * but later deprecated in GRMustache 6.1
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_6_1
#define AVAILABLE_GRMUSTACHE_VERSION_6_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_6_1    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_6_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_6_1    AVAILABLE_GRMUSTACHE_VERSION_6_0_AND_LATER
#endif

/*
 * DEPRECATED_IN_GRMUSTACHE_VERSION_6_1_AND_LATER
 * 
 * Used on types deprecated in GRMustache 6.1
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_6_1
#define DEPRECATED_IN_GRMUSTACHE_VERSION_6_1_AND_LATER    DEPRECATED_ATTRIBUTE
#else
#define DEPRECATED_IN_GRMUSTACHE_VERSION_6_1_AND_LATER
#endif






/*
 * AVAILABLE_GRMUSTACHE_VERSION_6_2_AND_LATER
 * 
 * Used on declarations introduced in GRMustache 6.2
 */
#if GRMUSTACHE_VERSION_MAX_ALLOWED < GRMUSTACHE_VERSION_6_2
#define AVAILABLE_GRMUSTACHE_VERSION_6_2_AND_LATER    UNAVAILABLE_ATTRIBUTE
#elif GRMUSTACHE_VERSION_MIN_REQUIRED < GRMUSTACHE_VERSION_6_2
#define AVAILABLE_GRMUSTACHE_VERSION_6_2_AND_LATER    WEAK_IMPORT_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_6_2_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_6_2_AND_LATER_BUT_DEPRECATED
 * 
 * Used on declarations introduced in GRMustache 6.2,
 * and deprecated in GRMustache 6.2
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_6_2
#define AVAILABLE_GRMUSTACHE_VERSION_6_2_AND_LATER_BUT_DEPRECATED    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_6_2_AND_LATER_BUT_DEPRECATED    AVAILABLE_GRMUSTACHE_VERSION_6_2_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_6_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_6_2
 * 
 * Used on declarations introduced in GRMustache 6.0,
 * but later deprecated in GRMustache 6.2
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_6_2
#define AVAILABLE_GRMUSTACHE_VERSION_6_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_6_2    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_6_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_6_2    AVAILABLE_GRMUSTACHE_VERSION_6_0_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_6_1_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_6_2
 * 
 * Used on declarations introduced in GRMustache 6.1,
 * but later deprecated in GRMustache 6.2
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_6_2
#define AVAILABLE_GRMUSTACHE_VERSION_6_1_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_6_2    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_6_1_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_6_2    AVAILABLE_GRMUSTACHE_VERSION_6_1_AND_LATER
#endif

/*
 * DEPRECATED_IN_GRMUSTACHE_VERSION_6_2_AND_LATER
 * 
 * Used on types deprecated in GRMustache 6.2
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_6_2
#define DEPRECATED_IN_GRMUSTACHE_VERSION_6_2_AND_LATER    DEPRECATED_ATTRIBUTE
#else
#define DEPRECATED_IN_GRMUSTACHE_VERSION_6_2_AND_LATER
#endif






/*
 * AVAILABLE_GRMUSTACHE_VERSION_6_3_AND_LATER
 * 
 * Used on declarations introduced in GRMustache 6.3
 */
#if GRMUSTACHE_VERSION_MAX_ALLOWED < GRMUSTACHE_VERSION_6_3
#define AVAILABLE_GRMUSTACHE_VERSION_6_3_AND_LATER    UNAVAILABLE_ATTRIBUTE
#elif GRMUSTACHE_VERSION_MIN_REQUIRED < GRMUSTACHE_VERSION_6_3
#define AVAILABLE_GRMUSTACHE_VERSION_6_3_AND_LATER    WEAK_IMPORT_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_6_3_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_6_3_AND_LATER_BUT_DEPRECATED
 * 
 * Used on declarations introduced in GRMustache 6.3,
 * and deprecated in GRMustache 6.3
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_6_3
#define AVAILABLE_GRMUSTACHE_VERSION_6_3_AND_LATER_BUT_DEPRECATED    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_6_3_AND_LATER_BUT_DEPRECATED    AVAILABLE_GRMUSTACHE_VERSION_6_3_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_6_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_6_3
 * 
 * Used on declarations introduced in GRMustache 6.0,
 * but later deprecated in GRMustache 6.3
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_6_3
#define AVAILABLE_GRMUSTACHE_VERSION_6_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_6_3    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_6_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_6_3    AVAILABLE_GRMUSTACHE_VERSION_6_0_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_6_1_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_6_3
 * 
 * Used on declarations introduced in GRMustache 6.1,
 * but later deprecated in GRMustache 6.3
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_6_3
#define AVAILABLE_GRMUSTACHE_VERSION_6_1_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_6_3    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_6_1_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_6_3    AVAILABLE_GRMUSTACHE_VERSION_6_1_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_6_2_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_6_3
 * 
 * Used on declarations introduced in GRMustache 6.2,
 * but later deprecated in GRMustache 6.3
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_6_3
#define AVAILABLE_GRMUSTACHE_VERSION_6_2_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_6_3    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_6_2_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_6_3    AVAILABLE_GRMUSTACHE_VERSION_6_2_AND_LATER
#endif

/*
 * DEPRECATED_IN_GRMUSTACHE_VERSION_6_3_AND_LATER
 * 
 * Used on types deprecated in GRMustache 6.3
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_6_3
#define DEPRECATED_IN_GRMUSTACHE_VERSION_6_3_AND_LATER    DEPRECATED_ATTRIBUTE
#else
#define DEPRECATED_IN_GRMUSTACHE_VERSION_6_3_AND_LATER
#endif






/*
 * AVAILABLE_GRMUSTACHE_VERSION_6_4_AND_LATER
 * 
 * Used on declarations introduced in GRMustache 6.4
 */
#if GRMUSTACHE_VERSION_MAX_ALLOWED < GRMUSTACHE_VERSION_6_4
#define AVAILABLE_GRMUSTACHE_VERSION_6_4_AND_LATER    UNAVAILABLE_ATTRIBUTE
#elif GRMUSTACHE_VERSION_MIN_REQUIRED < GRMUSTACHE_VERSION_6_4
#define AVAILABLE_GRMUSTACHE_VERSION_6_4_AND_LATER    WEAK_IMPORT_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_6_4_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_6_4_AND_LATER_BUT_DEPRECATED
 * 
 * Used on declarations introduced in GRMustache 6.4,
 * and deprecated in GRMustache 6.4
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_6_4
#define AVAILABLE_GRMUSTACHE_VERSION_6_4_AND_LATER_BUT_DEPRECATED    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_6_4_AND_LATER_BUT_DEPRECATED    AVAILABLE_GRMUSTACHE_VERSION_6_4_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_6_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_6_4
 * 
 * Used on declarations introduced in GRMustache 6.0,
 * but later deprecated in GRMustache 6.4
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_6_4
#define AVAILABLE_GRMUSTACHE_VERSION_6_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_6_4    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_6_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_6_4    AVAILABLE_GRMUSTACHE_VERSION_6_0_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_6_1_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_6_4
 * 
 * Used on declarations introduced in GRMustache 6.1,
 * but later deprecated in GRMustache 6.4
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_6_4
#define AVAILABLE_GRMUSTACHE_VERSION_6_1_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_6_4    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_6_1_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_6_4    AVAILABLE_GRMUSTACHE_VERSION_6_1_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_6_2_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_6_4
 * 
 * Used on declarations introduced in GRMustache 6.2,
 * but later deprecated in GRMustache 6.4
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_6_4
#define AVAILABLE_GRMUSTACHE_VERSION_6_2_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_6_4    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_6_2_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_6_4    AVAILABLE_GRMUSTACHE_VERSION_6_2_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_6_3_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_6_4
 * 
 * Used on declarations introduced in GRMustache 6.3,
 * but later deprecated in GRMustache 6.4
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_6_4
#define AVAILABLE_GRMUSTACHE_VERSION_6_3_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_6_4    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_6_3_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_6_4    AVAILABLE_GRMUSTACHE_VERSION_6_3_AND_LATER
#endif

/*
 * DEPRECATED_IN_GRMUSTACHE_VERSION_6_4_AND_LATER
 * 
 * Used on types deprecated in GRMustache 6.4
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_6_4
#define DEPRECATED_IN_GRMUSTACHE_VERSION_6_4_AND_LATER    DEPRECATED_ATTRIBUTE
#else
#define DEPRECATED_IN_GRMUSTACHE_VERSION_6_4_AND_LATER
#endif






