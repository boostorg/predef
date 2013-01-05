/*
Copyright Redshift Software, Inc. 2008-2012
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

[@http://en.wikipedia.org/wiki/QNX QNX] operating system.
Version number available as major, and minor if possible. And
version 4 is specifically detected.

[table
    [[__predef_symbol__] [__predef_version__]]

    [[`____`] [__predef_detection__]]

    [[`____`] [V.R.P]]
    ]
 */

#define BOOST_OS_QNX BOOST_VERSION_NUMBER(0,0,0)

#if defined(__QNX__) || defined(__QNXNTO__)
#   undef BOOST_OS_QNX
#   if defined(_NTO_VERSION)
#       define BOOST_OS_QNX BOOST_PREDEF_MAKE_10_VVRR(_NTO_VERSION)
#   elif defined(__QNX__)
#       define BOOST_OS_QNX BOOST_VERSION_NUMBER(4,0,0)
#   else
#       define BOOST_OS_QNX BOOST_VERSION_NUMBER(0,0,1)
#   endif
#endif

#define BOOST_OS_QNX_NAME "QNX"

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_OS_QNX,BOOST_OS_QNX_NAME)


#endif
