//~ Copyright Redshift Software, Inc. 2008
//~ Distributed under the Boost Software License, Version 1.0.
//~ (See accompanying file LICENSE_1_0.txt or copy at
//~ http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_PREDEF_COMPILER__HPP
#define BOOST_PREDEF_COMPILER__HPP

#include <boost/predef/version_number.hpp>
#include <boost/predef/detail/vrp.hpp>

#define BOOST_OS_UNIX BOOST_VERSION_NUMBER(0,0,0)

#if defined(unix) || defined(__unix) || \
    defined(_XOPEN_SOURCE) || defined(_POSIX_SOURCE)
    #undef BOOST_OS_UNIX
    #define BOOST_OS_UNIX BOOST_VERSION_NUMBER(0,0,1)
#endif

#endif
