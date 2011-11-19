/*
Copyright Redshift Software, Inc. 2008-2010
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_COMPILER_EDG_H
#define BOOST_PREDEF_COMPILER_EDG_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

#define BOOST_CXX_EDG BOOST_VERSION_NUMBER(0,0,0)

#if defined(__EDG__)
    #undef BOOST_CXX_EDG
    #define BOOST_CXX_EDG BOOST_PREDEF_MAKE_N_N_N(__EDG_VERSION__)
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_CXX_EDG,"EDG")

#endif
