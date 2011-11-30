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

[@http://en.wikipedia.org/wiki/XXX Green Hills] compiler.
Version number available as major, minor, and patch.
 */

#define BOOST_CXX_GHS BOOST_VERSION_NUMBER(0,0,0)

#if defined(__ghs)
    #undef BOOST_CXX_GHS
    #define BOOST_CXX_GHS BOOST_PREDEF_MAKE_N_N_N(__ghs)
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_CXX_GHS,"Green Hills")

#endif
