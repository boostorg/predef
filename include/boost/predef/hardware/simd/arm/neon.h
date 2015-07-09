/*
Copyright Charly Chevalier 2015
Copyright Joel Falcou 2015
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_HARDWARE_SIMD_ARM_NEON_H
#define BOOST_PREDEF_HARDWARE_SIMD_ARM_NEON_H

#include <boost/predef/version_number.h>

/*`
 [heading `BOOST_HW_SIMD_ARM_NEON`]

 [@https://en.wikipedia.org/wiki/ARM_architecture#Advanced_SIMD_.28NEON.29 NEON] ARM extension.
 Version number is: 1.0.0.

 [table
     [[__predef_symbol__] [__predef_version__]]

     [[`__ARM_NEON__`] [__predef_detection__]]
     [[`__aarch64__`] [__predef_detection__]]
     [[`_M_ARM`] [__predef_detection__]]
     ]
 */

#define BOOST_HW_SIMD_ARM_NEON BOOST_VERSION_NUMBER_NOT_AVAILABLE

#if defined(__ARM_NEON__) || defined(__aarch64__) || defined (_M_ARM)
#   undef BOOST_HW_SIMD_ARM_NEON
#   define BOOST_HW_SIMD_ARM_NEON BOOST_VERSION_NUMBER(1, 0, 0)
#   define BOOST_HW_SIMD_ARM_NEON_AVAILABLE
#endif

#define BOOST_HW_SIMD_ARM_NEON_NAME "NEON"

#if !defined(BOOST_HW_SIMD_ARM) && defined(BOOST_HW_SIMD_ARM_NEON_AVAILABLE)
#   define BOOST_HW_SIMD_ARM BOOST_HW_SIMD_ARM_NEON
#   define BOOST_HW_SIMD_ARM_NAME BOOST_HW_SIMD_ARM_NEON_NAME
#endif

#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_HW_SIMD_ARM_NEON, BOOST_HW_SIMD_ARM_NEON_NAME)
