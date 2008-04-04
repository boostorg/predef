//~ Copyright Redshift Software, Inc. 2008
//~ Distributed under the Boost Software License, Version 1.0.
//~ (See accompanying file LICENSE_1_0.txt or copy at
//~ http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_PREDEF_ARCHITECTURE_SPARC_HPP
#define BOOST_PREDEF_ARCHITECTURE_SPARC_HPP

#include <boost/predef/version_number.hpp>
#include <boost/predef/detail/vrp.hpp>

#define BOOST_ARCHITECTURE_SPARC BOOST_VERSION_NUMBER(0,0,0)

#if defined(__sparc__) || defined(__sparc)
    #undef BOOST_ARCHITECTURE_SPARC
    #if defined(__sparcv8)
        #define BOOST_ARCHITECTURE_SPARC BOOST_VERSION_NUMBER(8,0,0)
    #elif defined(__sparcv9)
        #define BOOST_ARCHITECTURE_SPARC BOOST_VERSION_NUMBER(9,0,0)
    #else
        #define BOOST_ARCHITECTURE_SPARC BOOST_VERSION_NUMBER(0,0,1)
    #endif
#endif

#endif
