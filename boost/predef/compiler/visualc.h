/*
Copyright Redshift Software, Inc. 2008-2011
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_COMPILER_VISUALC_H
#define BOOST_PREDEF_COMPILER_VISUALC_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_CXX_MSVC`]

[@http://en.wikipedia.org/wiki/XXX Microsoft Visual C/C++] compiler.
Version number available as major, minor, and patch.
 */

#define BOOST_CXX_MSVC BOOST_VERSION_NUMBER(0,0,0)

#if defined(_MSC_VER)
    #undef BOOST_CXX_MSVC
    #if !defined (_MSC_FULL_VER)
        #define BOOST_CXX_MSVC_BUILD 0
    #else
        /* how many digits does the build number have? */
        #if _MSC_FULL_VER / 10000 == _MSC_VER
            /* four digits */
            #define BOOST_CXX_MSVC_BUILD (_MSC_FULL_VER % 10000)
        #elif _MSC_FULL_VER / 100000 == _MSC_VER
            /* five digits */
            #define BOOST_CXX_MSVC_BUILD (_MSC_FULL_VER % 100000)
        #else
            #error "Cannot determine build number from _MSC_FULL_VER"
        #endif
    #endif
    #define BOOST_CXX_MSVC BOOST_VERSION_NUMBER(\
        _MSC_VER/100-6,\
        _MSC_VER%100,\
        BOOST_CXX_MSVC_BUILD)
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_CXX_MSVC,"Microsoft Visual C/C++")

#endif
