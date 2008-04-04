//~ Copyright Redshift Software, Inc. 2008
//~ Distributed under the Boost Software License, Version 1.0.
//~ (See accompanying file LICENSE_1_0.txt or copy at
//~ http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_PREDEF_COMPILER__HPP
#define BOOST_PREDEF_COMPILER__HPP

#include <boost/predef/version_number.hpp>
#include <boost/predef/detail/vrp.hpp>

#define BOOST_OS_QNX BOOST_VERSION_NUMBER(0,0,0)

#if defined(__QNX__) || defined(__QNXNTO__)
    #undef BOOST_OS_QNX
    #if defined(_NTO_VERSION)
        #define BOOST_OS_QNX BOOST_PREDEF_VRP_NN_NN(_NTO_VERSION)
    #elif defined(__QNX__)
        #define BOOST_OS_QNX BOOST_VERSION_NUMBER(4,0,0)
    #else
        #define BOOST_OS_QNX BOOST_VERSION_NUMBER(0,0,1)
    #endif
#endif

#endif
