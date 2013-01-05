/*
Copyright Redshift Software, Inc. 2008-2012
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_LIBRARY_STD_DINKUMWARE_H
#define BOOST_PREDEF_LIBRARY_STD_DINKUMWARE_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_LIB_STD_DINKUMWARE`]

[@http://en.wikipedia.org/wiki/Dinkumware Dinkumware] Standard C++ Library.
If available version number as major, minor, and patch.

[table
    [[__predef_symbol__] [__predef_version__]]

    [[`____`] [__predef_detection__]]

    [[`____`] [V.R.P]]
    ]
 */

#define BOOST_LIB_STD_DINKUMWARE BOOST_VERSION_NUMBER(0,0,0)

#if (defined(_YVALS) && !defined(__IBMCPP__)) || defined(_CPPLIB_VER)
#   undef BOOST_LIB_STD_DINKUMWARE
#   if defined(_CPPLIB_VER)
#       define BOOST_LIB_STD_DINKUMWARE BOOST_PREDEF_MAKE_10_VVRR(_CPPLIB_VER)
#   else
#       define BOOST_LIB_STD_DINKUMWARE BOOST_VERSION_NUMBER(0,0,1)
#   endif
#endif

#define BOOST_LIB_STD_DINKUMWARE_NAME "Dinkumware"

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_LIB_STD_DINKUMWARE,BOOST_LIB_STD_DINKUMWARE_NAME)


#endif
