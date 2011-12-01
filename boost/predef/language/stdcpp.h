/*
Copyright Redshift Software Inc. 2011
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_LANGUAGE_STDCPP_H
#define BOOST_PREDEF_LANGUAGE_STDCPP_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_LANGUAGE_STDCPP`]

[@http://en.wikipedia.org/wiki/C%2B%2B Standard C++] language.
If available, the year of the standard is detected as 0.0.YYYY.
Because of the way the C++ standardization process works the
defined version year will not be the commonly known year standard.
Specifically the defined versions are:

[table Detected Version Number vs. C++ Standard Year
  [[Detected Version Number] [Standard Year] [C++ Standard]]
  [[0.0.1997] [1998] [ISO/IEC 14882:1998]]
  [[0.0.?] [2003] [ISO/IEC 14882:2003]]
  [[0.0.?] [2007] [ISO/IEC TR 19768:2007]]
  [[0.0.2011] [2011] [ISO/IEC 14882:2011]]
]
 */

#define BOOST_LANGUAGE_STDCPP BOOST_VERSION_NUMBER(0,0,0)

#if defined(__cplusplus)
    #undef BOOST_LANGUAGE_STDCPP
    #if (__cplusplus > 100)
        #define BOOST_LANGUAGE_STDCPP BOOST_VERSION_NUMBER(0,0,__cplusplus/100)
    #else
        #define BOOST_LANGUAGE_STDCPP BOOST_VERSION_NUMBER(0,0,1)
    #endif
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_LANGUAGE_STDCPP,"Standard C++")

/*`
[heading `BOOST_LANGUAGE_STDCPPCLI`]

[@http://en.wikipedia.org/wiki/C%2B%2B/CLI Standard C++/CLI] language.
If available, the year of the standard is detected as 0.0.YYYY.
 */

#define BOOST_LANGUAGE_STDCPPCLI BOOST_VERSION_NUMBER(0,0,0)

#if defined(__cplusplus_cli)
    #undef BOOST_LANGUAGE_STDCPPCLI
    #if (__cplusplus_cli > 100)
        #define BOOST_LANGUAGE_STDCPPCLI BOOST_VERSION_NUMBER(0,0,__cplusplus_cli/100)
    #else
        #define BOOST_LANGUAGE_STDCPPCLI BOOST_VERSION_NUMBER(0,0,1)
    #endif
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_LANGUAGE_STDCPPCLI,"Standard C++/CLI")

/*`
[heading `BOOST_LANGUAGE_STDECPP`]

[@http://en.wikipedia.org/wiki/Embedded_C%2B%2B Standard Embedded C++] language.
 */

#define BOOST_LANGUAGE_STDECPP BOOST_VERSION_NUMBER(0,0,0)

#if defined(__embedded_cplusplus)
    #undef BOOST_LANGUAGE_STDECPP
	#define BOOST_LANGUAGE_STDECPP BOOST_VERSION_NUMBER(0,0,1)
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_LANGUAGE_STDECPP,"Standard Embedded C++")

#endif
