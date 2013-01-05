/*
Copyright Redshift Software, Inc. 2008-2012
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_ARCHITECTURE_SPARC_H
#define BOOST_PREDEF_ARCHITECTURE_SPARC_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_ARCH_SPARC`]

[@http://en.wikipedia.org/wiki/SPARC SPARC] architecture.

[table
    [[__predef_symbol__] [__predef_version__]]

    [[`____`] [__predef_detection__]]

    [[`____`] [V.R.P]]
    ]
 */

#define BOOST_ARCH_SPARC BOOST_VERSION_NUMBER(0,0,0)

#if defined(__sparc__) || defined(__sparc)
#   undef BOOST_ARCH_SPARC
#   if defined(__sparcv9)
#       define BOOST_ARCH_SPARC BOOST_VERSION_NUMBER(9,0,0)
#   elif defined(__sparcv8)
#       define BOOST_ARCH_SPARC BOOST_VERSION_NUMBER(8,0,0)
#   else
#       define BOOST_ARCH_SPARC BOOST_VERSION_NUMBER(0,0,1)
#   endif
#endif

#define BOOST_ARCH_SPARC_NAME "SPARC"

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_ARCH_SPARC,BOOST_ARCH_SPARC_NAME)


#endif
