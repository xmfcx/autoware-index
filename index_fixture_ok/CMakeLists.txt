cmake_minimum_required(VERSION 3.14)
project(index_fixture_ok)
find_package(ament_cmake REQUIRED)
add_library(${PROJECT_NAME} SHARED src/lib.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
install(TARGETS ${PROJECT_NAME} EXPORT ${PROJECT_NAME}Targets
  LIBRARY DESTINATION lib ARCHIVE DESTINATION lib RUNTIME DESTINATION bin)
install(DIRECTORY include/ DESTINATION include)
ament_export_targets(${PROJECT_NAME}Targets HAS_LIBRARY_TARGET)
if(BUILD_TESTING)
  find_package(ament_cmake_gtest REQUIRED)
  ament_add_gtest(test_${PROJECT_NAME} test/test_main.cpp)
endif()

ament_package()
