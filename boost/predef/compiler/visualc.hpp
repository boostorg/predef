//~ Copyright Redshift Software, Inc. 2008
//~ Distributed under the Boost Software License, Version 1.0.
//~ (See accompanying file LICENSE_1_0.txt or copy at
//~ http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_PREDEF_COMPILER_VISUALC_HPP
#define BOOST_PREDEF_COMPILER_VISUALC_HPP

#include <boost/predef/version_number.hpp>
#include <boost/predef/detail/vrp.hpp>

#define BOOST_CXX_MSVC BOOST_VERSION_NUMBER(0,0,0)

#if defined(_MSC_VER)
    #undef BOOST_CXX_MSVC
    #if !defined (_MSC_FULL_VER)
        #define BOOST_CXX_MSVC_BUILD 0
    #else
        // how many digits does the build number have?
        //
        #if _MSC_FULL_VER / 10000 == _MSC_VER
            // four digits
            #define BOOST_CXX_MSVC_BUILD (_MSC_FULL_VER % 10000)
        #elif _MSC_FULL_VER / 100000 == _MSC_VER
            // five digits
            #define BOOST_CXX_MSVC_BUILD (_MSC_FULL_VER % 100000)
        #else
            #error "Cannot determine build number from _MSC_FULL_VER"
        #endif
    #endif
    #define BOOST_CXX_MSVC BOOST_VERSION_NUMBER(\
        _MSC_VER/100-6,\
        _MSC_VER%100,\
        BOOST_CXX_MSVC_BUILD)
#endif

#endif
