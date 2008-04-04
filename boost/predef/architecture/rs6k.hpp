//~ Copyright Redshift Software, Inc. 2008
//~ Distributed under the Boost Software License, Version 1.0.
//~ (See accompanying file LICENSE_1_0.txt or copy at
//~ http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_PREDEF_ARCHITECTURE_RS6K_HPP
#define BOOST_PREDEF_ARCHITECTURE_RS6K_HPP

#include <boost/predef/version_number.hpp>
#include <boost/predef/detail/vrp.hpp>

#define BOOST_ARCHITECTURE_RS6000 BOOST_VERSION_NUMBER(0,0,0)

#if defined(__THW_RS6000) || defined(_IBMR2) || \
    defined(_POWER) || defined(_ARCH_PWR) || \
    defined(_ARCH_PWR2)
    #undef BOOST_ARCHITECTURE_RS6000
    #define BOOST_ARCHITECTURE_RS6000 BOOST_VERSION_NUMBER(0,0,1)
#endif

#define BOOST_ARCHITECTURE_PWR BOOST_ARCHITECTURE_RS6000

#endif
