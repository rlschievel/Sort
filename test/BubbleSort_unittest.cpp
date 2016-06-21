#include "gtest/gtest.h"
#include "BubbleSort.h"
#include <vector>

TEST(BubbleSortTest, Sorted){
  std::vector<int> values;
  std::vector<int>::iterator it;
  BubbleSort bubbleSorter;

  values.push_back(300);
  values.push_back(200);
  values.push_back(600);
  values.push_back(400);

  bubbleSorter.sort(values);

  it = values.begin();

  EXPECT_EQ(*it, 200);
  ++it;
  EXPECT_EQ(*it, 300);
  ++it;
  EXPECT_EQ(*it, 400);
  ++it;
  EXPECT_EQ(*it, 600);
}

