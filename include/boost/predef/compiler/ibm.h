/*
Copyright Redshift Software, Inc. 2008-2012
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_COMPILER_IBM_H
#define BOOST_PREDEF_COMPILER_IBM_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_COMP_IBM`]

[@http://en.wikipedia.org/wiki/VisualAge IBM XL C/C++] compiler.
Version number available as major, minor, and patch.

[table
    [[__predef_symbol__] [__predef_version__]]

    [[`____`] [__predef_detection__]]

    [[`____`] [V.R.P]]
    ]
 */

#define BOOST_COMP_IBM BOOST_VERSION_NUMBER(0,0,0)

#if defined(__IBMCPP__) || defined(__xlC__) || defined(__xlc__)
#   undef BOOST_COMP_IBM
#   if defined(__COMPILER_VER__)
#       define BOOST_COMP_IBM BOOST_PREDEF_MAKE_0X_VRRPPPP(__COMPILER_VER__)
#   elif defined(__xlC__)
#       define BOOST_COMP_IBM BOOST_PREDEF_MAKE_0X_VVRR(__xlC__)
#   elif defined(__xlc__)
#       define BOOST_COMP_IBM BOOST_PREDEF_MAKE_0X_VVRR(__xlc__)
#   else
#       define BOOST_COMP_IBM BOOST_PREDEF_MAKE_10_VRP(__IBMCPP__)
#   endif
#endif

#define BOOST_COMP_IBM_NAME "IBM XL C/C++"

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_COMP_IBM,BOOST_COMP_IBM_NAME)


#endif
