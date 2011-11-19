/*
Copyright Redshift Software, Inc. 2008-2011
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_ARCHITECTURE_SYS370_H
#define BOOST_PREDEF_ARCHITECTURE_SYS370_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_ARCHITECTURE_SYS370`]

[@http://en.wikipedia.org/wiki/System/370 System/370] architecture.
 */

#define BOOST_ARCHITECTURE_SYS370 BOOST_VERSION_NUMBER(0,0,0)

#if defined(__370__) || defined(__THW_370__)
    #undef BOOST_ARCHITECTURE_SYS370
    #define BOOST_ARCHITECTURE_SYS370 BOOST_VERSION_NUMBER(0,0,1)
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_ARCHITECTURE_SYS370,"System/370")

#endif
