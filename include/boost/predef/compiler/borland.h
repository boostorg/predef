/*
Copyright Redshift Software, Inc. 2008-2012
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_COMPILER_BORLAND_H
#define BOOST_PREDEF_COMPILER_BORLAND_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_COMP_BORLAND`]

[@http://en.wikipedia.org/wiki/C_plus_plus_builder Borland C++] compiler.
Version number available as major, minor, and patch.

[table
    [[__predef_symbol__] [__predef_version__]]

    [[`____`] [__predef_detection__]]

    [[`____`] [V.R.P]]
    ]
 */

#define BOOST_COMP_BORLAND BOOST_VERSION_NUMBER(0,0,0)

#if defined(__BORLANDC__) || defined(__CODEGEARC__)
#   undef BOOST_COMP_BORLAND
#   if defined(__CODEGEARC__)
#       define BOOST_COMP_BORLAND BOOST_PREDEF_MAKE_0X_VVRP(__CODEGEARC__)
#   else
#       define BOOST_COMP_BORLAND BOOST_PREDEF_MAKE_0X_VVRP(__BORLANDC__)
#   endif
#endif

#define BOOST_COMP_BORLAND_NAME "Borland C++"

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_COMP_BORLAND,BOOST_COMP_BORLAND_NAME)


#endif
