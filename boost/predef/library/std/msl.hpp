//~ Copyright Redshift Software, Inc. 2008
//~ Distributed under the Boost Software License, Version 1.0.
//~ (See accompanying file LICENSE_1_0.txt or copy at
//~ http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_PREDEF_LIBRARY_STD_MSL_HPP
#define BOOST_PREDEF_LIBRARY_STD_MSL_HPP

#include <boost/predef/version_number.hpp>
#include <boost/predef/detail/vrp.hpp>

#define BOOST_LIBSTD_MSL BOOST_VERSION_NUMBER(0,0,0)

#if defined(__MSL_CPP__) || defined(__MSL__)
    #undef BOOST_LIBSTD_MSL
    #if defined(__MSL_CPP__)
        #define BOOST_LIBSTD_MSL BOOST_PREDEF_VRP_F_F_FF(__MSL_CPP__)
    #else
        #define BOOST_LIBSTD_MSL BOOST_PREDEF_VRP_F_F_FF(__MSL__)
    #endif
#endif

#endif
