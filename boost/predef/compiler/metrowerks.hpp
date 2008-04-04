//~ Copyright Redshift Software, Inc. 2008
//~ Distributed under the Boost Software License, Version 1.0.
//~ (See accompanying file LICENSE_1_0.txt or copy at
//~ http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_PREDEF_COMPILER_METROWERKS_HPP
#define BOOST_PREDEF_COMPILER_METROWERKS_HPP

#include <boost/predef/version_number.hpp>
#include <boost/predef/detail/vrp.hpp>

#define BOOST_CXX_MWERKS BOOST_VERSION_NUMBER(0,0,0)

#if defined(__MWERKS__)
    #undef BOOST_CXX_MWERKS
    #if __MWERKS__ == 0x3000
        #define BOOST_CXX_MWERKS BOOST_VERSION_NUMBER(8,0,0)
    #elif __MWERKS__ == 0x3001
        #define BOOST_CXX_MWERKS BOOST_VERSION_NUMBER(8,1,0)
    #elif __MWERKS__ == 0x3002
        #define BOOST_CXX_MWERKS BOOST_VERSION_NUMBER(8,2,0)
    #elif __MWERKS__ == 0x3003
        #define BOOST_CXX_MWERKS BOOST_VERSION_NUMBER(8,3,0)
    #elif __MWERKS__ == 0x3200
        #define BOOST_CXX_MWERKS BOOST_VERSION_NUMBER(9,0,0)
    #elif __MWERKS__ == 0x3201
        #define BOOST_CXX_MWERKS BOOST_VERSION_NUMBER(9,1,0)
    #elif __MWERKS__ == 0x3202
        #define BOOST_CXX_MWERKS BOOST_VERSION_NUMBER(9,2,0)
    #elif __MWERKS__ == 0x3204 // note the "skip": 04->9.3
        #define BOOST_CXX_MWERKS BOOST_VERSION_NUMBER(9,3,0)
    #elif __MWERKS__ == 0x3205
        #define BOOST_CXX_MWERKS BOOST_VERSION_NUMBER(9,4,0)
    #elif __MWERKS__ == 0x3206
        #define BOOST_CXX_MWERKS BOOST_VERSION_NUMBER(9,5,0)
    #else
        #define BOOST_CXX_MWERKS BOOST_PREDEF_VRP_F_F_FF(__MWERKS__)
    #endif
#endif

#endif
