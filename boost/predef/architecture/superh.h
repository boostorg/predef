/*
Copyright Redshift Software, Inc. 2008-2011
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_ARCHITECTURE_SUPERH_H
#define BOOST_PREDEF_ARCHITECTURE_SUPERH_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_ARCHITECTURE_SH`]

[@http://en.wikipedia.org/wiki/SuperH SuperH] architecture:
If available versions \[1-5\] are specifically detected.
 */

#define BOOST_ARCHITECTURE_SH BOOST_VERSION_NUMBER(0,0,0)

#if defined(__sh__)
    #undef BOOST_ARCHITECTURE_SH
    #if defined(__SH5__)
        #define BOOST_ARCHITECTURE_SH BOOST_VERSION_NUMBER(5,0,0)
    #elif defined(__SH4__)
        #define BOOST_ARCHITECTURE_SH BOOST_VERSION_NUMBER(4,0,0)
    #elif defined(__sh3__) || defined(__SH3__)
        #define BOOST_ARCHITECTURE_SH BOOST_VERSION_NUMBER(3,0,0)
    #elif defined(__sh2__)
        #define BOOST_ARCHITECTURE_SH BOOST_VERSION_NUMBER(2,0,0)
    #elif defined(__sh1__)
        #define BOOST_ARCHITECTURE_SH BOOST_VERSION_NUMBER(1,0,0)
    #else
        #define BOOST_ARCHITECTURE_SH BOOST_VERSION_NUMBER(0,0,1)
    #endif
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_ARCHITECTURE_SH,"SuperH")

#endif
