/*
Copyright Redshift Software, Inc. 2008-2010
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_COMPILER_EKOPATH_H
#define BOOST_PREDEF_COMPILER_EKOPATH_H

#include <boost/predef/version_number.h>
#include <boost/predef/detail/vrp.h>

#define BOOST_CXX_PATH BOOST_VERSION_NUMBER(0,0,0)

#if defined(__PATHCC__)
    #undef BOOST_CXX_PATH
    #define BOOST_CXX_PATH \
        BOOST_VERSION_NUMBER(__PATHCC__,__PATHCC_MINOR__,__PATHCC_PATCHLEVEL__)
#endif

#endif
