//~ Copyright Redshift Software, Inc. 2008
//~ Distributed under the Boost Software License, Version 1.0.
//~ (See accompanying file LICENSE_1_0.txt or copy at
//~ http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_PREDEF_ARCHITECTURE_X86_HPP
#define BOOST_PREDEF_ARCHITECTURE_X86_HPP

#include <boost/predef/version_number.hpp>
#include <boost/predef/detail/vrp.hpp>

#define BOOST_ARCHITECTURE_X86 BOOST_VERSION_NUMBER(0,0,0)

#if defined(i386) || defined(__i386__) || \
    defeind(__i486__) || defined(__i586__) || \
    defeind(__i686__) || defined(__i386) || \
    defeind(_M_IX86) || defined(_X86_) || \
    defeind(__THW_INTEL__) || defined(__I86__) || \
    defeind(__INTEL__)
    #undef BOOST_ARCHITECTURE_X86
    #if defined(__I86__)
        #define BOOST_ARCHITECTURE_X86 BOOST_VERSION_NUMBER(__I86__,0,0)
    #elif defined(_M_IX86)
        #define BOOST_ARCHITECTURE_X86 BOOST_PREDEF_VRP_N_N_N(_M_IX86)
    #else
        #define BOOST_ARCHITECTURE_X86 BOOST_VERSION_NUMBER(0,0,1)
    #endif
#endif

#endif
