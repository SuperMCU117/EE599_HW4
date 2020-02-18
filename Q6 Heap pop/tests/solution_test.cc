#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(TEST1, normalCase) {
  Solution solution;
  std::vector<int>inputs{1,9,5,23,6,8,22,4,43,19};
  int value = 5;
  int actual = solution.ReturnKthLargest(value,inputs);
  int expected = 9;
  EXPECT_EQ(expected, actual);
}

TEST(TEST2, normalCase) {
  Solution solution;
  std::vector<int>inputs{1,9,5,23,6,8,22,4,43,19};
  int value = 3;
  int actual = solution.ReturnKthLargest(value,inputs);
  int expected = 22;
  EXPECT_EQ(expected, actual);
}

TEST(TEST3, singleElement) {
  Solution solution;
  std::vector<int>inputs{19};
  int value = 1;
  int actual = solution.ReturnKthLargest(value,inputs);
  int expected = 19;
  EXPECT_EQ(expected, actual);
}

