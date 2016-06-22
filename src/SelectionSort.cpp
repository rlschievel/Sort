#include "SelectionSort.h"

void SelectionSort::sort(std::vector<int> &values){
  //Add code for Selection Sort algorithm here

  std::vector<int>::iterator it1;
  std::vector<int>::iterator it2;
  std::vector<int>::iterator minValue;

  for(it1 = values.begin(); it1 != --values.end(); ++it1){
    minValue = it1;

    for(it2 = (it1 + 1); it2 != values.end(); ++it2){
      if(*it2 < *minValue){
        minValue = it2;
      }
    }

    if(*minValue != *it1){
      Sort::swap(values, minValue, it1);
    }
  }
  
  return;
}
