/*
Copyright Redshift Software Inc 2011
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_LIBRARY_STD_CXX_H
#define BOOST_PREDEF_LIBRARY_STD_CXX_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_LIBSTD_CXX`]

[@http://libcxx.llvm.org/ libc++] C++ Standard Library.
If available version number as major, minor, and patch.
 */

#define BOOST_LIBSTD_CXX BOOST_VERSION_NUMBER(0,0,0)

#if defined(_LIBCPP_VERSION)
    #undef BOOST_LIBSTD_CXX
    #define BOOST_LIBSTD_CXX BOOST_PREDEF_MAKE_NN_NN(__CPPLIB_VER)
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_LIBSTD_CXX,"libc++")

#endif
