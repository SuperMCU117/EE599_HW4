#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Test1, Normalcase) {
  Solution solution;
  std::vector<int>input={1,2,3,4,5,6};
  std::vector<int> actual1 = solution.Filter(input);
  std::vector<int> actual2 = solution.Map(input);
  std::vector<int> actual3 = solution.Reduce(input);
  std::vector<int> expected1 = {2,4,6};
  std::vector<int> expected2 = {1,4,9,16,25,36};
  std::vector<int> expected3 = {21};
  EXPECT_EQ(expected1, actual1);
  EXPECT_EQ(expected2, actual2);
  EXPECT_EQ(expected3, actual3);
}

TEST(Test2, Normalcase) {
  Solution solution;
  std::vector<int>input={6,5,4,3,2,1};
  std::vector<int> actual1 = solution.Filter(input);
  std::vector<int> actual2 = solution.Map(input);
  std::vector<int> actual3 = solution.Reduce(input);
  std::vector<int> expected1 = {6,4,2};
  std::vector<int> expected2 = {36,25,16,9,4,1};
  std::vector<int> expected3 = {21};
  EXPECT_EQ(expected1, actual1);
  EXPECT_EQ(expected2, actual2);
  EXPECT_EQ(expected3, actual3);
  }

TEST(Test3, withZero) {
  Solution solution;
  std::vector<int>input={6,5,4,3,2,1,0};
  std::vector<int> actual1 = solution.Filter(input);
  std::vector<int> actual2 = solution.Map(input);
  std::vector<int> actual3 = solution.Reduce(input);
  std::vector<int> expected1 = {6,4,2,0};
  std::vector<int> expected2 = {36,25,16,9,4,1,0};
  std::vector<int> expected3 = {21};
  EXPECT_EQ(expected1, actual1);
  EXPECT_EQ(expected2, actual2);
  EXPECT_EQ(expected3, actual3);
  }

TEST(Test4, singleElement) {
  Solution solution;
  std::vector<int>input={5};
  std::vector<int> actual1 = solution.Filter(input);
  std::vector<int> actual2 = solution.Map(input);
  std::vector<int> actual3 = solution.Reduce(input);
  std::vector<int> expected1 = {};
  std::vector<int> expected2 = {25};
  std::vector<int> expected3 = {5};
  EXPECT_EQ(expected1, actual1);
  EXPECT_EQ(expected2, actual2);
  EXPECT_EQ(expected3, actual3);
  }