//~ Copyright Redshift Software, Inc. 2008
//~ Distributed under the Boost Software License, Version 1.0.
//~ (See accompanying file LICENSE_1_0.txt or copy at
//~ http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_PREDEF_COMPILER_INTEL_HPP
#define BOOST_PREDEF_COMPILER_INTEL_HPP

#include <boost/predef/version_number.hpp>
#include <boost/predef/detail/vrp.hpp>

#define BOOST_CXX_INTEL BOOST_VERSION_NUMBER(0,0,0)

#if defined(__INTEL_COMPILER) || defined(__ICL) || defined(__ICC) || \
    defined(__ECC)
    #undef BOOST_CXX_INTEL
    #define BOOST_CXX_INTEL BOOST_PREDEF_VRP_N_N_N(__INTEL_COMPILER)
#endif

#endif
