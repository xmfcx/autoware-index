cmake_minimum_required(VERSION 3.14)
project(index_fixture_cmake_missing)
find_package(ament_cmake REQUIRED)
find_package(index_fixture_no_such_cmake_package REQUIRED)

ament_package()
