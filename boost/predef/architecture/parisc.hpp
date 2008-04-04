//~ Copyright Redshift Software, Inc. 2008
//~ Distributed under the Boost Software License, Version 1.0.
//~ (See accompanying file LICENSE_1_0.txt or copy at
//~ http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_PREDEF_ARCHITECTURE_PARISC_HPP
#define BOOST_PREDEF_ARCHITECTURE_PARISC_HPP

#include <boost/predef/version_number.hpp>
#include <boost/predef/detail/vrp.hpp>

#define BOOST_ARCHITECTURE_PARISC BOOST_VERSION_NUMBER(0,0,0)

#if defined(__hppa__) || defined(__hppa)
    #undef BOOST_ARCHITECTURE_PARISC
    #if defined(_PA_RISC1_0)
        #define BOOST_ARCHITECTURE_PARISC BOOST_VERSION_NUMBER(1,0,0)
    #elif defined(_PA_RISC1_1)
        #define BOOST_ARCHITECTURE_PARISC BOOST_VERSION_NUMBER(1,1,0)
    #elif defined(_PA_RISC2_0)
        #define BOOST_ARCHITECTURE_PARISC BOOST_VERSION_NUMBER(2,0,0)
    #else
        #define BOOST_ARCHITECTURE_PARISC BOOST_VERSION_NUMBER(0,0,1)
    #endif
#endif

#endif
