/*
Copyright Redshift Software, Inc. 2008-2012
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_OS_LINUX_H
#define BOOST_PREDEF_OS_LINUX_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_OS_LINUX`]

[@http://en.wikipedia.org/wiki/Linux Linux] operating system.

[table
    [[__predef_symbol__] [__predef_version__]]

    [[`____`] [__predef_detection__]]

    [[`____`] [V.R.P]]
    ]
 */

#define BOOST_OS_LINUX BOOST_VERSION_NUMBER(0,0,0)

#if defined(linux) || defined(__linux)
#   undef BOOST_OS_LINUX
#   define BOOST_OS_LINUX BOOST_VERSION_NUMBER(0,0,1)
#endif

#define BOOST_OS_LINUX_NAME "Linux"

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_OS_LINUX,BOOST_OS_LINUX_NAME)


#endif
