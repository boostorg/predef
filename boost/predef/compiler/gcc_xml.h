/*
Copyright Redshift Software, Inc. 2008-2012
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_COMPILER_GCC_XML_H
#define BOOST_PREDEF_COMPILER_GCC_XML_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_COMP_GCCXML`]

[@http://en.wikipedia.org/wiki/XXX GCC XML] compiler.

[table
    [[__predef_symbol__] [__predef_version__]]

    [[``] [__predef_detection__]]

    [[``] [V.R.P]]
    ]
 */

#define BOOST_COMP_GCCXML BOOST_VERSION_NUMBER(0,0,0)

#if defined(__GCCXML__)
#   undef BOOST_COMP_GCCXML
#   define BOOST_COMP_GCCXML BOOST_VERSION_NUMBER(0,0,1)
#endif

#define BOOST_COMP_GCCXML_NAME "GCC XML"

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_COMP_GCCXML,BOOST_COMP_GCCXML_NAME)


#endif
