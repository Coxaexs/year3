cmake_minimum_required(VERSION 3.10.0)
project(week1 VERSION 0.1.0 LANGUAGES C CXX)

include_directories(include)

include(CTest)
enable_testing()
SET(CTEST_OUTPUT_ON_FAILURE TRUE)

add_subdirectory(1.sorted_arrays)
add_subdirectory(2.first_occurrence)
add_subdirectory(3.partition_array)
add_subdirectory(4.intersect_sets)
add_subdirectory(5.subtract_sets)
add_subdirectory(6.subtract_sets_inplace)
