/*
Copyright Redshift Software Inc 2011-2012
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_OS_VMS_H
#define BOOST_PREDEF_OS_VMS_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_OS_VMS`]

[@http://en.wikipedia.org/wiki/Vms VMS] operating system.
Version number available as major, minor, and patch.

[table
    [[__predef_symbol__] [__predef_version__]]

    [[`____`] [__predef_detection__]]

    [[`____`] [V.R.P]]
    ]
 */

#define BOOST_OS_VMS BOOST_VERSION_NUMBER(0,0,0)

#if defined(VMS) || defined(__VMS)
#   undef BOOST_OS_VMS
#   if defined(__VMS_VER)
#       define BOOST_OS_VMS BOOST_PREDEF_MAKE_10_VVRR00PP00(__VMS_VER)
#   else
#       define BOOST_OS_VMS BOOST_VERSION_NUMBER(0,0,1)
#   endif
#endif

#define BOOST_OS_VMS_NAME "VMS"

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_OS_VMS,BOOST_OS_VMS_NAME)


#endif
