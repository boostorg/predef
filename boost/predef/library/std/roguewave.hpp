//~ Copyright Redshift Software, Inc. 2008
//~ Distributed under the Boost Software License, Version 1.0.
//~ (See accompanying file LICENSE_1_0.txt or copy at
//~ http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_PREDEF_LIBRARY_STD_ROGUEWAVE_HPP
#define BOOST_PREDEF_LIBRARY_STD_ROGUEWAVE_HPP

#include <boost/predef/version_number.hpp>
#include <boost/predef/detail/vrp.hpp>

#define BOOST_LIBSTD_RW BOOST_VERSION_NUMBER(0,0,0)

#if defined(__STD_RWCOMPILER_H__) || defined(_RWSTD_VER)
    #undef BOOST_LIBSTD_RW
    #if defined(_RWSTD_VER)
        #if _RWSTD_VER < 0x010000
            #define BOOST_LIBSTD_RW BOOST_PREDEF_VRP_FF_FF_F(_RWSTD_VER)
        #else
            #define BOOST_LIBSTD_RW BOOST_PREDEF_VRP_FF_FF_FF(_RWSTD_VER)
        #endif
    #else
        #define BOOST_LIBSTD_RW BOOST_VERSION_NUMBER(0,0,1)
    #endif
#endif

#endif
