#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FirstTest, normal) {
  MaxHeap heap;
  heap.push(2);
  heap.push(5);
  heap.push(6);
  heap.push(9);
  heap.push(4);
  heap.push(24);
  heap.push(3);
  heap.push(15);
  heap.push(23);
  int actual1 = heap.GetParentIndex(1);
  int actual2 = heap.GetLeftIndex(1);
  int actual3= heap.GetRightIndex(1);
  int actual4= heap.GetLargestChildIndex(1);
  int actual5 = heap.top();
  heap.pop();
  int actual6 = heap.top();
  heap.pop();
  int actual7 = heap.top();
  int expected1 = 0;
  int expected2 = 3;
  int expected3 = 4;
  int expected4 = 3;
  int expected5 = 24;
  int expected6 = 23;
  int expected7 = 15;
  
  EXPECT_EQ(expected1, actual1);
  EXPECT_EQ(expected2, actual2);
  EXPECT_EQ(expected3, actual3);
  EXPECT_EQ(expected4, actual4);
  EXPECT_EQ(expected5, actual5);
  EXPECT_EQ(expected6, actual6);
  EXPECT_EQ(expected7, actual7);
  

}

TEST(SecondTest, normal) {
  MaxHeap heap;
  heap.push(2);
  heap.push(5);
  heap.push(6);
  heap.push(9);
  heap.push(4);
  heap.push(24);
  heap.push(3);
  heap.push(15);
  heap.push(23);
  int actual1 = heap.GetParentIndex(3);
  int actual2 = heap.GetLeftIndex(3);
  int actual3= heap.GetRightIndex(3);
  int actual4= heap.GetLargestChildIndex(3);
  int expected1 = 1;
  int expected2 = 7;
  int expected3 = 8;
  int expected4 = 8;
  EXPECT_EQ(expected1, actual1);
  EXPECT_EQ(expected2, actual2);
  EXPECT_EQ(expected3, actual3);
  EXPECT_EQ(expected4, actual4);
  

}