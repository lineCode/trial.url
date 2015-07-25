###############################################################################
#
# Copyright (C) 2015 Bjorn Reese <breese@users.sourceforge.net>
#
# Distributed under the Boost Software License, Version 1.0.
#    (See accompanying file LICENSE_1_0.txt or copy at
#          http://www.boost.org/LICENSE_1_0.txt)
#
###############################################################################

cmake_minimum_required(VERSION 2.8)
project(trial.uri)

set(TRIAL_URL_BUILD_DIR ${CMAKE_BINARY_DIR})
set(TRIAL_URL_ROOT ${CMAKE_CURRENT_SOURCE_DIR})
set(LIBRARY_OUTPUT_PATH ${TRIAL_URL_BUILD_DIR}/lib)
set(EXECUTABLE_OUTPUT_PATH ${TRIAL_URL_BUILD_DIR}/bin)

add_definitions(-g)
add_definitions(-Wall)
#add_definitions(-std=c++11)

###############################################################################
# Boost package
###############################################################################

set(Boost_COMPONENTS system unit_test_framework system)
find_package(Boost 1.55.0 COMPONENTS ${Boost_COMPONENTS})
if (NOT ${Boost_FOUND})
  message(FATAL_ERROR "${Boost_ERROR_REASON}")
endif()
include_directories(BEFORE ${Boost_INCLUDE_DIR})
set(TRIAL_URL_DEPENDENT_LIBRARIES
  ${Boost_SYSTEM_LIBRARY})

###############################################################################
# Trial.Url package
###############################################################################

include_directories(BEFORE include)

add_subdirectory(test)