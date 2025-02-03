/*
Copyright Kornel Ponikwicki 2025
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_COMPILER_TCC_H
#define BOOST_PREDEF_COMPILER_TCC_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/* tag::reference[]
= `BOOST_COMP_TCC`

https://en.wikipedia.org/wiki/Tiny_C_Compiler[Tiny C Compiler] (TinyCC or TCC for short).
Version number available as major, minor, and patch.

[options="header"]
|===
| {predef_symbol} | {predef_version}

| `+__TINYC__+` | {predef_detection}

| `+__TINYC__+` | 0.9.P
|===
*/ // end::reference[]

#define BOOST_COMP_TCC BOOST_VERSION_NUMBER_NOT_AVAILABLE

#if defined(__TINYC__) && !defined(BOOST_COMP_TCC_DETECTION)
    /* Helper macros for checking if __TINYC__ expands to any value */
#   define _BOOST_COMP_TCC_HAS_VALUE(VALUE) (_BOOST_COMP_TCC_EXPAND(VALUE) != 1)
#   define _BOOST_COMP_TCC_EXPAND(VALUE) _BOOST_COMP_TCC_CONCAT(VALUE)
#   define _BOOST_COMP_TCC_CONCAT(VALUE) (VALUE ## 1)
    /*
    TCC version is defined in __TINYC__ as {MINOR}{PATCH},
    meaning that 0.9.27 would be 927 (0 for {MAJOR} is skipped).
    Before 0.9.26 macro was defined but not set to any value.
    Since TCC was always released under versions 0.9.x
    we can assume that said macro either ranges between 926 and 999
    or that the version is at least 0.9.0.
    This will, of course, break if {MAJOR} or {MINOR} changes,
    which has never happened (as of January 2025).
    */
#   if _BOOST_COMP_TCC_HAS_VALUE(__TINYC__)
#       if (__TINYC__ < 926 || __TINYC__ > 999)
#           error "Cannot determine TCC version from __TINYC__"
#       endif
#       define BOOST_COMP_TCC_DETECTION BOOST_VERSION_NUMBER(\
            0,\
            __TINYC__/100,\
            __TINYC__%100)
#   else
#       define BOOST_COMP_TCC_DETECTION BOOST_VERSION_NUMBER(0,9,0)
#   endif
    /* We will not need these macros anymore */
#   undef _BOOST_COMP_TCC_HAS_VALUE
#   undef _BOOST_COMP_TCC_EXPAND
#   undef _BOOST_COMP_TCC_CONCAT
#endif

#ifdef BOOST_COMP_TCC_DETECTION
#   if defined(BOOST_PREDEF_DETAIL_COMP_DETECTED)
#       define BOOST_COMP_TCC_EMULATED BOOST_COMP_TCC_DETECTION
#   else
#       undef BOOST_COMP_TCC
#       define BOOST_COMP_TCC BOOST_COMP_TCC_DETECTION
#   endif
#   define BOOST_COMP_TCC_AVAILABLE
#   include <boost/predef/detail/comp_detected.h>
#endif

#define BOOST_COMP_TCC_NAME "Tiny C Compiler"

#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_COMP_TCC,BOOST_COMP_TCC_NAME)

#ifdef BOOST_COMP_TCC_EMULATED
#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_COMP_TCC_EMULATED,BOOST_COMP_TCC_NAME)
#endif
