/*
Copyright Redshift Software, Inc. 2008-2010
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_OS_QNXNTO_H
#define BOOST_PREDEF_OS_QNXNTO_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_OS_QNX`]

[@http://en.wikipedia.org/wiki/XXX QNX-NTO] operating system.
Version number available as major, and minor if possible. And
version 4 is specifically detected.
 */

#define BOOST_OS_QNX BOOST_VERSION_NUMBER(0,0,0)

#if defined(__QNX__) || defined(__QNXNTO__)
    #undef BOOST_OS_QNX
    #if defined(_NTO_VERSION)
        #define BOOST_OS_QNX BOOST_PREDEF_MAKE_NN_NN(_NTO_VERSION)
    #elif defined(__QNX__)
        #define BOOST_OS_QNX BOOST_VERSION_NUMBER(4,0,0)
    #else
        #define BOOST_OS_QNX BOOST_VERSION_NUMBER(0,0,1)
    #endif
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_OS_QNX,"QNX-NTO")

#endif
