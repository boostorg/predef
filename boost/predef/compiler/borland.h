/*
Copyright Redshift Software, Inc. 2008-2011
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_COMPILER_BORLAND_H
#define BOOST_PREDEF_COMPILER_BORLAND_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_CXX_BORLAND`]

[@http://en.wikipedia.org/wiki/C_plus_plus_builder Borland C++] compiler.
Version number available as major, minor, and patch.
 */

#define BOOST_CXX_BORLAND BOOST_VERSION_NUMBER(0,0,0)

#if defined(__BORLANDC__) || defined(__CODEGEARC__)
    #undef BOOST_CXX_BORLAND
    #if defined(__CODEGEARC__)
        #define BOOST_CXX_BORLAND BOOST_PREDEF_MAKE_FF_F_F(__CODEGEARC__)
    #else
        #define BOOST_CXX_BORLAND BOOST_PREDEF_MAKE_FF_F_F(__BORLANDC__)
    #endif
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_CXX_BORLAND,"Borland C++")

#endif
