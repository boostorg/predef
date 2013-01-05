/*
Copyright Redshift Software Inc. 2011-2013
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_LANGUAGE_STDCPP_H
#define BOOST_PREDEF_LANGUAGE_STDCPP_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_LANG_STDCPP`]

[@http://en.wikipedia.org/wiki/C%2B%2B Standard C++] language.
If available, the year of the standard is detected as 0.0.YYYY.
Because of the way the C++ standardization process works the
defined version year will not be the commonly known year standard.
Specifically the defined versions are:

[table Detected Version Number vs. C++ Standard Year
  [[Detected Version Number] [Standard Year] [C++ Standard]]
  [[27.11.1] [1998] [ISO/IEC 14882:1998]]
  [[41.12.1] [2011] [ISO/IEC 14882:2011]]
]

[table
    [[__predef_symbol__] [__predef_version__]]

    [[`____`] [__predef_detection__]]

    [[`____`] [V.R.P]]
    ]
 */

#define BOOST_LANG_STDCPP BOOST_VERSION_NUMBER(0,0,0)

#if defined(__cplusplus)
#   undef BOOST_LANG_STDCPP
#   if (__cplusplus > 100)
#       define BOOST_LANG_STDCPP BOOST_PREDEF_MAKE_YYYYMM(__cplusplus)
#   else
#       define BOOST_LANG_STDCPP BOOST_VERSION_NUMBER(0,0,1)
#   endif
#endif

#define BOOST_LANG_STDCPP_NAME "Standard C++"

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_LANG_STDCPP,BOOST_LANG_STDCPP_NAME)


/*`
[heading `BOOST_LANG_STDCPPCLI`]

[@http://en.wikipedia.org/wiki/C%2B%2B/CLI Standard C++/CLI] language.
If available, the year of the standard is detected as YYYY.MM.1.
 */

#define BOOST_LANG_STDCPPCLI BOOST_VERSION_NUMBER(0,0,0)

#if defined(__cplusplus_cli)
#   undef BOOST_LANG_STDCPPCLI
#   if (__cplusplus_cli > 100)
#       define BOOST_LANG_STDCPPCLI BOOST_PREDEF_MAKE_YYYYMM(__cplusplus_cli)
#   else
#       define BOOST_LANG_STDCPPCLI BOOST_VERSION_NUMBER(0,0,1)
#   endif
#endif

#define BOOST_LANG_STDCPPCLI_NAME "Standard C++/CLI"

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_LANG_STDCPPCLI,BOOST_LANG_STDCPPCLI_NAME)


/*`
[heading `BOOST_LANG_STDECPP`]

[@http://en.wikipedia.org/wiki/Embedded_C%2B%2B Standard Embedded C++] language.
 */

#define BOOST_LANG_STDECPP BOOST_VERSION_NUMBER(0,0,0)

#if defined(__embedded_cplusplus)
#   undef BOOST_LANG_STDECPP
#   define BOOST_LANG_STDECPP BOOST_VERSION_NUMBER(0,0,1)
#endif

#define BOOST_LANG_STDECPP_NAME "Standard Embedded C++"

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_LANG_STDECPP,BOOST_LANG_STDECPP_NAME)


#endif
