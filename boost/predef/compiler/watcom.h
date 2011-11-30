/*
Copyright Redshift Software, Inc. 2008-2011
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_COMPILER_WATCOM_H
#define BOOST_PREDEF_COMPILER_WATCOM_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_CXX_WATCOM`]

[@http://en.wikipedia.org/wiki/XXX Watcom] compiler.
Version number available as major, and minor.
 */

#define BOOST_CXX_WATCOM BOOST_VERSION_NUMBER(0,0,0)

#if defined(__WATCOMC__)
    #undef BOOST_CXX_WATCOM
    #define BOOST_CXX_WATCOM BOOST_PREDEF_MAKE_NN_NN(__WATCOMC__)
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_CXX_WATCOM,"Watcom")

#endif
