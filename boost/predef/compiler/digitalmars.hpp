//~ Copyright Redshift Software, Inc. 2008
//~ Distributed under the Boost Software License, Version 1.0.
//~ (See accompanying file LICENSE_1_0.txt or copy at
//~ http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_PREDEF_COMPILER_DIGITALMARS_HPP
#define BOOST_PREDEF_COMPILER_DIGITALMARS_HPP

#include <boost/predef/version_number.hpp>
#include <boost/predef/detail/vrp.hpp>

#define BOOST_CXX_DMC BOOST_VERSION_NUMBER(0,0,0)

#if defined(__DMC__)
    #undef BOOST_CXX_DMC
    #define BOOST_CXX_DMC BOOST_PREDEF_VRP_F_F_F(__DMC__)
#endif

#endif
