/*
Copyright Charly Chevalier 2015
Copyright Joel Falcou 2015
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_HARDWARE_SIMD_X86_AVX2_H
#define BOOST_PREDEF_HARDWARE_SIMD_X86_AVX2_H

#include <boost/predef/version_number.h>
#include <boost/predef/compiler.h>

/*`
 [heading `BOOST_HW_SIMD_X86_AVX2`]

 [@https://en.wikipedia.org/wiki/Advanced_Vector_Extensions#Advanced_Vector_Extensions_2 AVX2] x86 extension.
 Version number is: 5.2.0. Not available for version of MSVC below 17.00.

 [table
     [[__predef_symbol__] [__predef_version__]]

     [[`__AVX2__`] [__predef_detection__]]
     ]
 */

#define BOOST_HW_SIMD_X86_AVX2 BOOST_VERSION_NUMBER_NOT_AVAILABLE

#if defined(__AVX2__)
#   undef BOOST_HW_SIMD_X86_AVX2
#   if defined(BOOST_COMP_MSVC_AVAILABLE) && BOOST_COMP_MSVC > BOOST_VERSION_NUMBER(17, 0, 0)\
       || !defined(BOOST_COMP_MSVC_AVAILABLE)
#      define BOOST_HW_SIMD_X86_AVX2 BOOST_VERSION_NUMBER(5, 2, 0)
#      define BOOST_HW_SIMD_X86_AVX2_AVAILABLE
#   endif
#endif

#define BOOST_HW_SIMD_X86_AVX2_NAME "AVX2"

#if !defined(BOOST_HW_SIMD_X86) && defined(BOOST_HW_SIMD_X86_AVX2_AVAILABLE)
#   define BOOST_HW_SIMD_X86 BOOST_HW_SIMD_X86_AVX2
#   define BOOST_HW_SIMD_X86_NAME BOOST_HW_SIMD_X86_AVX2_NAME
#endif

#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_HW_SIMD_X86_AVX2, BOOST_HW_SIMD_X86_AVX2_NAME)
