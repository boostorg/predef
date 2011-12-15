/*
Copyright Redshift Software Inc 2011
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
 */

#define BOOST_OS_VMS BOOST_VERSION_NUMBER(0,0,0)

#if defined(VMS) || defined(__VMS)
    #undef BOOST_OS_VMS
    #if defined(__VMS_VER)
        #define BOOST_OS_VMS BOOST_PREDEF_MAKE_NN_NN_00_NN_00(__VMS_VER)
    #else
        #define BOOST_OS_VMS BOOST_VERSION_NUMBER(0,0,1)
    #endif
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_OS_VMS,"VMS")

#endif
