# Failure fixtures for autoware-index

These ROS 2 packages fail on purpose. Each one shows one failure mode of the
build-check job summary of autoware-index:

| package | expected result |
| --- | --- |
| index_fixture_ok | builds, tests pass |
| index_fixture_compile_error | C++ compile error |
| index_fixture_cmake_missing | CMake cannot find a package |
| index_fixture_rosdep_missing | rosdep cannot resolve a key |
| index_fixture_blocked | blocked by index_fixture_compile_error |
| index_fixture_test_fail | one gtest case fails |
| index_fixture_test_crash | the gtest binary aborts |
| index_fixture_test_timeout | the gtest binary times out after 5 s |
| index_fixture_pytest_fail | one pytest case fails |

Do not register them in the index.
