# Copyright Mike Dev 2018
# Copyright Rene Rivera 2018
# Distributed under the Boost Software License, Version 1.0.
# See accompanying file LICENSE_1_0.txt or copy at
# http://www.boost.org/LICENSE_1_0.txt

# NOTE:
#   CMake support for Boost.Predef is currently experimental at best and the
#   interface is likely to change in the future
#
# This file provides minimal cmake support (no unit-tests,
# no installation) for integration into a "host" cmake project
# via the "add_subdirectory( <path-to-boost-predef> )" command.
#
# Other cmake targets can then use the public target name
# "Boost::predef" in order to express their dependency
# on this library. I.e:
#
# target_link_libraries( <my-exe/lib> PUBLIC Boost::predef )

# Only need the basic minimum of project, add_library, and
# target_include_directories commands.
# We support 3.0, but prefer 3.16 policies and behavior
cmake_minimum_required( VERSION 3.0...3.16 )

# Keep VERSION empty when outside the superproject, as that's a pita to
# keep up to date with the version header. And don't set LANGUAGES as we
# are multi-language and header only, so it's irrelevant.
project( BoostPredef VERSION "${BOOST_SUPERPROJECT_VERSION}" )

# Simple INTERFACE, and header only, library target.
add_library( boost_predef INTERFACE )

# The only usage requirement is include dir for consumers.
target_include_directories( boost_predef INTERFACE include )

# Add an alias to be compatible with consumers that may have used the
# FindBoost script.
add_library( Boost::predef ALIAS boost_predef )

if(BOOST_SUPERPROJECT_VERSION)

  include(BoostInstall)
  boost_install(TARGETS boost_predef HEADER_DIRECTORY include/)

endif()
