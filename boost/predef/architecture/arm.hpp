//~ Copyright Redshift Software, Inc. 2008
//~ Distributed under the Boost Software License, Version 1.0.
//~ (See accompanying file LICENSE_1_0.txt or copy at
//~ http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_PREDEF_ARCHITECTURE_ARM_HPP
#define BOOST_PREDEF_ARCHITECTURE_ARM_HPP

#include <boost/predef/version_number.hpp>
#include <boost/predef/detail/vrp.hpp>

#define BOOST_ARCHITECTURE_ARM BOOST_VERSION_NUMBER(0,0,0)

#if defined(__arm__) || defined(__thumb__) || \
    defined(__TARGET_ARCH_ARM) || defined(__TARGET_ARCH_THUMB)
    #undef BOOST_ARCHITECTURE_ARM
    #if defined(__TARGET_ARCH_ARM)
        #define BOOST_ARCHITECTURE_ARM BOOST_VERSION_NUMBER(__TARGET_ARCH_ARM,0,0)
    #elif defined(__TARGET_ARCH_THUMB)
        #define BOOST_ARCHITECTURE_ARM BOOST_VERSION_NUMBER(__TARGET_ARCH_THUMB,0,0)
    #else
        #define BOOST_ARCHITECTURE_ARM BOOST_VERSION_NUMBER(0,0,1)
    #endif
#endif

#endif
