/*
Copyright Rene Rivera 2008-2013
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_OS_WINDOWS_H
#define BOOST_PREDEF_OS_WINDOWS_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_OS_WINDOWS`]

[@http://en.wikipedia.org/wiki/Category:Microsoft_Windows Microsoft Windows] operating system.

[table
    [[__predef_symbol__] [__predef_version__]]

    [[`_WIN32`] [__predef_detection__]]
    [[`_WIN64`] [__predef_detection__]]
    [[`__WIN32__`] [__predef_detection__]]
    [[`__TOS_WIN__`] [__predef_detection__]]
    [[`__WINDOWS__`] [__predef_detection__]]
    ]
 */

#define BOOST_OS_WINDOWS BOOST_VERSION_NUMBER_NOT_AVAILABLE

#if !BOOST_PREDEF_DETAIL_OS_DETECTED && ( \
    defined(_WIN32) || defined(_WIN64) || \
    defined(__WIN32__) || defined(__TOS_WIN__) || \
    defined(__WINDOWS__) \
    )
#   undef BOOST_OS_WINDOWS
#   define BOOST_OS_WINDOWS BOOST_VERSION_NUMBER_AVAILABLE

// BOOST_WINDOWS_RUNTIME is only defined for store and phone, but not desktop.
// This allows libraries to easily just check for banned Win32 APIs.
// Any APIs specific to only phone or store should be under a 
// WINAPI_FAMILY_PARITION check.
#if defined(WINAPI_FAMILY) && WINAPI_FAMILY==WINAPI_FAMILY_APP
#  define BOOST_WINDOWS_RUNTIME WINAPI_FAMILY_APP
#  define BOOST_NO_ANSI_APIS
#elif defined(WINAPI_FAMILY) && WINAPI_FAMILY==WINAPI_FAMILY_PHONE_APP
#  define BOOST_WINDOWS_RUNTIME WINAPI_FAMILY_PHONE_APP
#  define BOOST_NO_ANSI_APIS 
#endif

#endif

#if BOOST_OS_WINDOWS
#   define BOOST_OS_WINDOWS_AVAILABLE
#   include <boost/predef/detail/os_detected.h>
#endif

#define BOOST_OS_WINDOWS_NAME "Microsoft Windows"

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_OS_WINDOWS,BOOST_OS_WINDOWS_NAME)

#endif
