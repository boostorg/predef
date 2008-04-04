//~ Copyright Redshift Software, Inc. 2008
//~ Distributed under the Boost Software License, Version 1.0.
//~ (See accompanying file LICENSE_1_0.txt or copy at
//~ http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_PREDEF_COMPILER_DIAB_HPP
#define BOOST_PREDEF_COMPILER_BORLAND_HPP

#include <boost/predef/version_number.hpp>
#include <boost/predef/detail/vrp.hpp>

#define BOOST_CXX_DIAB BOOST_VERSION_NUMBER(0,0,0)

#if defined(__DCC__)
    #undef BOOST_CXX_DIAB
    #define BOOST_CXX_DIAB BOOST_PREDEF_VRP_N_N_NN(__VERSION_NUMBER__)
#endif

#endif
