/*
Copyright Redshift Software, Inc. 2008-2012
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_COMPILER_PGI_H
#define BOOST_PREDEF_COMPILER_PGI_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_COMP_PGI`]

[@http://en.wikipedia.org/wiki/The_Portland_Group Portland Group C/C++] compiler.

[table
    [[__predef_symbol__] [__predef_version__]]

    [[``] [__predef_detection__]]

    [[``] [V.R.P]]
    ]
 */

#define BOOST_COMP_PGI BOOST_VERSION_NUMBER(0,0,0)

#if defined(__PGI)
#   undef BOOST_COMP_PGI
#   if defined(__PGIC__) && defined(__PGIC_MINOR__) && defined(__PGIC_PATCHLEVEL__)
#       define BOOST_COMP_PGI BOOST_VERSION_NUMBER(__PGIC__,__PGIC_MINOR__,__PGIC_PATCHLEVEL__)
#   else
#       define BOOST_COMP_PGI BOOST_VERSION_NUMBER(0,0,1)
#   endif
#endif

#define BOOST_COMP_PGI_NAME "Portland Group C/C++"

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_COMP_PGI,BOOST_COMP_PGI_NAME)


#endif
