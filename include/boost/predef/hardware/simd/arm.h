/*
Copyright Charly Chevalier 2015
Copyright Joel Falcou 2015
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_HARDWARE_SIMD_ARM_H
#define BOOST_PREDEF_HARDWARE_SIMD_ARM_H

/*`
 [heading `BOOST_HW_SIMD_ARM`]

 The SIMD extension for ARM (if detected).
 Version number depends on the detected extension.

 BOOST_HW_SIMD_ARM is defined by the first detected extension.

 [table
     [[__predef_symbol__] [__predef_version__]]

     [[`BOOST_HW_SIMD_ARM`] [__predef_detection__]]
     [[`BOOST_HW_SIMD_ARM`] [V.R.P]]
     ]
 */

#include <boost/predef/hardware/simd/arm/neon.h>

#if defined(BOOST_HW_SIMD_ARM)
#   define BOOST_HW_SIMD_ARM_AVAILABLE
#endif

#endif
