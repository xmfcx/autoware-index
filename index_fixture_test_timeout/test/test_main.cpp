#include <gtest/gtest.h>

#include <chrono>
#include <thread>

TEST(Fixture, Hangs) { std::this_thread::sleep_for(std::chrono::seconds(60)); }
