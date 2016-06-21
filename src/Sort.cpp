#include "Sort.h"

void Sort::sort(std::vector<int> &values){
  std::sort(values.begin(), values.end());

  return;
}

void Sort::swap(std::vector<int> &values, std::vector<int>::iterator it1, std::vector<int>::iterator it2){
  int temp = 0;

  temp = *it1;
  *it1 = *it2;
  *it2 = temp;

  return;
}
