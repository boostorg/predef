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
 Version number is: 5.2.0. Not available for version of MSVC below 17.00.

 [table
     [[__predef_symbol__] [__predef_version__]]

     [[`__FMA__`] [__predef_detection__]]
     ]
 */

#define BOOST_HW_SIMD_X86_FMA3 BOOST_VERSION_NUMBER_NOT_AVAILABLE

#if defined(__FMA__)
#   if defined(BOOST_COMP_MSVC_AVAILABLE) && BOOST_COMP_MSVC < BOOST_VERSION_NUMBER(17, 0, 0)\
       || !defined(BOOST_COMP_MSVC_AVAILABLE)
#      undef BOOST_HW_SIMD_X86_FMA3
#      define BOOST_HW_SIMD_X86_FMA3 BOOST_VERSION_NUMBER(5, 2, 0)
#      define BOOST_HW_SIMD_X86_FMA3_AVAILABLE
#   endif
#endif

#define BOOST_HW_SIMD_X86_FMA3_NAME "x86 SIMD FMA3"

#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_HW_SIMD_X86_FMA3, BOOST_HW_SIMD_X86_FMA3_NAME)
