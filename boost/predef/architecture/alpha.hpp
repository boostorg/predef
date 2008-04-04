//~ Copyright Redshift Software, Inc. 2008
//~ Distributed under the Boost Software License, Version 1.0.
//~ (See accompanying file LICENSE_1_0.txt or copy at
//~ http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_PREDEF_ARCHITECTURE_ALPHA_HPP
#define BOOST_PREDEF_ARCHITECTURE_ALPHA_HPP

#include <boost/predef/version_number.hpp>
#include <boost/predef/detail/vrp.hpp>

#define BOOST_ARCHITECTURE_ALPHA BOOST_VERSION_NUMBER(0,0,0)

#if defined(__alpha__) || defined(__alpha) || \
    defined(_M_ALPHA)
    #undef BOOST_ARCHITECTURE_ALPHA
    #if defined(__alpha_ev4__)
        #define BOOST_ARCHITECTURE_ALPHA BOOST_VERSION_NUMBER(4,0,0)
    #elif defined(__alpha_ev5__)
        #define BOOST_ARCHITECTURE_ALPHA BOOST_VERSION_NUMBER(5,0,0)
    #elif defined(__alpha_ev6__)
        #define BOOST_ARCHITECTURE_ALPHA BOOST_VERSION_NUMBER(6,0,0)
    #else
        #define BOOST_ARCHITECTURE_ALPHA BOOST_VERSION_NUMBER(0,0,1)
    #endif
#endif

#endif
