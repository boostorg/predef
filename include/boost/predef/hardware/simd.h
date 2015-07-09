/*
Copyright Charly Chevalier 2015
Copyright Joel Falcou 2015
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_HARDWARE_SIMD_H
#define BOOST_PREDEF_HARDWARE_SIMD_H

/*`
 [heading `BOOST_HW_SIMD`]

 The SIMD extension detected for a specific architectures.
 Version number depends on the detected extension.

 [table
     [[__predef_symbol__] [__predef_version__]]

     [[`BOOST_HW_SIMD_ARM_AVAILABLE`] [__predef_detection__]]
     [[`BOOST_HW_SIMD_PPC_AVAILABLE`] [__predef_detection__]]
     [[`BOOST_HW_SIMD_X86_AVAILABLE`] [__predef_detection__]]
     ]
 */

#include <boost/predef/hardware/simd/x86.h>
#include <boost/predef/hardware/simd/arm.h>
#include <boost/predef/hardware/simd/ppc.h>

// We check if SIMD extension of multiples architectures have been detected,
// if yes, then this is an error!
#if \
    BOOST_HW_SIMD_ARM && BOOST_HW_SIMD_PPC ||\
    BOOST_HW_SIMD_ARM && BOOST_HW_SIMD_X86 ||\
    BOOST_HW_SIMD_PPC && BOOST_HW_SIMD_X86
#   error "Multiple SIMD architectures detected, this cannot happen!"
#endif

#if defined(BOOST_HW_SIMD_X86_AVAILABLE)
#   define BOOST_HW_SIMD BOOST_HW_SIMD_X86
#   define BOOST_HW_SIMD_NAME BOOST_HW_SIMD_X86_NAME
#endif

#if defined(BOOST_HW_SIMD_ARM_AVAILABLE)
#   define BOOST_HW_SIMD BOOST_HW_SIMD_ARM
#   define BOOST_HW_SIMD_NAME BOOST_HW_SIMD_ARM_NAME
#endif

#if defined(BOOST_HW_SIMD_PPC_AVAILABLE)
#   define BOOST_HW_SIMD BOOST_HW_SIMD_PPC
#   define BOOST_HW_SIMD_NAME BOOST_HW_SIMD_PPC_NAME
#endif

#if defined(BOOST_HW_SIMD)
#   define BOOST_HW_SIMD_AVAILABLE
#endif

#endif
