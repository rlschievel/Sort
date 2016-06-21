#include "BubbleSort.h"

void BubbleSort::sort(std::vector<int> &values){
  //Add code for Bubble Sort algorithm here

  bool swapped = true;
  std::vector<int>::iterator it = values.begin();

  while(swapped){
    swapped = false;

    for(it = values.begin(); it != values.end(); ++it){
      if(*it > *(it + 1)){
	Sort::swap(values, it + 1, it);
	swapped = true;
      }
    }
  }
  
  return;
}
