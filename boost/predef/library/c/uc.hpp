//~ Copyright Redshift Software, Inc. 2008
//~ Distributed under the Boost Software License, Version 1.0.
//~ (See accompanying file LICENSE_1_0.txt or copy at
//~ http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_PREDEF_LIBRARY_C_UC_HPP
#define BOOST_PREDEF_LIBRARY_C_UC_HPP

#include <boost/predef/version_number.hpp>
#include <boost/predef/detail/vrp.hpp>

#define BOOST_LIBC_UC BOOST_VERSION_NUMBER(0,0,0)

#if defined(__UCLIBC__)
    #undef BOOST_LIBC_UC
    #define BOOST_LIBC_UC BOOST_VERSION_NUMBER(\
        __UCLIBC_MAJOR__,__UCLIBC_MINOR__,__UCLIBC_SUBLEVEL__)
#endif

#endif
