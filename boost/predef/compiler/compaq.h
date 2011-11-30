/*
Copyright Redshift Software, Inc. 2008-2011
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_COMPILER_COMPAQ_H
#define BOOST_PREDEF_COMPILER_COMPAQ_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_CXX_DEC`]

[@http://en.wikipedia.org/wiki/XXX Compaq DEC] compiler.
Version number available as major, minor, and patch.
 */

#define BOOST_CXX_DEC BOOST_VERSION_NUMBER(0,0,0)

#if defined(__DECC)
    #undef BOOST_CXX_DEC
    #define BOOST_CXX_DEC BOOST_VERSION_NUMBER(\
        (__DECC_VER)/10000000,\
        (__DECC_VER%10000000)/100000,\
        (__DECC_VER%10000))
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_CXX_DEC,"Compaq")

#endif
