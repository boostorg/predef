/*
Copyright Charly Chevalier 2015
Copyright Joel Falcou 2015
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_HARDWARE_SIMD_X86_AVX_H
#define BOOST_PREDEF_HARDWARE_SIMD_X86_AVX_H

#include <boost/predef/version_number.h>
#include <boost/predef/compiler.h>

/*`
 [heading `BOOST_HW_SIMD_X86_AVX`]

 [@https://en.wikipedia.org/wiki/Advanced_Vector_Extensions AVX] x86 extension.
 Version number is: 5.0.0. Not available for version of MSVC below 16.00.40219.

 [table
     [[__predef_symbol__] [__predef_version__]]

     [[`__AVX__`] [__predef_detection__]]
     ]
 */

#define BOOST_HW_SIMD_X86_AVX BOOST_VERSION_NUMBER(5, 0, 0)

#if defined(__AVX__)
#   if defined(BOOST_COMP_MSVC_AVAILABLE) && BOOST_COMP_MSVC > BOOST_VERSION_NUMBER(16, 0, 40219)\
       || !defined(BOOST_COMP_MSVC_AVAILABLE)
#      define BOOST_HW_SIMD_X86_AVX_AVAILABLE
#   endif
#endif

#define BOOST_HW_SIMD_X86_AVX_NAME "x86 SIMD AVX"

#if !defined(BOOST_HW_SIMD_X86) && defined(BOOST_HW_SIMD_X86_AVX_AVAILABLE)
#   define BOOST_HW_SIMD_X86 BOOST_HW_SIMD_X86_AVX
#   define BOOST_HW_SIMD_X86_NAME BOOST_HW_SIMD_X86_AVX_NAME
#endif

#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_HW_SIMD_X86_AVX, BOOST_HW_SIMD_X86_AVX_NAME)
