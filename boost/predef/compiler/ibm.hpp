//~ Copyright Redshift Software, Inc. 2008
//~ Distributed under the Boost Software License, Version 1.0.
//~ (See accompanying file LICENSE_1_0.txt or copy at
//~ http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_PREDEF_COMPILER_IBM_HPP
#define BOOST_PREDEF_COMPILER_IBM_HPP

#include <boost/predef/version_number.hpp>
#include <boost/predef/detail/vrp.hpp>

#define BOOST_CXX_IBM BOOST_VERSION_NUMBER(0,0,0)

#if defined(__IBMCPP__) || defined(__xlC__)
    #undef BOOST_CXX_IBM
    #if defined(__COMPILER_VER__)
        #define BOOST_CXX_IBM BOOST_PREDEF_VRP_F_FF_FFFF(__COMPILER_VER__)
    #elif defined(__xlC__)
        #define BOOST_CXX_IBM BOOST_PREDEF_VRP_FF_FF(__xlC__)
    #else
        #define BOOST_CXX_IBM BOOST_PREDEF_VRP_N_N_N(__IBMCPP__)
    #endif
#endif

#endif
