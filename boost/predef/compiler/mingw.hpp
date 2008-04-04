//~ Copyright Redshift Software, Inc. 2008
//~ Distributed under the Boost Software License, Version 1.0.
//~ (See accompanying file LICENSE_1_0.txt or copy at
//~ http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_PREDEF_COMPILER_MINGW_HPP
#define BOOST_PREDEF_COMPILER_MINGW_HPP

#include <boost/predef/version_number.hpp>
#include <boost/predef/detail/vrp.hpp>

#define BOOST_CXX_MINGW BOOST_VERSION_NUMBER(0,0,0)

#if defined(__MINGW32__)
    #include <_mingw.h>
    #undef BOOST_CXX_MINGW
    #define BOOST_CXX_MINGW \
        BOOST_VERSION_NUMBER(__MINGW32_MAJOR_VERSION,__MINGW32_MINOR_VERSION,0)
#endif

#endif
