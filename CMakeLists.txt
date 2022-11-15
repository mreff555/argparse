cmake_minimum_required(VERSION 3.11)
project(ArgParse VERSION 0.0.1 
    DESCRIPTION "Command line helper tool"
    LANGUAGES CXX)

add_compile_options(-Wall -Wextra -W -Wshadow -Wformat -fexceptions)
set(CMAKE_CXX_FLAGS_DEBUG "-g -pipe")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -pipe")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCE_DIRECTORY "src")
set(TEST_DIRECTORY "test")
include_directories(
  ${SOURCE_DIRECTORY}
  ${TEST_DIRECTORY})

add_library(${CMAKE_PROJECT_NAME} SHARED
    src/Flag.cpp
    src/Argument.cpp
    src/Parser.cpp
    src/Program.cpp)

set_target_properties(${CMAKE_PROJECT_NAME} PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties(${CMAKE_PROJECT_NAME} PROPERTIES SOVERSION 1)

# This is probably going to change.  I still haven't figured out how I want to do this.
set_target_properties(${CMAKE_PROJECT_NAME} PROPERTIES PUBLIC_HEADER src/Program.hpp)

include(GNUInstallDirs)
install(TARGETS ${CMAKE_PROJECT_NAME}
LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

add_executable(${CMAKE_PROJECT_NAME}_test ${TEST_DIRECTORY}/testMain.cpp)
target_link_libraries(${CMAKE_PROJECT_NAME}_test ${CMAKE_PROJECT_NAME})
