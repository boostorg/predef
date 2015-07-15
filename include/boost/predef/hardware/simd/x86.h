/*
Copyright Charly Chevalier 2015
Copyright Joel Falcou 2015
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_HARDWARE_SIMD_X86_H
#define BOOST_PREDEF_HARDWARE_SIMD_X86_H

#include <boost/predef/version_number.h>

/*`
 [heading `BOOST_HW_SIMD_X86`]

 The SIMD extension for x86 (if detected).
 Version number depends on the detected extension.

 BOOST_HW_SIMD_X86 is defined by the first detected extension. They are
 checked from the newest to the oldest. (AVX2 -> AVX -> ... -> SSE2 -> SSE)

 [table
     [[__predef_symbol__] [__predef_version__]]

     [[`BOOST_HW_SIMD_X86`] [__predef_detection__]]
     [[`BOOST_HW_SIMD_X86`] [V.R.P]]
     ]
 */

// From the newest to the oldest
#include <boost/predef/hardware/simd/x86/mic.h>   // XEON Phi specific
#include <boost/predef/hardware/simd/x86/avx2.h>
#include <boost/predef/hardware/simd/x86/fma3.h>
#include <boost/predef/hardware/simd/x86/xop.h>   // AMD specific
#include <boost/predef/hardware/simd/x86/fma4.h>  // AMD specific
#include <boost/predef/hardware/simd/x86/avx.h>
#include <boost/predef/hardware/simd/x86/sse4_2.h>
#include <boost/predef/hardware/simd/x86/sse4_1.h>
#include <boost/predef/hardware/simd/x86/sse4a.h> // AMD specific
#include <boost/predef/hardware/simd/x86/ssse3.h>
#include <boost/predef/hardware/simd/x86/sse3.h>
#include <boost/predef/hardware/simd/x86/sse2.h>
#include <boost/predef/hardware/simd/x86/sse.h>
#include <boost/predef/hardware/simd/x86/mmx.h>

#if defined(BOOST_HW_SIMD_X86)
#   define BOOST_HW_SIMD_X86_AVAILABLE
#else
#   define BOOST_HW_SIMD_X86 BOOST_VERSION_NUMBER_NOT_AVAILABLE
#   define BOOST_HW_SIMD_X86_NAME "(not found)"
#endif

#endif
