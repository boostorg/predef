/*
Copyright Redshift Software, Inc. 2008-2010
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_COMPILER_GCC_H
#define BOOST_PREDEF_COMPILER_GCC_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

#define BOOST_CXX_GNUC BOOST_VERSION_NUMBER(0,0,0)

#if defined(__GNUC__)
    #undef BOOST_CXX_GNUC
    #if defined(__GNUC_PATCHLEVEL__)
        #define BOOST_CXX_GNUC \
            BOOST_VERSION_NUMBER(__GNUC__,__GNUC_MINOR__,__GNUC_PATCHLEVEL__)
    #else
        #define BOOST_CXX_GNUC \
            BOOST_VERSION_NUMBER(__GNUC__,__GNUC_MINOR__,0)
    #endif
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_CXX_GNUC,"GNUC")

#endif
