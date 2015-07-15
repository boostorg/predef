/*
Copyright Charly Chevalier 2015
Copyright Joel Falcou 2015
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

// From the newest to the oldest
#include <boost/predef/hardware/simd/ppc/qpx.h>
#include <boost/predef/hardware/simd/ppc/vsx.h>
#include <boost/predef/hardware/simd/ppc/vmx.h>

#ifndef BOOST_PREDEF_HARDWARE_SIMD_PPC_H
#define BOOST_PREDEF_HARDWARE_SIMD_PPC_H

#include <boost/predef/version_number.h>

/*`
 [heading `BOOST_HW_SIMD_PPC`]

 The SIMD extension for x86 (if detected).
 Version number depends on the detected extension.

 BOOST_HW_SIMD_PPC is defined by the first detected extension. They are
 checked from the newest to the oldest. (QPX -> VSX -> VMX)

 [table
     [[__predef_symbol__] [__predef_version__]]

     [[`BOOST_HW_SIMD_PPC`] [__predef_detection__]]
     [[`BOOST_HW_SIMD_PPC`] [V.R.P]]
     ]
 */

#if defined(BOOST_HW_SIMD_PPC)
#   define BOOST_HW_SIMD_PPC_AVAILABLE
#else
#   define BOOST_HW_SIMD_PPC BOOST_VERSION_NUMBER_NOT_AVAILABLE
#   define BOOST_HW_SIMD_PPC_NAME "PowerPC SIMD"
#endif

#endif
