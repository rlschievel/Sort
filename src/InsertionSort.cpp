#include "InsertionSort.h"

void InsertionSort::sort(std::vector<int> &values){
  //Insertion Sort algorithm here

  std::vector<int>::iterator it1;
  std::vector<int>::iterator it2;  

  for(it1 = values.begin(); it1 < values.end(); ++it1){
    it2 = it1;

    while(it2 > values.begin() && *(it2 - 1) > *it2){
      Sort::swap(values, it2, (it2 - 1));
      --it2;
    }
  }
  
  return;
}
