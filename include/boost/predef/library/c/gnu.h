/*
Copyright Redshift Software, Inc. 2008-2012
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_LIBRARY_C_GNU_H
#define BOOST_PREDEF_LIBRARY_C_GNU_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

#if defined(__STDC__)
#include <stddef.h>
#elif defined(__cplusplus)
#include <cstddef>
#endif

/*`
[heading `BOOST_LIB_C_GNU`]

[@http://en.wikipedia.org/wiki/Glibc GNU glibc] Standard C library.
Version number available as major, and minor.

[table
    [[__predef_symbol__] [__predef_version__]]

    [[`____`] [__predef_detection__]]

    [[`____`] [V.R.P]]
    ]
 */

#define BOOST_LIB_C_GNU BOOST_VERSION_NUMBER(0,0,0)

#if defined(__GLIBC__) || defined(__GNU_LIBRARY__)
#   undef BOOST_LIB_C_GNU
#   if defined(__GLIBC__)
#       define BOOST_LIB_C_GNU \
            BOOST_VERSION_NUMBER(__GLIBC__,__GLIBC_MINOR__,0)
#   else
#       define BOOST_LIB_C_GNU \
            BOOST_VERSION_NUMBER(__GNU_LIBRARY__,__GNU_LIBRARY_MINOR__,0)
#   endif
#endif

#define BOOST_LIB_C_GNU_NAME "GNU"

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_LIB_C_GNU,BOOST_LIB_C_GNU_NAME)


#endif
