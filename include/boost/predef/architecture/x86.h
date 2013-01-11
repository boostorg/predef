/*
Copyright Redshift Software, Inc. 2008-2013
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_ARCHITECTURE_X86_H
#define BOOST_PREDEF_ARCHITECTURE_X86_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

#define BOOST_ARCH_X86 BOOST_VERSION_NUMBER(0,0,0)

/*`
[heading `BOOST_ARCH_X86`]

[@http://en.wikipedia.org/wiki/X86 Intel x86] architecture:
If available versions \[3-6\] are specifically detected.

[table
    [[__predef_symbol__] [__predef_version__]]

    [[`i386`] [__predef_detection__]]
    [[`__i386__`] [__predef_detection__]]
    [[`__i486__`] [__predef_detection__]]
    [[`__i586__`] [__predef_detection__]]
    [[`__i686__`] [__predef_detection__]]
    [[`__i386`] [__predef_detection__]]
    [[`_M_IX86`] [__predef_detection__]]
    [[`_X86_`] [__predef_detection__]]
    [[`__THW_INTEL__`] [__predef_detection__]]
    [[`__I86__`] [__predef_detection__]]
    [[`__INTEL__`] [__predef_detection__]]

    [[`__I86__`] [V.0.0]]
    [[`_M_IX86`] [V.0.0]]
    [[`__i686__`] [6.0.0]]
    [[`__i586__`] [5.0.0]]
    [[`__i486__`] [4.0.0]]
    [[`__i386__`] [3.0.0]]
    ]
 */

#if defined(i386) || defined(__i386__) || \
    defined(__i486__) || defined(__i586__) || \
    defined(__i686__) || defined(__i386) || \
    defined(_M_IX86) || defined(_X86_) || \
    defined(__THW_INTEL__) || defined(__I86__) || \
    defined(__INTEL__)
#   undef BOOST_ARCH_X86
#   if defined(__I86__)
#       define BOOST_ARCH_X86 BOOST_VERSION_NUMBER(__I86__,0,0)
#   elif defined(_M_IX86)
#       define BOOST_ARCH_X86 BOOST_PREDEF_MAKE_10_VV00(_M_IX86)
#   elif defined(__i686__)
#       define BOOST_ARCH_X86 BOOST_VERSION_NUMBER(6,0,0)
#   elif defined(__i586__)
#       define BOOST_ARCH_X86 BOOST_VERSION_NUMBER(5,0,0)
#   elif defined(__i486__)
#       define BOOST_ARCH_X86 BOOST_VERSION_NUMBER(4,0,0)
#   elif defined(__i386__)
#       define BOOST_ARCH_X86 BOOST_VERSION_NUMBER(3,0,0)
#   else
#       define BOOST_ARCH_X86 BOOST_VERSION_NUMBER(0,0,1)
#   endif
#endif

#define BOOST_ARCH_X86_NAME "Intel x86"

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_ARCH_X86,BOOST_ARCH_X86_NAME)


#endif
