//~ Copyright Redshift Software, Inc. 2008-2010
//~ Distributed under the Boost Software License, Version 1.0.
//~ (See accompanying file LICENSE_1_0.txt or copy at
//~ http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_PREDEF_LIBRARY_STD_DINKUMWARE_H
#define BOOST_PREDEF_LIBRARY_STD_DINKUMWARE_H

#include <boost/predef/version_number.h>
#include <boost/predef/detail/vrp.h>

#define BOOST_LIBSTD_DINKUMWARE BOOST_VERSION_NUMBER(0,0,0)

#if (defined(_YVALS) && !defined(__IBMCPP__)) || defined(_CPPLIB_VER)
    #undef BOOST_LIBSTD_DINKUMWARE
    #if defined(_CPPLIB_VER)
        #define BOOST_LIBSTD_DINKUMWARE BOOST_PREDEF_VRP_NN_NN(__CPPLIB_VER)
    #else
        #define BOOST_LIBSTD_DINKUMWARE BOOST_VERSION_NUMBER(0,0,1)
    #endif
#endif

#endif
