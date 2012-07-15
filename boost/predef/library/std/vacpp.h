/*
Copyright Redshift Software, Inc. 2008-2012
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_LIBRARY_STD_VACPP_H
#define BOOST_PREDEF_LIBRARY_STD_VACPP_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_LIB_STD_IBM`]

[@http://www.ibm.com/software/awdtools/xlcpp/ IBM VACPP Standard C++] library.

[table
    [[__predef_symbol__] [__predef_version__]]

    [[``] [__predef_detection__]]

    [[``] [V.R.P]]
    ]
 */

#define BOOST_LIB_STD_IBM BOOST_VERSION_NUMBER(0,0,0)

#if defined(__IBMCPP__)
#   undef BOOST_LIB_STD_IBM
#   define BOOST_LIB_STD_IBM BOOST_VERSION_NUMBER(0,0,1)
#endif

#define BOOST_LIB_STD_IBM_NAME "IBM VACPP"

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_LIB_STD_IBM,BOOST_LIB_STD_IBM_NAME)


#endif
