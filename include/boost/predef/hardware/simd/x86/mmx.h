/*
Copyright Charly Chevalier 2015
Copyright Joel Falcou 2015
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_HARDWARE_SIMD_X86_MMX_H
#define BOOST_PREDEF_HARDWARE_SIMD_X86_MMX_H

#include <boost/predef/version_number.h>

/*`
 [heading `BOOST_HW_SIMD_X86_MMX`]

 [@https://en.wikipedia.org/wiki/MMX_(instruction_set) MMX] x86 extension.
 Version number is: 0.99.0.

 [table
     [[__predef_symbol__] [__predef_version__]]

     [[`__MMX__`] [__predef_detection__]]
     ]
 */

#define BOOST_HW_SIMD_X86_MMX BOOST_VERSION_NUMBER_NOT_AVAILABLE

#if defined(__MMX__)
#   undef BOOST_HW_SIMD_X86_MMX
#   define BOOST_HW_SIMD_X86_MMX BOOST_VERSION_NUMBER(0, 99, 0)
#   define BOOST_HW_SIMD_X86_MMX_AVAILABLE
#endif

#define BOOST_HW_SIMD_X86_MMX_NAME "MMX"

#if !defined(BOOST_HW_SIMD_X86) && defined(BOOST_HW_SIMD_X86_MMX_AVAILABLE)
#   define BOOST_HW_SIMD_X86 BOOST_HW_SIMD_X86_MMX
#   define BOOST_HW_SIMD_X86_NAME BOOST_HW_SIMD_X86_MMX_NAME
#endif

#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_HW_SIMD_X86_MMX, BOOST_HW_SIMD_X86_MMX_NAME)
