cmake_minimum_required(VERSION 3.0.0)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD_EXTENSIONS OFF)
set(CMAKE_EXECUTABLE_SUFFIX_CXX .x)


project(TestCmake1)

# Add the executable

add_executable(main main.cpp)
