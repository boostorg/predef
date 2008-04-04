//~ Copyright Redshift Software, Inc. 2008
//~ Distributed under the Boost Software License, Version 1.0.
//~ (See accompanying file LICENSE_1_0.txt or copy at
//~ http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_PREDEF_COMPILER_AIX_HPP
#define BOOST_PREDEF_COMPILER_AIX_HPP

#include <boost/predef/version_number.hpp>
#include <boost/predef/detail/vrp.hpp>

#define BOOST_OS_AIX BOOST_VERSION_NUMBER(0,0,0)

#if defined(_AIX) || defined(__TOS_AIX__)
    #undef BOOST_OS_AIX
    #if defined(_AIX43)
        #define BOOST_OS_AIX BOOST_VERSION_NUMBER(4,3,0)
    #elif defined(_AIX41)
        #define BOOST_OS_AIX BOOST_VERSION_NUMBER(4,1,0)
    #elif defined(_AIX32)
        #define BOOST_OS_AIX BOOST_VERSION_NUMBER(3,2,0)
    #elif defined(_AIX3)
        #define BOOST_OS_AIX BOOST_VERSION_NUMBER(3,0,0)
    #else
        #define BOOST_OS_AIX BOOST_VERSION_NUMBER(0,0,1)
    #endif
#endif

#endif
