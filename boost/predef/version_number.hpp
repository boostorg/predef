//~ Copyright Rene Rivera 2005
//~ Copyright Redshift Software, Inc. 2008
//~ Distributed under the Boost Software License, Version 1.0.
//~ (See accompanying file LICENSE_1_0.txt or copy at
//~ http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_PREDEF_VERSION_NUMBER_HPP
#define BOOST_PREDEF_VERSION_NUMBER_HPP

/// Defines standard version numbers, with these properties:
/// * Decimal base whole numbers in the range [0,major*10000000]
/// * The number range is designed to allow for a (2,2,5) triplet.
///   Which fits within a 32 bit value.
/// * Values can be specified in any base.
///
#define BOOST_VERSION_NUMBER(major,minor,patch) \
    ( ((major)*10000000) + ((minor)*100000) + (patch) )

#endif
