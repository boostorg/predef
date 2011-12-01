/*
Copyright Redshift Software, Inc. 2008-2010
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_OS_HPUX_H
#define BOOST_PREDEF_OS_HPUX_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_OS_HPUX`]

[@http://en.wikipedia.org/wiki/XXX HP-UX] operating system.
 */

#define BOOST_OS_HPUX BOOST_VERSION_NUMBER(0,0,0)

#if defined(hpux) || defined(_hpux) || defined(__hpux)
    #undef BOOST_OS_HPUX
    #define BOOST_OS_HPUX BOOST_VERSION_NUMBER(0,0,1)
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_OS_HPUX,"HP-UX")

#endif
