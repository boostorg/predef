/*
Copyright Charly Chevalier 2015
Copyright Joel Falcou 2015
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_HARDWARE_SIMD_X86_SSE2_H
#define BOOST_PREDEF_HARDWARE_SIMD_X86_SSE2_H

#include <boost/predef/version_number.h>

/*`
 [heading `BOOST_HW_SIMD_X86_SSE2`]

 [@https://en.wikipedia.org/wiki/SSE2 SSE2] x86 extension.
 Version number is: 2.0.0.

 [table
     [[__predef_symbol__] [__predef_version__]]

     [[`__SSE2__`] [__predef_detection__]]
     [[`_M_X64`] [__predef_detection__]]
     [[`_M_IX86_FP >= 2`] [__predef_detection__]]
     ]
 */

#define BOOST_HW_SIMD_X86_SSE2 BOOST_VERSION_NUMBER(2, 0, 0)

#if defined(__SSE2__) || defined(_M_X64) || _M_IX86_FP >= 2
#   define BOOST_HW_SIMD_X86_SSE2_AVAILABLE
#endif

#define BOOST_HW_SIMD_X86_SSE2_NAME "x86 SIMD SSE2"

#if !defined(BOOST_HW_SIMD_X86) && defined(BOOST_HW_SIMD_X86_SSE2_AVAILABLE)
#   define BOOST_HW_SIMD_X86 BOOST_HW_SIMD_X86_SSE2
#   define BOOST_HW_SIMD_X86_NAME BOOST_HW_SIMD_X86_SSE2_NAME
#endif

#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_HW_SIMD_X86_SSE2, BOOST_HW_SIMD_X86_SSE2_NAME)
