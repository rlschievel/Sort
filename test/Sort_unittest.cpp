#include "gtest/gtest.h"
#include "Sort.h"
#include <vector>

TEST(Sort, SwapClose){
  std::vector<int> values;
  std::vector<int>::iterator it1;
  std::vector<int>::iterator it2;
  Sort sorter;

  values.push_back(1);
  values.push_back(2);

  it1 = values.begin();
  it2 = it1 + 1;

  sorter.swap(values, it1, it2);

  EXPECT_EQ(*it1, 2);
  EXPECT_EQ(*it2, 1);
}

TEST(Sort, SwapApart){
  std::vector<int> values;
  std::vector<int>::iterator it1;
  std::vector<int>::iterator it2;
  Sort sorter;

  values.push_back(1);
  values.push_back(2);
  values.push_back(3);

  it1 = values.begin();
  it2 = it1 + 2;

  sorter.swap(values, it1, it2);

  EXPECT_EQ(*it1, 3);
  EXPECT_EQ(*it2, 1);
}

TEST(Sort, Sorted){
  std::vector<int> values;
  std::vector<int>::iterator it;
  Sort sorter;

  values.push_back(12);
  values.push_back(5);
  values.push_back(3);
  values.push_back(7);

  sorter.sort(values);

  it = values.begin();

  EXPECT_EQ(*it, 3);
  ++it;
  EXPECT_EQ(*it, 5);
  ++it;
  EXPECT_EQ(*it, 7);
  ++it;
  EXPECT_EQ(*it, 12);
}


