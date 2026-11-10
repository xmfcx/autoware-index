#include <gtest/gtest.h>

#include <cstdio>
#include <cstdlib>

TEST(Fixture, Aborts)
{
  std::puts("about to abort on purpose");
  std::abort();
}
