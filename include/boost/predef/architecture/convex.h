/*
Copyright Redshift Software Inc 2011-2013
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_ARCHITECTURE_CONVEX_H
#define BOOST_PREDEF_ARCHITECTURE_CONVEX_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_ARCH_CONVEX`]

[@http://en.wikipedia.org/wiki/Convex_Computer Convex Computer] architecture.

[table
    [[__predef_symbol__] [__predef_version__]]

    [[`__convex__`] [__predef_detection__]]

    [[`__convex_c1__`] [1.0.0]]
    [[`__convex_c2__`] [2.0.0]]
    [[`__convex_c32__`] [3.2.0]]
    [[`__convex_c34__`] [3.4.0]]
    [[`__convex_c38__`] [3.8.0]]
    ]
 */

#define BOOST_ARCH_CONVEX BOOST_VERSION_NUMBER(0,0,0)

#if defined(__convex__)
#   undef BOOST_ARCH_CONVEX
#   if defined(__convex_c1__)
#       define BOOST_ARCH_CONVEX BOOST_VERSION_NUMBER(1,0,0)
#   elif defined(__convex_c2__)
#       define BOOST_ARCH_CONVEX BOOST_VERSION_NUMBER(2,0,0)
#   elif defined(__convex_c32__)
#       define BOOST_ARCH_CONVEX BOOST_VERSION_NUMBER(3,2,0)
#   elif defined(__convex_c34__)
#       define BOOST_ARCH_CONVEX BOOST_VERSION_NUMBER(3,4,0)
#   elif defined(__convex_c38__)
#       define BOOST_ARCH_CONVEX BOOST_VERSION_NUMBER(3,8,0)
#   else
#       define BOOST_ARCH_CONVEX BOOST_VERSION_NUMBER(0,0,1)
#   endif
#endif

#define BOOST_ARCH_CONVEX_NAME "Convex Computer"

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_ARCH_CONVEX,BOOST_ARCH_CONVEX_NAME)



#endif
