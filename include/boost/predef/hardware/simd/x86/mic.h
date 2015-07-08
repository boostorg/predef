/*
Copyright Charly Chevalier 2015
Copyright Joel Falcou 2015
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_HARDWARE_SIMD_X86_MIC_H
#define BOOST_PREDEF_HARDWARE_SIMD_X86_MIC_H

#include <boost/predef/version_number.h>

/*`
 [heading `BOOST_HW_SIMD_X86_MIC`]

 [@https://en.wikipedia.org/wiki/Xeon_Phi MIC] (Xeon Phi) x86 extension.
 Version number is: 4.1.0.

 [table
     [[__predef_symbol__] [__predef_version__]]

     [[`__MIC__`] [__predef_detection__]]
     ]
 */

#define BOOST_HW_SIMD_X86_MIC BOOST_VERSION_NUMBER_NOT_AVAILABLE

#if defined(__MIC__)
#   undef BOOST_HW_SIMD_X86_MIC
#   define BOOST_HW_SIMD_X86_MIC BOOST_VERSION_NUMBER(6, 0, 0)
#   define BOOST_HW_SIMD_X86_MIC_AVAILABLE
#endif

#define BOOST_HW_SIMD_X86_MIC_NAME "MIC (Xeon Phi)"

#if !defined(BOOST_HW_SIMD_X86) && defined(BOOST_HW_SIMD_X86_MIC_AVAILABLE)
#   define BOOST_HW_SIMD_X86 BOOST_HW_SIMD_X86_MIC
#   define BOOST_HW_SIMD_X86_NAME BOOST_HW_SIMD_X86_MIC_NAME
#endif

#if defined(BOOST_HW_SIMD_X86_MIC_AVAILABLE)
#   include <immintrin.h>
#endif

#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_HW_SIMD_X86_MIC, BOOST_HW_SIMD_X86_MIC_NAME)
