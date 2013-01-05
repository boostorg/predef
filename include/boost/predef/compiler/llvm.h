/*
Copyright Redshift Software, Inc. 2008-2012
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_COMPILER_LLVM_H
#define BOOST_PREDEF_COMPILER_LLVM_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_COMP_LLVM`]

[@http://en.wikipedia.org/wiki/LLVM LLVM] compiler.

[table
    [[__predef_symbol__] [__predef_version__]]

    [[`____`] [__predef_detection__]]

    [[`____`] [V.R.P]]
    ]
 */

#define BOOST_COMP_LLVM BOOST_VERSION_NUMBER(0,0,0)

#if defined(__llvm__)
#   undef BOOST_COMP_LLVM
#   define BOOST_COMP_LLVM BOOST_VERSION_NUMBER(0,0,1)
#endif

#define BOOST_COMP_LLVM_NAME "LLVM"

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_COMP_LLVM,BOOST_COMP_LLVM_NAME)


#endif
