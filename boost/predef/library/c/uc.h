/*
Copyright Redshift Software, Inc. 2008-2012
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_LIBRARY_C_UC_H
#define BOOST_PREDEF_LIBRARY_C_UC_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_LIB_C_UC`]

[@http://en.wikipedia.org/wiki/Uclibc uClibc] Standard C library.
Version number available as major, minor, and patch.

[table
    [[__predef_symbol__] [__predef_version__]]

    [[``] [__predef_detection__]]

    [[``] [V.R.P]]
    ]
 */

#define BOOST_LIB_C_UC BOOST_VERSION_NUMBER(0,0,0)

#if defined(__UCLIBC__)
#   undef BOOST_LIB_C_UC
#   define BOOST_LIB_C_UC BOOST_VERSION_NUMBER(\
        __UCLIBC_MAJOR__,__UCLIBC_MINOR__,__UCLIBC_SUBLEVEL__)
#endif

#define BOOST_LIB_C_UC_NAME "uClibc"

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_LIB_C_UC,BOOST_LIB_C_UC_NAME)


#endif
