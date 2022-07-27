#cmake version
cmake_minimum_required(VERSION 3.10)

#project name
project(figure_printing)

#define c++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#define source directories, "include" is for headers and "src" is for implementation
include_directories(
        figure_printing/include
        figure_printing/src
)

#define a list, called SRC_FILES, that stores all source code files within "include" and "src"
file(GLOB_RECURSE SRC_FILES
        "figure_printing/include/utilities/math/MathUtilities.h"
        "figure_printing/src/utilities/math/MathUtilities.cpp"
        "figure_printing/src/main.cpp"
        )

#include all source code files to generate an executable
add_executable(a1-figures src/main.cpp include/utilities/math/MathUtilities.h src/utilities/math/MathUtilities.cpp)

#add_executable(a1-figures ${SRC_FILES})
