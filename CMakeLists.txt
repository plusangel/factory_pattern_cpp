cmake_minimum_required(VERSION 3.21)
project(factory_pattern_cpp)

set(CMAKE_CXX_STANDARD 20)

if (EXISTS ${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    conan_basic_setup()
else ()
    message(WARNING "The file conanbuildinfo.cmake doesn't exist, you have to run conan install first")
endif ()

include_directories(
        include
)

add_executable(main_non_optimised main_non_optimised.cpp)
target_link_libraries(main_non_optimised ${CONAN_LIBS})