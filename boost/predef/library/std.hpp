//~ Copyright Redshift Software, Inc. 2008
//~ Copyright John Maddock 2001-2003
//~ Copyright Jens Maurer 2001-2002
//~ Distributed under the Boost Software License, Version 1.0.
//~ (See accompanying file LICENSE_1_0.txt or copy at
//~ http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_PREDEF_LIBRARY_STD_HPP
#define BOOST_PREDEF_LIBRARY_STD_HPP

// We need to include an STD header to gives us the context
// of which library we are using. The "smallest" code-wise header
// seems to be <exception>. Boost uses <utility> but as far
// as I can tell (RR) it's not a standalone header in most
// implementations. Using <exception> also has the benefit of
// being available in EC++, so we get a chance to make this work
// for embeded users. And since it's not a header impacted by TR1
// there's no magic needed for inclusion in the face of the
// Boost.TR1 library.
#include <exception>

// STLPort library; this _must_ come first, otherwise since
// STLport typically sits on top of some other library, we
// can end up detecting that first rather than STLport:
#include <boost/predef/library/std/stlport.hpp>

// The rest in apha order, except for Dinkumware.
#include <boost/predef/library/std/libcomo.hpp>
#include <boost/predef/library/std/modena.hpp>
#include <boost/predef/library/std/msl.hpp>
#include <boost/predef/library/std/roguewave.hpp>
#include <boost/predef/library/std/sgi.hpp>
#include <boost/predef/library/std/stdcpp3.hpp>
#include <boost/predef/library/std/vacpp.hpp>

// Dinkumware Library (this has to appear after any possible replacement libraries):
#include <boost/predef/library/std/dinkumware.hpp>

#endif
