//~ Copyright Redshift Software, Inc. 2008
//~ Distributed under the Boost Software License, Version 1.0.
//~ (See accompanying file LICENSE_1_0.txt or copy at
//~ http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_PREDEF_ARCHITECTURE_PPC_HPP
#define BOOST_PREDEF_ARCHITECTURE_PPC_HPP

#include <boost/predef/version_number.hpp>
#include <boost/predef/detail/vrp.hpp>

#define BOOST_ARCHITECTURE_PPC BOOST_VERSION_NUMBER(0,0,0)

#if defined(__powerpc) || defined(__powerpc__) || \
    defined(__POWERPC__) || defined(__ppc__) || \
    defined(_M_PPC) || defined(_ARCH_PPC)
    #undef BOOST_ARCHITECTURE_PPC
    #if defined(__ppc601__) || defined(_ARCH_601)
        #define BOOST_ARCHITECTURE_PPC BOOST_VERSION_NUMBER(6,1,0)
    #elif defined(__ppc603__) || defined(_ARCH_603)
        #define BOOST_ARCHITECTURE_PPC BOOST_VERSION_NUMBER(6,3,0)
    #elif defined(__ppc604__) || defined(__ppc604__)
        #define BOOST_ARCHITECTURE_PPC BOOST_VERSION_NUMBER(6,4,0)
    #else
        #define BOOST_ARCHITECTURE_PPC BOOST_VERSION_NUMBER(0,0,1)
    #endif
#endif

#endif
