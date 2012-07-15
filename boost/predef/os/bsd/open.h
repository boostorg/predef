/*
Copyright Redshift Software, Inc. 2012
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_OS_BSD_OPEN_H
#define BOOST_PREDEF_OS_BSD_OPEN_H

/*`

[table
    [[__predef_symbol__] [__predef_version__]]

    [[``] [__predef_detection__]]

    [[``] [V.R.P]]
    ]
 */

#define BOOST_OS_BSD_OPEN BOOST_VERSION_NUMBER(0,0,0)

#if defined(__OpenBSD__)
#   ifndef BOOST_OS_BSD
#       define BOOST_OS_BSD BOOST_VERSION_NUMBER(0,0,1)
#   endif
#   undef BOOST_OS_BSD_OPEN
#   if defined(OpenBSD2_0)
#       define BOOST_OS_BSD_OPEN BOOST_VERSION_NUMBER(2,0,0)
#   elif defined(OpenBSD2_1)
#       define BOOST_OS_BSD_OPEN BOOST_VERSION_NUMBER(2,1,0)
#   elif defined(OpenBSD2_2)
#       define BOOST_OS_BSD_OPEN BOOST_VERSION_NUMBER(2,2,0)
#   elif defined(OpenBSD2_3)
#       define BOOST_OS_BSD_OPEN BOOST_VERSION_NUMBER(2,3,0)
#   elif defined(OpenBSD2_4)
#       define BOOST_OS_BSD_OPEN BOOST_VERSION_NUMBER(2,4,0)
#   elif defined(OpenBSD2_5)
#       define BOOST_OS_BSD_OPEN BOOST_VERSION_NUMBER(2,5,0)
#   elif defined(OpenBSD2_6)
#       define BOOST_OS_BSD_OPEN BOOST_VERSION_NUMBER(2,6,0)
#   elif defined(OpenBSD2_7)
#       define BOOST_OS_BSD_OPEN BOOST_VERSION_NUMBER(2,7,0)
#   elif defined(OpenBSD2_8)
#       define BOOST_OS_BSD_OPEN BOOST_VERSION_NUMBER(2,8,0)
#   elif defined(OpenBSD2_9)
#       define BOOST_OS_BSD_OPEN BOOST_VERSION_NUMBER(2,9,0)
#   elif defined(OpenBSD3_0)
#       define BOOST_OS_BSD_OPEN BOOST_VERSION_NUMBER(3,0,0)
#   elif defined(OpenBSD3_1)
#       define BOOST_OS_BSD_OPEN BOOST_VERSION_NUMBER(3,1,0)
#   elif defined(OpenBSD3_2)
#       define BOOST_OS_BSD_OPEN BOOST_VERSION_NUMBER(3,2,0)
#   elif defined(OpenBSD3_3)
#       define BOOST_OS_BSD_OPEN BOOST_VERSION_NUMBER(3,3,0)
#   elif defined(OpenBSD3_4)
#       define BOOST_OS_BSD_OPEN BOOST_VERSION_NUMBER(3,4,0)
#   elif defined(OpenBSD3_5)
#       define BOOST_OS_BSD_OPEN BOOST_VERSION_NUMBER(3,5,0)
#   elif defined(OpenBSD3_6)
#       define BOOST_OS_BSD_OPEN BOOST_VERSION_NUMBER(3,6,0)
#   elif defined(OpenBSD3_7)
#       define BOOST_OS_BSD_OPEN BOOST_VERSION_NUMBER(3,7,0)
#   elif defined(OpenBSD3_8)
#       define BOOST_OS_BSD_OPEN BOOST_VERSION_NUMBER(3,8,0)
#   elif defined(OpenBSD3_9)
#       define BOOST_OS_BSD_OPEN BOOST_VERSION_NUMBER(3,9,0)
#   elif defined(OpenBSD4_0)
#       define BOOST_OS_BSD_OPEN BOOST_VERSION_NUMBER(4,0,0)
#   elif defined(OpenBSD4_1)
#       define BOOST_OS_BSD_OPEN BOOST_VERSION_NUMBER(4,1,0)
#   elif defined(OpenBSD4_2)
#       define BOOST_OS_BSD_OPEN BOOST_VERSION_NUMBER(4,2,0)
#   elif defined(OpenBSD4_3)
#       define BOOST_OS_BSD_OPEN BOOST_VERSION_NUMBER(4,3,0)
#   else
#       define BOOST_OS_BSD_OPEN BOOST_VERSION_NUMBER(0,0,1)
#   endif
#endif

#define BOOST_OS_BSD_OPEN_NAME "OpenBSD"

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_OS_BSD_OPEN,BOOST_OS_BSD_OPEN_NAME)

#endif
