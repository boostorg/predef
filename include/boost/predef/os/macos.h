/*
Copyright Redshift Software, Inc. 2008-2012
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_OS_MACOS_H
#define BOOST_PREDEF_OS_MACOS_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_OS_MACOS`]

[@http://en.wikipedia.org/wiki/Mac_OS Mac OS] operating system.
Versions \[9-10\] are specifically detected.

[table
    [[__predef_symbol__] [__predef_version__]]

    [[`____`] [__predef_detection__]]

    [[`____`] [V.R.P]]
    ]
 */

#define BOOST_OS_MACOS BOOST_VERSION_NUMBER(0,0,0)

#if defined(macintosh) || defined(Macintosh) || \
    (defined(__APPLE__) && defined(__MACH__))
#   undef BOOST_OS_MACOS
#   if !defined(BOOST_OS_MACOS) && defined(__APPLE__) && defined(__MACH__)
#       define BOOST_OS_MACOS BOOST_VERSION_NUMBER(10,0,0)
#   endif
#   if !defined(BOOST_OS_MACOS)
#       define BOOST_OS_MACOS BOOST_VERSION_NUMBER(9,0,0)
#   endif
#endif

#define BOOST_OS_MACOS_NAME "Mac OS"

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_OS_MACOS,BOOST_OS_MACOS_NAME)


#endif
