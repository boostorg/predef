/*
Copyright James E. King III, 2017
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_PLAT_WINDOWS_UWP_H
#define BOOST_PREDEF_PLAT_WINDOWS_UWP_H

#include <boost/predef/make.h>
#include <boost/predef/os/windows.h>
#include <boost/predef/version_number.h>

/*`
[heading `BOOST_PLAT_WINDOWS_UWP`]

[@http://docs.microsoft.com/windows/uwp/ Universal Windows Platform].
BOOST_PLAT_WINDOWS_UWP is available if the current development environment
is capable of targeting Universal Windows Platform development.  To target
a specific family one would define WINAPI_FAMILY, and in a UWP-capable
environment this may limit the Win32 APIs available to achieve portability.

To detect Windows API availability that is backwards compatible to pre-UWP SDKs, use:
    `#if !BOOST_PLAT_WINDOWS_UWP || BOOST_PLAT_WINDOWS_DESKTOP`

To detect Windows API availability in a specific UWP family, for example SYSTEM:
    `#if BOOST_PLAT_WINDOWS_SYSTEM`

UWP development is available on:
  - Microsoft Windows SDK 8.0 or later
  - MinGW-w64 version 3.0 or later

[table
    [[__predef_symbol__] [__predef_version__]]

    [[`__MINGW64_VERSION_MAJOR` from `_mingw.h`] [`>= 3`]]
    [[`VER_PRODUCTBUILD` from `ntverp.h`] [`>= 9200`]]
]
*/

#define BOOST_PLAT_WINDOWS_UWP BOOST_VERSION_NUMBER_NOT_AVAILABLE
#define BOOST_PLAT_WINDOWS_SDK_VERSION BOOST_VERSION_NUMBER_NOT_AVAILABLE

#if BOOST_OS_WINDOWS
//  MinGW (32-bit) has no ntverp.h header
#if !defined(__MINGW32__)
#   include <ntverp.h>
#   undef BOOST_PLAT_WINDOWS_SDK_VERSION
#   define BOOST_PLAT_WINDOWS_SDK_VERSION BOOST_VERSION_NUMBER(0, 0, VER_PRODUCTBUILD)
#endif

// 9200 is Windows SDK 8.0 from ntverp.h which introduced family support
#if ((BOOST_PLAT_WINDOWS_SDK_VERSION >= BOOST_VERSION_NUMBER(0, 0, 9200)) || \
     (defined(__MINGW64__) && __MINGW64_VERSION_MAJOR >= 3))
#   undef BOOST_PLAT_WINDOWS_UWP
#   define BOOST_PLAT_WINDOWS_UWP BOOST_VERSION_NUMBER_AVAILABLE
#endif
#endif

#if BOOST_PLAT_WINDOWS_UWP
#   define BOOST_PLAT_WINDOWS_UWP_AVAILABLE
#   include <boost/predef/detail/platform_detected.h>
#   include <winapifamily.h>    // Windows SDK
#endif

#define BOOST_PLAT_WINDOWS_UWP_NAME "Universal Windows Platform"

#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_PLAT_WINDOWS_UWP, BOOST_PLAT_WINDOWS_UWP_NAME)
