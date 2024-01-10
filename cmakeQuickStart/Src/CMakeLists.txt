add_library(claculatorLib Calculator.cpp)

target_include_directories( claculatorLib PUBLIC include)

add_library(complexLib complex.cpp)

target_include_directories( complexLib PUBLIC include)