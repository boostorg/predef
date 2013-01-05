/*
Copyright Redshift Software, Inc. 2008-2012
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_ARCHITECTURE_SYS390_H
#define BOOST_PREDEF_ARCHITECTURE_SYS390_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_ARCH_SYS390`]

[@http://en.wikipedia.org/wiki/System/390 System/390] architecture.

[table
    [[__predef_symbol__] [__predef_version__]]

    [[`____`] [__predef_detection__]]

    [[`____`] [V.R.P]]
    ]
 */

#define BOOST_ARCH_SYS390 BOOST_VERSION_NUMBER(0,0,0)

#if defined(__s390__) || defined(__s390x__)
#   undef BOOST_ARCH_SYS390
#   define BOOST_ARCH_SYS390 BOOST_VERSION_NUMBER(0,0,1)
#endif

#define BOOST_ARCH_SYS390_NAME "System/390"

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_ARCH_SYS390,BOOST_ARCH_SYS390_NAME)


#endif
