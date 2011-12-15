/*
Copyright Redshift Software, Inc. 2008-2011
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_COMPILER_COMEAU_H
#define BOOST_PREDEF_COMPILER_COMEAU_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

#define BOOST_CXX_COMO BOOST_VERSION_NUMBER(0,0,0)

/*`
[heading `BOOST_CXX_COMO`]

[@http://en.wikipedia.org/wiki/Comeau_C/C%2B%2B Comeau C++] compiler.
Version number available as major, minor, and patch.
 */

#if defined(__COMO__)
    #undef BOOST_CXX_COMO
    #if defined(__CONO_VERSION__)
        #define BOOST_CXX_COMO BOOST_PREDEF_MAKE_F_F_F(__COMO_VERSION__)
    #else
        #define BOOST_CXX_COMO BOOST_VERSION_NUMBER(0,0,1)
    #endif
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_CXX_COMO,"Comeau C++")

#endif
