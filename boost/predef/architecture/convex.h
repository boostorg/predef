/*
Copyright Redshift Software Inc 2011
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_ARCHITECTURE_CONVEX_H
#define BOOST_PREDEF_ARCHITECTURE_CONVEX_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_ARCHITECTURE_CONVEX`]

[@http://en.wikipedia.org/wiki/Convex_Computer Convex Computer] architecture.
 */

#define BOOST_ARCHITECTURE_CONVEX BOOST_VERSION_NUMBER(0,0,0)

#if defined(__convex__)
    #undef BOOST_ARCHITECTURE_CONVEX
    #if defined(__convex_c1__)
        #define BOOST_ARCHITECTURE_CONVEX BOOST_VERSION_NUMBER(1,0,0)
    #elif defined(__convex_c2__)
        #define BOOST_ARCHITECTURE_CONVEX BOOST_VERSION_NUMBER(2,0,0)
    #elif defined(__convex_c32__)
        #define BOOST_ARCHITECTURE_CONVEX BOOST_VERSION_NUMBER(3,2,0)
    #elif defined(__convex_c34__)
        #define BOOST_ARCHITECTURE_CONVEX BOOST_VERSION_NUMBER(3,4,0)
    #elif defined(__convex_c38__)
        #define BOOST_ARCHITECTURE_CONVEX BOOST_VERSION_NUMBER(3,8,0)
    #else
        #define BOOST_ARCHITECTURE_CONVEX BOOST_VERSION_NUMBER(0,0,1)
    #endif
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_ARCHITECTURE_CONVEX,"Convex Computer")


#endif
