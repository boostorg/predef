/*
Copyright Henrik S. Gaßmann 2023
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_LIBRARY_STD_VISUALC_H
#define BOOST_PREDEF_LIBRARY_STD_VISUALC_H

#include <boost/predef/library/std/_prefix.h>

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/* tag::reference[]
= `BOOST_LIB_STD_MSVC`

https://github.com/microsoft/STL[Microsoft's {CPP} Standard Library].
If available version number as major, minor, and patch.

[options="header"]
|===
| {predef_symbol} | {predef_version}

| `+_MSVC_STL_VERSION+` | {predef_detection}

| `+_MSVC_STL_VERSION+` | VV.R.0
|===
*/ // end::reference[]

#define BOOST_LIB_STD_MSVC BOOST_VERSION_NUMBER_NOT_AVAILABLE

#if defined(_MSVC_STL_VERSION)
#   undef BOOST_LIB_STD_MSVC
#   define BOOST_LIB_STD_MSVC BOOST_PREDEF_MAKE_10_VVR(_MSVC_STL_VERSION)
#endif

#if BOOST_LIB_STD_MSVC
#   define BOOST_LIB_STD_MSVC_AVAILABLE
#endif

#define BOOST_LIB_STD_MSVC_NAME "Microsoft stdlib"

#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_LIB_STD_MSVC, BOOST_LIB_STD_MSVC_NAME)
