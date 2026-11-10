cmake_minimum_required(VERSION 3.14)
project(index_fixture_test_timeout)
find_package(ament_cmake REQUIRED)
if(BUILD_TESTING)
  find_package(ament_cmake_gtest REQUIRED)
  ament_add_gtest(test_${PROJECT_NAME} test/test_main.cpp TIMEOUT 5)
endif()

ament_package()
