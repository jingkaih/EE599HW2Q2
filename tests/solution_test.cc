#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(c_FindSizeShould, Return5) {
  Solution solution;
  int actual = solution.c_FindSize();
  int expected = 5;
  EXPECT_EQ(expected, actual);
}
TEST(i_FindSizeShould, Return3) {
  Solution solution;
  int actual = solution.i_FindSize();
  int expected = 3;
  EXPECT_EQ(expected, actual);
}
TEST(f_FindSizeShould, Return4) {
  Solution solution;
  int actual = solution.f_FindSize();
  int expected = 4;
  EXPECT_EQ(expected, actual);
}