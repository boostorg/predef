/*
Copyright Redshift Software, Inc. 2008-2011
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_COMPILER_PALM_H
#define BOOST_PREDEF_COMPILER_PALM_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_CXX_PALM`]

Palm C/C++ compiler.
Version number available as major, minor, and patch.
 */

#define BOOST_CXX_PALM BOOST_VERSION_NUMBER(0,0,0)

#if defined(_PACC_VER)
    #undef BOOST_CXX_PALM
    #define BOOST_CXX_PALM BOOST_PREDEF_MAKE_F_FF_FF_000(_PACC_VER)
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_CXX_PALM,"Palm C/C++")

#endif
