/*
Copyright Charly Chevalier 2015
Copyright Joel Falcou 2015
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_HARDWARE_SIMD_X86_FMA3_H
#define BOOST_PREDEF_HARDWARE_SIMD_X86_FMA3_H

#include <boost/predef/version_number.h>
#include <boost/predef/compiler.h>

/*`
 [heading `BOOST_HW_SIMD_X86_FMA3`]

 [@https://en.wikipedia.org/wiki/FMA_instruction_set FMA3] x86 extension.
 Version number is the default BOOST_VERSION_NUMBER_AVAILABLE.

 This extension is only available on particular CPUs. It does imply
 AVX, but it is not implied by extensions newer than SSE3. For example,
 AVX2 does not imply it.

 [table
     [[__predef_symbol__] [__predef_version__]]

     [[`__FMA__`] [__predef_detection__]]
     ]
 */

#define BOOST_HW_SIMD_X86_FMA3 BOOST_VERSION_NUMBER_NOT_AVAILABLE

#if defined(__FMA__)
#   undef BOOST_HW_SIMD_X86_FMA3
/* We do not give a valid version for this one, since it not always
 * available if newer extension than AVX are enabled. */
#   if defined(BOOST_COMP_MSVC_AVAILABLE) && BOOST_COMP_MSVC < BOOST_VERSION_NUMBER(17, 0, 0)\
       || !defined(BOOST_COMP_MSVC_AVAILABLE)
#      define BOOST_HW_SIMD_X86_FMA3 BOOST_VERSION_NUMBER_AVAILABLE
#      define BOOST_HW_SIMD_X86_FMA3_AVAILABLE
#   endif
#endif

#define BOOST_HW_SIMD_X86_FMA3_NAME "FMA3"

#if defined(BOOST_HW_SIMD_X86_FMA3_AVAILABLE)
#   include <immintrin.h>
#endif

#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_HW_SIMD_X86_FMA3, BOOST_HW_SIMD_X86_FMA3_NAME)
