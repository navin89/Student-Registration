cmake_minimum_required(VERSION 3.13)
project(Registration)

set(CMAKE_CXX_STANDARD 14)


set(SOURCE_FILES main.cpp tests/DateTests.cpp src/Registration.cpp src/Registration.h src/Units.cpp src/Units.h src/Result.cpp src/Result.h src/Date.cpp src/Date.h tests/UnitsTests.cpp tests/ResultsTests.cpp tests/RegistrationTests.cpp)
add_executable(Registration ${SOURCE_FILES})




add_subdirectory(lib/googletest)
include_directories(lib/googletest/googletest/include)
target_link_libraries(Registration gtest gtest_main)