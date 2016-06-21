#include "gtest/gtest.h"
#include "SelectionSort.h"
#include <vector>

TEST(SelectionSortTest, Sorted){
  std::vector<int> values;
  std::vector<int>::iterator it;
  SelectionSort selectionSorter;

  values.push_back(2);
  values.push_back(1);
  values.push_back(5);
  values.push_back(3);

  it = values.begin();

  selectionSorter.sort(values);

  EXPECT_EQ(*it, 1);
  ++it;
  EXPECT_EQ(*it, 2);
  ++it;
  EXPECT_EQ(*it, 3);
  ++it;
  EXPECT_EQ(*it, 5);
}
