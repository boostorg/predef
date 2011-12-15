/*
Copyright Redshift Software, Inc. 2008-2011
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_COMPILER_GREENHILLS_H
#define BOOST_PREDEF_COMPILER_GREENHILLS_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_CXX_GHS`]

[@http://en.wikipedia.org/wiki/Green_Hills_Software Green Hills C/C++] compiler.
Version number available as major, minor, and patch.
 */

#define BOOST_CXX_GHS BOOST_VERSION_NUMBER(0,0,0)

#if defined(__ghs) || defined(__ghs__)
    #undef BOOST_CXX_GHS
    #if defined(__GHS_VERSION_NUMBER__)
        #define BOOST_CXX_GHS BOOST_PREDEF_MAKE_N_N_N(__GHS_VERSION_NUMBER__)
    #else if defined(__ghs)
        #define BOOST_CXX_GHS BOOST_PREDEF_MAKE_N_N_N(__ghs)
    #endif
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_CXX_GHS,"Green Hills C/C++")

#endif
