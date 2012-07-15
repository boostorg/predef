/*
Copyright Redshift Software, Inc. 2012
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_OS_BSD_DRAGONFLY_H
#define BOOST_PREDEF_OS_BSD_DRAGONFLY_H

/*`

[table
    [[__predef_symbol__] [__predef_version__]]

    [[``] [__predef_detection__]]

    [[``] [V.R.P]]
    ]
 */

#define BOOST_OS_BSD_DRAGONFLY BOOST_VERSION_NUMBER(0,0,0)

#if defined(__DragonFly__)
#   ifndef BOOST_OS_BSD
#       define BOOST_OS_BSD BOOST_VERSION_NUMBER(0,0,1)
#   endif
#   undef BOOST_OS_BSD_DRAGONFLY
#   if defined(__DragonFly__)
#       define BOOST_OS_DRAGONFLY_BSD BOOST_VERSION_NUMBER(0,0,1)
#   endif
#endif

#define BOOST_OS_BSD_DRAGONFLY_NAME "DragonFly BSD"

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_OS_BSD_DRAGONFLY,BOOST_OS_BSD_DRAGONFLY_NAME)

#endif
