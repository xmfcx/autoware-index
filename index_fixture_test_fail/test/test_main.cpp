#include <gtest/gtest.h>

TEST(Fixture, Passes) { EXPECT_EQ(2, 1 + 1); }

TEST(Fixture, ComparesWrongSum) { EXPECT_EQ(3, 1 + 1) << "the sum is wrong on purpose"; }
