//~ Copyright Redshift Software, Inc. 2008
//~ Distributed under the Boost Software License, Version 1.0.
//~ (See accompanying file LICENSE_1_0.txt or copy at
//~ http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_PREDEF_COMPILER_MICROTEC_HPP
#define BOOST_PREDEF_COMPILER_MICROTEC_HPP

#include <boost/predef/version_number.hpp>
#include <boost/predef/detail/vrp.hpp>

#define BOOST_CXX_MRI BOOST_VERSION_NUMBER(0,0,0)

#if defined(_MRI)
    #undef BOOST_CXX_MRI
    #define BOOST_CXX_MRI BOOST_VERSION_NUMBER(0,0,1)
#endif

#endif
