/*
Copyright Charly Chevalier 2015
Copyright Joel Falcou 2015
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_HARDWARE_SIMD_X86_SSE_H
#define BOOST_PREDEF_HARDWARE_SIMD_X86_SSE_H

#include <boost/predef/version_number.h>

/*`
 [heading `BOOST_HW_SIMD_X86_SSE`]

 [@https://en.wikipedia.org/wiki/Streaming_SIMD_Extensions SSE] x86 extension.
 Version number is: 1.0.0.

 [table
     [[__predef_symbol__] [__predef_version__]]

     [[`__SSE__`] [__predef_detection__]]
     [[`_M_X64`] [__predef_detection__]]
     [[`_M_IX86_FP >= 1`] [__predef_detection__]]
     ]
 */

#define BOOST_HW_SIMD_X86_SSE BOOST_VERSION_NUMBER_NOT_AVAILABLE

#if defined(__SSE__) || defined(_M_X64) || _M_IX86_FP >= 1
#   undef BOOST_HW_SIMD_X86_SSE
#   define BOOST_HW_SIMD_X86_SSE BOOST_VERSION_NUMBER(1, 0, 0)
#   define BOOST_HW_SIMD_X86_SSE_AVAILABLE
#endif

#define BOOST_HW_SIMD_X86_SSE_NAME "SSE(1)"

#if !defined(BOOST_HW_SIMD_X86) && defined(BOOST_HW_SIMD_X86_SSE_AVAILABLE)
#   define BOOST_HW_SIMD_X86 BOOST_HW_SIMD_X86_SSE
#   define BOOST_HW_SIMD_X86_NAME BOOST_HW_SIMD_X86_SSE_NAME
#endif

#if defined(BOOST_HW_SIMD_X86_SSE_AVAILABLE)
#   include <xmmintrin.h>
#endif

#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_HW_SIMD_X86_SSE, BOOST_HW_SIMD_X86_SSE_NAME)
