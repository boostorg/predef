/*
Copyright Charly Chevalier 2015
Copyright Joel Falcou 2015
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_HARDWARE_SIMD_PPC_VMX_H
#define BOOST_PREDEF_HARDWARE_SIMD_PPC_VMX_H

#include <boost/predef/version_number.h>

/*`
 [heading `BOOST_HW_SIMD_PPC_VMX`]

 [@https://en.wikipedia.org/wiki/AltiVec#VMX128 VMX] powerpc extension.
 Version number is: 1.0.0.

 [table
     [[__predef_symbol__] [__predef_version__]]

     [[`__ALTIVEC__`] [__predef_detection__]]
     [[`__VEC__`] [__predef_detection__]]
     ]
 */

#define BOOST_HW_SIMD_PPC_VMX BOOST_VERSION_NUMBER(1, 0, 0)

#if defined(__ALTIVEC__) || defined(__VEC__)
#   define BOOST_HW_SIMD_PPC_VMX_AVAILABLE
#endif

#define BOOST_HW_SIMD_PPC_VMX_NAME "VMX"

#if !defined(BOOST_HW_SIMD_PPC) && defined(BOOST_HW_SIMD_PPC_VMX_AVAILABLE)
#   define BOOST_HW_SIMD_PPC BOOST_HW_SIMD_PPC_VMX
#   define BOOST_HW_SIMD_PPC_NAME BOOST_HW_SIMD_PPC_VMX_NAME
#endif

#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_HW_SIMD_PPC_VMX, BOOST_HW_SIMD_PPC_VMX_NAME)
