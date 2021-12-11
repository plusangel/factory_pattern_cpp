cmake_minimum_required(VERSION 3.21)
project(factory_pattern_cpp)

set(CMAKE_CXX_STANDARD 20)

include(${CMAKE_BINARY_DIR}/conan_paths.cmake)

find_package(spdlog REQUIRED)

include_directories(
        include
)

add_executable(main_non_optimised src/main_non_optimised.cpp)
target_link_libraries(main_non_optimised spdlog::spdlog)

add_executable(main_optimised src/main_optimised.cpp)
target_link_libraries(main_optimised spdlog::spdlog)

add_executable(main_optimised_di src/main_optimised_di.cpp)
target_link_libraries(main_optimised_di spdlog::spdlog)
