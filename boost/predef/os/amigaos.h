/*
Copyright Redshift Software, Inc. 2008-2010
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_OS_AMIGAOS_H
#define BOOST_PREDEF_OS_AMIGAOS_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

#define BOOST_OS_AMIGAOS BOOST_VERSION_NUMBER(0,0,0)

#if defined(AMIGA) || defined(__amigaos__)
    #undef BOOST_OS_AMIGAOS
    #define BOOST_OS_AMIGAOS BOOST_VERSION_NUMBER(0,0,1)
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_OS_AMIGAOS,"Amiga OS")

#endif
