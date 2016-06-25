#include "gtest/gtest.h"
#include "InsertionSort.h"
#include <vector>

TEST(InsertionSortTest, Unsorted){
  std::vector<int> values;
  std::vector<int>::iterator it;
  InsertionSort insertionSorter;

  values.push_back(300);
  values.push_back(200);
  values.push_back(600);
  values.push_back(400);

  insertionSorter.sort(values);

  it = values.begin();

  EXPECT_EQ(*it, 200);
  ++it;
  EXPECT_EQ(*it, 300);
  ++it;
  EXPECT_EQ(*it, 400);
  ++it;
  EXPECT_EQ(*it, 600);
}

TEST(InsertionSortTest, ReverseSorted){
  std::vector<int> values;
  std::vector<int>::iterator it;
  InsertionSort insertionSorter;

  values.push_back(5);
  values.push_back(4);
  values.push_back(3);
  values.push_back(0);

  insertionSorter.sort(values);

  it = values.begin();

  EXPECT_EQ(*it, 0);
  ++it;
  EXPECT_EQ(*it, 3);
  ++it;
  EXPECT_EQ(*it, 4);
  ++it;
  EXPECT_EQ(*it, 5);
}

TEST(InsertionSortTest, SortedButLast){
  std::vector<int> values;
  std::vector<int>::iterator it;
  InsertionSort insertionSorter;

  values.push_back(0);
  values.push_back(3);
  values.push_back(4);
  values.push_back(1);

  insertionSorter.sort(values);

  it = values.begin();

  EXPECT_EQ(*it, 0);
  ++it;
  EXPECT_EQ(*it, 1);
  ++it;
  EXPECT_EQ(*it, 3);
  ++it;
  EXPECT_EQ(*it, 4);
}

TEST(InsertionSortTest, Sorted){
  std::vector<int> values;
  std::vector<int>::iterator it;
  InsertionSort insertionSorter;

  values.push_back(1);
  values.push_back(3);
  values.push_back(12);
  values.push_back(1234);

  insertionSorter.sort(values);

  it = values.begin();

  EXPECT_EQ(*it, 1);
  ++it;
  EXPECT_EQ(*it, 3);
  ++it;
  EXPECT_EQ(*it, 12);
  ++it;
  EXPECT_EQ(*it, 1234);
}
