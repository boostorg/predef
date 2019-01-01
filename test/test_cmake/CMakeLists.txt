# Copyright 2018 Mike Dev
# Distributed under the Boost Software License, Version 1.0.
# See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
#
# NOTE: This does NOT run the unit tests for Boost.Predef.
#       It only tests, if the CMakeLists.txt file in predef's
#       root directory works as expected (i.e. it provides the
#       target Boost::predef which in turn provides the
#       correct include directory )

cmake_minimum_required( VERSION 3.5 )

project( BoostPredefCMakeSelfTest )

# Process cmake file at root of library and use ${CMAKE_CURRENT_BINARY_DIR}/libs/boost_predef as workspace
add_subdirectory( ../.. ${CMAKE_CURRENT_BINARY_DIR}/libs/boost_predef )

add_executable( boost_predef_cmake_test_prj main.cpp )

target_link_libraries( boost_predef_cmake_test_prj Boost::predef )

