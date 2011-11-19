/*
Copyright Redshift Software, Inc. 2008-2011
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_ARCHITECTURE_SPARC_H
#define BOOST_PREDEF_ARCHITECTURE_SPARC_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_ARCHITECTURE_SPARC`]

[@http://en.wikipedia.org/wiki/SPARC SPARC] architecture.
 */

#define BOOST_ARCHITECTURE_SPARC BOOST_VERSION_NUMBER(0,0,0)

#if defined(__sparc__) || defined(__sparc)
    #undef BOOST_ARCHITECTURE_SPARC
    #if defined(__sparcv9)
        #define BOOST_ARCHITECTURE_SPARC BOOST_VERSION_NUMBER(9,0,0)
    #elif defined(__sparcv8)
        #define BOOST_ARCHITECTURE_SPARC BOOST_VERSION_NUMBER(8,0,0)
    #else
        #define BOOST_ARCHITECTURE_SPARC BOOST_VERSION_NUMBER(0,0,1)
    #endif
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_ARCHITECTURE_SPARC,"SPARC")

#endif
