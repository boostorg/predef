/*
Copyright Redshift Software Inc. 2011
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_LANGUAGE_STDC_H
#define BOOST_PREDEF_LANGUAGE_STDC_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_LANGUAGE_STDC`]

Standard C language. If available, the year of the standard
is detected as 0.0.YYYY.
 */

#define BOOST_LANGUAGE_STDC BOOST_VERSION_NUMBER(0,0,0)

#if defined(__STDC__)
    #undef BOOST_LANGUAGE_STDC
    #if defined(__STDC_VERSION__)
      #if (__STDC_VERSION__ > 100)
          #define BOOST_LANGUAGE_STDC BOOST_VERSION_NUMBER(0,0,__STDC_VERSION__/100)
      #else
          #define BOOST_LANGUAGE_STDC BOOST_VERSION_NUMBER(0,0,1)
      #endif
    #else
      #define BOOST_LANGUAGE_STDC BOOST_VERSION_NUMBER(0,0,1)
    #endif
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_LANGUAGE_STDC,"Standard C")

#endif
