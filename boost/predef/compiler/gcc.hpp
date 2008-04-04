//~ Copyright Redshift Software, Inc. 2008
//~ Distributed under the Boost Software License, Version 1.0.
//~ (See accompanying file LICENSE_1_0.txt or copy at
//~ http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_PREDEF_COMPILER_GCC_HPP
#define BOOST_PREDEF_COMPILER_GCC_HPP

#include <boost/predef/version_number.hpp>
#include <boost/predef/detail/vrp.hpp>

#define BOOST_CXX_GNUC BOOST_VERSION_NUMBER(0,0,0)

#if defined(__GNUC__)
    #undef BOOST_CXX_GNUC
    #if defined(__GNUC_PATCHLEVEL__)
        #define BOOST_CXX_GNUC \
            BOOST_VERSION_NUMBER(__GNUC__,__GNUC_MINOR__,__GNUC_PATCHLEVEL__)
    #else
        #define BOOST_CXX_GNUC \
            BOOST_VERSION_NUMBER(__GNUC__,__GNUC_MINOR__,0)
    #endif
#endif

#endif
