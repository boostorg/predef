/*
Copyright Charly Chevalier 2015
Copyright Joel Falcou 2015
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_HARDWARE_SIMD_PPC_QPX_H
#define BOOST_PREDEF_HARDWARE_SIMD_PPC_QPX_H

#include <boost/predef/version_number.h>

/*`
 [heading `BOOST_HW_SIMD_PPC_QPX`]

 QPX powerpc extension.
 Version number is: 2.0.0.

 [table
     [[__predef_symbol__] [__predef_version__]]

     [[`__VECTOR4DOUBLE__`] [__predef_detection__]]
     ]
 */

#define BOOST_HW_SIMD_PPC_QPX BOOST_VERSION_NUMBER_NOT_AVAILABLE

#if defined(__VECTOR4DOUBLE__)
#   undef BOOST_HW_SIMD_PPC_QPX
#   define BOOST_HW_SIMD_PPC_QPX BOOST_VERSION_NUMBER(2, 0, 0)
#   define BOOST_HW_SIMD_PPC_QPX_AVAILABLE
#endif

#define BOOST_HW_SIMD_PPC_QPX_NAME "QPX"

#if !defined(BOOST_HW_SIMD_PPC) && defined(BOOST_HW_SIMD_PPC_QPX_AVAILABLE)
#   define BOOST_HW_SIMD_PPC BOOST_HW_SIMD_PPC_QPX
#   define BOOST_HW_SIMD_PPC_NAME BOOST_HW_SIMD_PPC_QPX_NAME
#endif

#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_HW_SIMD_PPC_QPX, BOOST_HW_SIMD_PPC_QPX_NAME)
