/*
Copyright Redshift Software, Inc. 2008-2012
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_OS_CYGWIN_H
#define BOOST_PREDEF_OS_CYGWIN_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_OS_CYGWIN`]

[@http://en.wikipedia.org/wiki/Cygwin Cygwin] evironment.

[table
    [[__predef_symbol__] [__predef_version__]]

    [[`____`] [__predef_detection__]]

    [[`____`] [V.R.P]]
    ]
 */

#define BOOST_OS_CYGWIN BOOST_VERSION_NUMBER(0,0,0)

#if defined(__CYGWIN__)
#   undef BOOST_OS_CYGWIN
#   define BOOST_OS_CGYWIN BOOST_VERSION_NUMBER(0,0,1)
#endif

#define BOOST_OS_CYGWIN_NAME "Cygwin"

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_OS_CYGWIN,BOOST_OS_CYGWIN_NAME)


#endif
