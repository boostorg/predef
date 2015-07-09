/*
Copyright Charly Chevalier 2015
Copyright Joel Falcou 2015
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_HARDWARE_SIMD_PPC_VSX_H
#define BOOST_PREDEF_HARDWARE_SIMD_PPC_VSX_H

#include <boost/predef/version_number.h>

/*`
 [heading `BOOST_HW_SIMD_PPC_VSX`]

 [@https://en.wikipedia.org/wiki/AltiVec#VSX VSX] powerpc extension.
 Version number is: 1.1.0.

 [table
     [[__predef_symbol__] [__predef_version__]]

     [[`__VSX__`] [__predef_detection__]]
     ]
 */

#define BOOST_HW_SIMD_PPC_VSX BOOST_VERSION_NUMBER_NOT_AVAILABLE

#if defined(__VSX__)
#   undef BOOST_HW_SIMD_PPC_VSX
#   define BOOST_HW_SIMD_PPC_VSX BOOST_VERSION_NUMBER(1, 1, 0)
#   define BOOST_HW_SIMD_PPC_VSX_AVAILABLE
#endif

#define BOOST_HW_SIMD_PPC_VSX_NAME "VSX"

#if !defined(BOOST_HW_SIMD_PPC) && defined(BOOST_HW_SIMD_PPC_VSX_AVAILABLE)
#   define BOOST_HW_SIMD_PPC BOOST_HW_SIMD_PPC_VSX
#   define BOOST_HW_SIMD_PPC_NAME BOOST_HW_SIMD_PPC_VSX_NAME
#endif

#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_HW_SIMD_PPC_VSX, BOOST_HW_SIMD_PPC_VSX_NAME)
