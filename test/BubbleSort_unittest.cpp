#include "gtest/gtest.h"
#include "BubbleSort.h"
#include <vector>

TEST(BubbleSortTest, Sorted){
  std::vector<int> values;
  std::vector<int>::iterator it;
  BubbleSort bubbleSorter;

  values.push_back(2);
  values.push_back(1);
  values.push_back(5);
  values.push_back(3);

  it = values.begin();

  bubbleSorter.sort(values);

  EXPECT_EQ(*it, 1);
  ++it;
  EXPECT_EQ(*it, 2);
  ++it;
  EXPECT_EQ(*it, 3);
  ++it;
  EXPECT_EQ(*it, 5);
}

