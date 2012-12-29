/*
Copyright Redshift Software, Inc. 2012
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_OS_BSD_NET_H
#define BOOST_PREDEF_OS_BSD_NET_H

/*`

[table
    [[__predef_symbol__] [__predef_version__]]

    [[``] [__predef_detection__]]

    [[``] [V.R.P]]
    ]
 */

#define BOOST_OS_BSD_NET BOOST_VERSION_NUMBER(0,0,0)

#if defined(__NETBSD__) || defined(__NetBSD__)
#   ifndef BOOST_OS_BSD
#       define BOOST_OS_BSD BOOST_VERSION_NUMBER(0,0,1)
#   endif
#   undef BOOST_OS_BSD_NET
#   if defined(__NETBSD__)
#       if defined(__NETBSD_version)
#           if __NETBSD_version < 500000
#               define BOOST_OS_BSD_NET \
                    BOOST_PREDEF_MAKE_10_VRP000(__NETBSD_version)
#           else
#               define BOOST_OS_BSD_NET \
                    BOOST_PREDEF_MAKE_10_VRR000(__NETBSD_version)
#           endif
#       else
#           define BOOST_OS_BSD_NET BOOST_VERSION_NUMBER(0,0,1)
#       endif
#   elif defined(__NetBSD__)
#       if defined(NetBSD0_8)
#           define BOOST_OS_BSD_NET BOOST_VERSION_NUMBER(0,8,0)
#       elif defined(NetBSD0_9)
#           define BOOST_OS_BSD_NET BOOST_VERSION_NUMBER(0,9,0)
#       elif defined(NetBSD1_0)
#           define BOOST_OS_BSD_NET BOOST_VERSION_NUMBER(1,0,0)
#       elif defined(__NetBSD_Version)
#           define BOOST_OS_BSD_NET \
                BOOST_PREDEF_MAKE_10_VVRR00PP00(__NetBSD_Version)
#       else
#           define BOOST_OS_BSD_NET BOOST_VERSION_NUMBER(0,0,1)
#       endif
#   endif
#endif

#define BOOST_OS_BSD_NET_NAME "DragonFly BSD"

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_OS_BSD_NET,BOOST_OS_BSD_NET_NAME)

#endif
