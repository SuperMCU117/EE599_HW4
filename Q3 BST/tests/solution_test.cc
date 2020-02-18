#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(test1, normalcase) {
  BST tree;
  tree.push(2);
  bool actual= tree.find(2);
  bool expected = true;
  tree.erase(2);
  bool actual1= tree.find(2);
  bool expected1 = false;
  EXPECT_EQ(expected, actual);
  EXPECT_EQ(expected1, actual1);

}

TEST(test2, normalcase) {
  BST tree;
  tree.push(2);
  tree.push(5);
  tree.push(10);
  tree.push(12);

  bool actual= tree.find(2);
  bool expected = true;
  bool actual1= tree.find(10);
  bool expected1 = true;
  bool actual2= tree.find(9);
  bool expected2 = false;
  EXPECT_EQ(expected, actual);
  EXPECT_EQ(expected1, actual1);
  EXPECT_EQ(expected2, actual2);

}