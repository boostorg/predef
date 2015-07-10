/*
Copyright Charly Chevalier 2015
Copyright Joel Falcou 2015
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_HARDWARE_SIMD_X86_SSE4A_H
#define BOOST_PREDEF_HARDWARE_SIMD_X86_SSE4A_H

#include <boost/predef/version_number.h>

/*`
 [heading `BOOST_HW_SIMD_X86_SSE4A`]

 [@https://en.wikipedia.org/wiki/SSE4##SSE4A SSE4A] x86 extension.
 Version number is the default BOOST_VERSION_NUMBER_AVAILABLE.

 This extension is only available on particular CPUs. It does imply
 SSE3, but it is not implied by extensions newer than SSE3. For example,
 SSE4.1 does not imply it.

 [table
     [[__predef_symbol__] [__predef_version__]]

     [[`__SSE4A__`] [__predef_detection__]]
     ]
 */

#define BOOST_HW_SIMD_X86_SSE4A BOOST_VERSION_NUMBER_NOT_AVAILABLE

#if defined(__SSE4A__)
#   undef BOOST_HW_SIMD_X86_SSE4A
/* We do not give a valid version for this one, since it not always
 * available if newer extension than SSE3 are enabled. */
#   define BOOST_HW_SIMD_X86_SSE4A BOOST_VERSION_NUMBER_AVAILABLE
#   define BOOST_HW_SIMD_X86_SSE4A_AVAILABLE
#endif

#define BOOST_HW_SIMD_X86_SSE4A_NAME "SSE4a"

#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_HW_SIMD_X86_SSE4A, BOOST_HW_SIMD_X86_SSE4A_NAME)
