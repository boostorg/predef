/*
Copyright Charly Chevalier 2015
Copyright Joel Falcou 2015
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_HARDWARE_SIMD_X86_XOP_H
#define BOOST_PREDEF_HARDWARE_SIMD_X86_XOP_H

#include <boost/predef/version_number.h>

/*`
 [heading `BOOST_HW_SIMD_X86_XOP`]

 [@https://en.wikipedia.org/wiki/XOP_instruction_set XOP] x86 extension.
 Version number is the default BOOST_VERSION_NUMBER_AVAILABLE.

 This extension is only available on particular CPUs. It does imply
 FMA4, please see its documentation to see what else is implied.

 [table
     [[__predef_symbol__] [__predef_version__]]

     [[`__XOP__`] [__predef_detection__]]
     ]
 */

#define BOOST_HW_SIMD_X86_XOP BOOST_VERSION_NUMBER_NOT_AVAILABLE

#if defined(__XOP__)
#   undef BOOST_HW_SIMD_X86_XOP
/* We do not give a valid version for this one, since it not always
 * available if newer extension than AVX (FMA4 implies AVX) are enabled. */
#   define BOOST_HW_SIMD_X86_XOP BOOST_VERSION_NUMBER_AVAILABLE
#   define BOOST_HW_SIMD_X86_XOP_AVAILABLE
#endif

#define BOOST_HW_SIMD_X86_XOP_NAME "XOP"

#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_HW_SIMD_X86_XOP, BOOST_HW_SIMD_X86_XOP_NAME)
