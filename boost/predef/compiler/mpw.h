/*
Copyright Redshift Software, Inc. 2008-2011
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_COMPILER_MPW_H
#define BOOST_PREDEF_COMPILER_MPW_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_CXX_MPW`]

[@http://en.wikipedia.org/wiki/Macintosh_Programmer%27s_Workshop MPW C++] compiler.
Version number available as major, and minor.
 */

#define BOOST_CXX_MPW BOOST_VERSION_NUMBER(0,0,0)

#if defined(__MRC__) || defined(MPW_C) || defined(MPW_CPLUS)
    #undef BOOST_CXX_MPW
    #if defined(__MRC__)
        #define BOOST_CXX_MPW BOOST_PREDEF_MAKE_FF_FF(__MRC__)
    #else
        #define BOOST_CXX_MPW BOOST_VERSION_NUMBER(0,0,1)
    #endif
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_CXX_MPW,"MPW C++")

#endif
