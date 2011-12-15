/*
Copyright Redshift Software, Inc. 2008-2011
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_LIBRARY_C_UC_H
#define BOOST_PREDEF_LIBRARY_C_UC_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_LIBC_UC`]

[@http://en.wikipedia.org/wiki/Uclibc uClibc] Standard C library.
Version number available as major, minor, and patch.
 */

#define BOOST_LIBC_UC BOOST_VERSION_NUMBER(0,0,0)

#if defined(__UCLIBC__)
    #undef BOOST_LIBC_UC
    #define BOOST_LIBC_UC BOOST_VERSION_NUMBER(\
        __UCLIBC_MAJOR__,__UCLIBC_MINOR__,__UCLIBC_SUBLEVEL__)
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_LIBC_UC,"uClibc")

#endif
