#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(TEST1, normalCase) {
  Solution solution;
 
  std::vector<int>input{7,6,5,4,3,2,1};
  solution.HeapSort(input);
  std::vector<int> actual = input;
  std::vector<int> expected = {1,2,3,4,5,6,7};
  EXPECT_EQ(expected, actual);
}

TEST(TEST2, normalCase) {
  Solution solution;
 
  std::vector<int>input{5,9,3,1,7};
  solution.HeapSort(input);
  std::vector<int> actual = input;
  std::vector<int> expected = {1,3,5,7,9};
  EXPECT_EQ(expected, actual);
}

TEST(TEST3, null) {
  Solution solution;
 
  std::vector<int>input{};
  solution.HeapSort(input);
  std::vector<int> actual = input;
  std::vector<int> expected = {};
  EXPECT_EQ(expected, actual);
}

TEST(TEST4, repeat) {
  Solution solution;
 
  std::vector<int>input{2,1,2,4,2};
  solution.HeapSort(input);
  std::vector<int> actual = input;
  std::vector<int> expected = {1,2,2,2,4};
  EXPECT_EQ(expected, actual);
}

