/*
Copyright Redshift Software, Inc. 2008-2011
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_ARCHITECTURE_X86_H
#define BOOST_PREDEF_ARCHITECTURE_X86_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

#define BOOST_ARCHITECTURE_X86 BOOST_VERSION_NUMBER(0,0,0)

/*`
[heading `BOOST_ARCHITECTURE_X86`]

[@http://en.wikipedia.org/wiki/X86 Intel x86] architecture:
If available versions \[3-6\] are specifically detected.
 */

#if defined(i386) || defined(__i386__) || \
    defined(__i486__) || defined(__i586__) || \
    defined(__i686__) || defined(__i386) || \
    defined(_M_IX86) || defined(_X86_) || \
    defined(__THW_INTEL__) || defined(__I86__) || \
    defined(__INTEL__)
    #undef BOOST_ARCHITECTURE_X86
    #if defined(__I86__)
        #define BOOST_ARCHITECTURE_X86 BOOST_VERSION_NUMBER(__I86__,0,0)
    #elif defined(_M_IX86)
        #define BOOST_ARCHITECTURE_X86 BOOST_PREDEF_MAKE_NN_00(_M_IX86)
    #elif defined(__i686__)
        #define BOOST_ARCHITECTURE_X86 BOOST_VERSION_NUMBER(6,0,0)
    #elif defined(__i586__)
        #define BOOST_ARCHITECTURE_X86 BOOST_VERSION_NUMBER(5,0,0)
    #elif defined(__i486__)
        #define BOOST_ARCHITECTURE_X86 BOOST_VERSION_NUMBER(4,0,0)
    #elif defined(__i386__)
        #define BOOST_ARCHITECTURE_X86 BOOST_VERSION_NUMBER(3,0,0)
    #else
        #define BOOST_ARCHITECTURE_X86 BOOST_VERSION_NUMBER(0,0,1)
    #endif
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_ARCHITECTURE_X86,"Intel x86")

#endif
