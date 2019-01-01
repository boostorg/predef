# Copyright 2018 Mike Dev
# Distributed under the Boost Software License, Version 1.0.
# See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
#
# NOTE: CMake support for Boost.Predef is currently experimental at best
#       and the interface is likely to change in the future
#
# This file provides mininmal cmake support (no unit-tests,
# no installation) for integration into a "host" cmake project
# via the "add_subdirectory( <path-to-boost-predef> )" command.
#
# Other cmake targets can then use the public target name
# "Boost::predef" in order to express their dependency
# on this library. I.e:
#
# target_link_libraries( <my-exe/lib> PUBLIC Boost::predef )
#

cmake_minimum_required( VERSION 3.5 )
project( BoostPredef )

add_library( boost_predef INTERFACE )
target_include_directories( boost_predef INTERFACE include )

add_library( Boost::predef ALIAS boost_predef )

