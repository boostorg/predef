/*
Copyright Redshift Software, Inc. 2008-2011
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_COMPILER_IAR_H
#define BOOST_PREDEF_COMPILER_IAR_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_CXX_IAR`]

[@http://en.wikipedia.org/wiki/XXX IAR] compiler.
Version number available as major, minor, and patch.
 */

#define BOOST_CXX_IAR BOOST_VERSION_NUMBER(0,0,0)

#if defined(__IAR_SYSTEMS_ICC__)
    #undef BOOST_CXX_IAR
    #define BOOST_CXX_IAR BOOST_PREDEF_MAKE_NN_NN(__VER__)
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_CXX_IAR,"IAR")

#endif
