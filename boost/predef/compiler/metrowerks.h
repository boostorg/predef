/*
Copyright Redshift Software, Inc. 2008-2011
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_COMPILER_METROWERKS_H
#define BOOST_PREDEF_COMPILER_METROWERKS_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_CXX_MWERKS`]

[@http://en.wikipedia.org/wiki/CodeWarrior Metrowerks CodeWarrior] compiler.
Version number available as major, minor, and patch.
 */

#define BOOST_CXX_MWERKS BOOST_VERSION_NUMBER(0,0,0)

#if defined(__MWERKS__) || defined(__CWCC__)
    #undef BOOST_CXX_MWERKS
    #if defined(__CWCC__)
        #define BOOST_CXX_MWERKS BOOST_PREDEF_MAKE_F_F_FF(__CWCC__)
    #elif (__MWERKS__ >= 0x4200)
        #define BOOST_CXX_MWERKS BOOST_PREDEF_MAKE_F_F_FF(__MWERKS__)
    #elif (__MWERKS__ >= 0x3204) // note the "skip": 04->9.3
        #define BOOST_CXX_MWERKS BOOST_VERSION_NUMBER(9,(__MWERKS__)%100-1,0)
    #elif (__MWERKS__ >= 0x3200)
        #define BOOST_CXX_MWERKS BOOST_VERSION_NUMBER(9,(__MWERKS__)%100,0)
    #elif (__MWERKS__ >= 0x3000)
        #define BOOST_CXX_MWERKS BOOST_VERSION_NUMBER(8,(__MWERKS__)%100,0)
    #else
        #define BOOST_CXX_MWERKS BOOST_VERSION_NUMBER(0,0,1)
    #endif
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_CXX_MWERKS,"Metrowerks CodeWarrior")

#endif
