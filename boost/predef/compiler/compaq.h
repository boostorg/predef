/*
Copyright Redshift Software, Inc. 2008-2011
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_COMPILER_COMPAQ_H
#define BOOST_PREDEF_COMPILER_COMPAQ_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_CXX_DEC`]

[@http://www.openvms.compaq.com/openvms/brochures/deccplus/ Compaq C/C++] compiler.
Version number available as major, minor, and patch.
 */

#define BOOST_CXX_DEC BOOST_VERSION_NUMBER(0,0,0)

#if defined(__DECC) || defined(__DECCXX)
    #undef BOOST_CXX_DEC
    #if defined(__DECCXX_VER)
        #define BOOST_CXX_DEC BOOST_PREDEF_MAKE_NN_NN_0_NN_00(__DECCXX_VER)
    #elif defined(__DECC_VER)
        #define BOOST_CXX_DEC BOOST_PREDEF_MAKE_NN_NN_0_NN_00(__DECC_VER)
    #else
    #endif
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_CXX_DEC,"Compaq C/C++")

#endif
