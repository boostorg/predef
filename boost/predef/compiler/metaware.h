/*
Copyright Redshift Software, Inc. 2008-2011
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_COMPILER_METAWARE_H
#define BOOST_PREDEF_COMPILER_METAWARE_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_CXX_HIGHC`]

[@http://en.wikipedia.org/wiki/XXX Metaware HighC] compiler.
 */

#define BOOST_CXX_HIGHC BOOST_VERSION_NUMBER(0,0,0)

#if defined(__HIGHC__)
    #undef BOOST_CXX_HIGHC
    #define BOOST_CXX_HIGHC BOOST_VERSION_NUMBER(0,0,1)
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_CXX_HIGHC,"Metaware HighC")

#endif
