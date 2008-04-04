//~ Copyright Redshift Software, Inc. 2008
//~ Distributed under the Boost Software License, Version 1.0.
//~ (See accompanying file LICENSE_1_0.txt or copy at
//~ http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_PREDEF_ARCHITECTURE_M68K_HPP
#define BOOST_PREDEF_ARCHITECTURE_M68K_HPP

#include <boost/predef/version_number.hpp>
#include <boost/predef/detail/vrp.hpp>

#define BOOST_ARCHITECTURE_M68K BOOST_VERSION_NUMBER(0,0,0)

#if defined(__m68k__) || defined(M68000)
    #undef BOOST_ARCHITECTURE_M68K
    #if defined(__mc68000__)
        #define BOOST_ARCHITECTURE_M68K BOOST_VERSION_NUMBER(0,0,1)
    #elif defined(__mc68010__)
        #define BOOST_ARCHITECTURE_M68K BOOST_VERSION_NUMBER(1,0,0)
    #elif defined(__mc68020__)
        #define BOOST_ARCHITECTURE_M68K BOOST_VERSION_NUMBER(2,0,0)
    #elif defined(__mc68030__)
        #define BOOST_ARCHITECTURE_M68K BOOST_VERSION_NUMBER(3,0,0)
    #elif defined(__mc68040__)
        #define BOOST_ARCHITECTURE_M68K BOOST_VERSION_NUMBER(4,0,0)
    #elif defined(__mc68060__)
        #define BOOST_ARCHITECTURE_M68K BOOST_VERSION_NUMBER(6,0,0)
    #else
        #define BOOST_ARCHITECTURE_M68K BOOST_VERSION_NUMBER(0,0,1)
    #endif
#endif

#endif
