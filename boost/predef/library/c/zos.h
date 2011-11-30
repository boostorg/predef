/*
Copyright Redshift Software, Inc. 2008-2011
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_LIBRARY_C_ZOS_H
#define BOOST_PREDEF_LIBRARY_C_ZOS_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_LIBC_ZOS`]

z/OS libc Standard C library.
Version number available as major, minor, and patch.
 */

#define BOOST_LIBC_ZOS BOOST_VERSION_NUMBER(0,0,0)

#if defined(__LIBREL__)
    #undef BOOST_LIBC_ZOS
    #if defined(__LIBREL__)
      #define BOOST_LIBC_ZOS BOOST_PREDEF_MAKE_F_FF_FFFF(__LIBREL__)
    #elif defined(__TARGET_LIB__)
      #define BOOST_LIBC_ZOS BOOST_PREDEF_MAKE_F_FF_FFFF(__TARGET_LIB__)
    #else
      #define BOOST_LIBC_ZOS BOOST_VERSION_NUMBER(0,0,1)
    #endif
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_LIBC_ZOS,"z/OS")

#endif
