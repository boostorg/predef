/*
Copyright Charly Chevalier 2015
Copyright Joel Falcou 2015
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_HARDWARE_SIMD_X86_SSE4_1_H
#define BOOST_PREDEF_HARDWARE_SIMD_X86_SSE4_1_H

#include <boost/predef/version_number.h>

/*`
 [heading `BOOST_HW_SIMD_X86_SSE4_1`]

 [@https://en.wikipedia.org/wiki/SSE4#SSE4.1 SSE4_1] x86 extension.
 Version number is: 4.1.0.

 [table
     [[__predef_symbol__] [__predef_version__]]

     [[`__SSE4_1__`] [__predef_detection__]]
     ]
 */

#define BOOST_HW_SIMD_X86_SSE4_1 BOOST_VERSION_NUMBER_NOT_AVAILABLE

#if defined(__SSE4_1__)
#   undef BOOST_HW_SIMD_X86_SSE4_1
#   define BOOST_HW_SIMD_X86_SSE4_1 BOOST_VERSION_NUMBER(4, 1, 0)
#   define BOOST_HW_SIMD_X86_SSE4_1_AVAILABLE
#endif

#define BOOST_HW_SIMD_X86_SSE4_1_NAME "x86 SIMD SSE4.1"

#if !defined(BOOST_HW_SIMD_X86) && defined(BOOST_HW_SIMD_X86_SSE4_1_AVAILABLE)
#   define BOOST_HW_SIMD_X86 BOOST_HW_SIMD_X86_SSE4_1
#   define BOOST_HW_SIMD_X86_NAME BOOST_HW_SIMD_X86_SSE4_1_NAME
#endif

#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_HW_SIMD_X86_SSE4_1, BOOST_HW_SIMD_X86_SSE4_1_NAME)
