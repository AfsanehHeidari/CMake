cmake_minimum_required(VERSION 3.0.0)
project(CMakeLists VERSION 0.1.0 LANGUAGES C CXX)


add_subdirectory(Src)
add_executable(Myproject main.cpp)

target_link_libraries(Myproject PUBLIC claculatorLib)
target_link_libraries(Myproject PUBLIC complexLib)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Src/include)