//~ Copyright Redshift Software, Inc. 2008
//~ Distributed under the Boost Software License, Version 1.0.
//~ (See accompanying file LICENSE_1_0.txt or copy at
//~ http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_PREDEF_ARCHITECTURE_SUPERH_HPP
#define BOOST_PREDEF_ARCHITECTURE_SUPERH_HPP

#include <boost/predef/version_number.hpp>
#include <boost/predef/detail/vrp.hpp>

#define BOOST_ARCHITECTURE_SH BOOST_VERSION_NUMBER(0,0,0)

#if defined(__sh__)
    #undef BOOST_ARCHITECTURE_SH
    #if defined(__sh1__)
        #define BOOST_ARCHITECTURE_SH BOOST_VERSION_NUMBER(1,0,0)
    #elif defined(__sh2__)
        #define BOOST_ARCHITECTURE_SH BOOST_VERSION_NUMBER(2,0,0)
    #elif defined(__sh3__) || defined(__SH3__)
        #define BOOST_ARCHITECTURE_SH BOOST_VERSION_NUMBER(3,0,0)
    #elif defined(__SH4__)
        #define BOOST_ARCHITECTURE_SH BOOST_VERSION_NUMBER(4,0,0)
    #elif defined(__SH5__)
        #define BOOST_ARCHITECTURE_SH BOOST_VERSION_NUMBER(5,0,0)
    #else
        #define BOOST_ARCHITECTURE_SH BOOST_VERSION_NUMBER(0,0,1)
    #endif
#endif

#endif
