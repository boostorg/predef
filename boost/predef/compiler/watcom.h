/*
Copyright Redshift Software, Inc. 2008-2010
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_COMPILER_WATCOM_H
#define BOOST_PREDEF_COMPILER_WATCOM_H

#include <boost/predef/version_number.h>
#include <boost/predef/detail/vrp.h>

#define BOOST_CXX_WATCOM BOOST_VERSION_NUMBER(0,0,0)

#if defined(__WATCOMC__)
    #undef BOOST_CXX_WATCOM
    #define BOOST_CXX_WATCOM BOOST_PREDEF_VRP_NN_NN(__WATCOMC__)
#endif

#endif
