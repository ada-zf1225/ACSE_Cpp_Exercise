cmake_minimum_required(VERSION 3.16)
project(ACSE_Cpp_Exercise VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

option(ACSE_BUILD_TESTS "Build tests" ON)

add_executable(acse_main src/main.cpp)
target_include_directories(acse_main PRIVATE include)

if(ACSE_BUILD_TESTS)
  enable_testing()
  add_executable(acse_smoke_test tests/smoke_test.cpp)
  add_test(NAME smoke_test COMMAND acse_smoke_test)
endif()
