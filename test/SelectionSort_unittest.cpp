#include "gtest/gtest.h"
#include "SelectionSort.h"
#include <vector>

TEST(SelectionSortTest, Unsorted){
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

TEST(SelectionSortTest, ReverseSorted){
  std::vector<int> values;
  std::vector<int>::iterator it;
  SelectionSort selectionSorter;

  values.push_back(5);
  values.push_back(4);
  values.push_back(3);
  values.push_back(0);

  selectionSorter.sort(values);

  it = values.begin();

  EXPECT_EQ(*it, 0);
  ++it;
  EXPECT_EQ(*it, 3);
  ++it;
  EXPECT_EQ(*it, 4);
  ++it;
  EXPECT_EQ(*it, 5);
}

TEST(SelectionSortTest, SortedButLast){
  std::vector<int> values;
  std::vector<int>::iterator it;
  SelectionSort selectionSorter;

  values.push_back(0);
  values.push_back(3);
  values.push_back(4);
  values.push_back(1);

  selectionSorter.sort(values);

  it = values.begin();

  EXPECT_EQ(*it, 0);
  ++it;
  EXPECT_EQ(*it, 1);
  ++it;
  EXPECT_EQ(*it, 3);
  ++it;
  EXPECT_EQ(*it, 4);
}

TEST(SelectionSortTest, Sorted){
  std::vector<int> values;
  std::vector<int>::iterator it;
  SelectionSort selectionSorter;

  values.push_back(1);
  values.push_back(3);
  values.push_back(12);
  values.push_back(1234);

  selectionSorter.sort(values);

  it = values.begin();

  EXPECT_EQ(*it, 1);
  ++it;
  EXPECT_EQ(*it, 3);
  ++it;
  EXPECT_EQ(*it, 12);
  ++it;
  EXPECT_EQ(*it, 1234);
}
