#include "BubbleSort.h"

void BubbleSort::sort(std::vector<int> &values){
  //Bubble Sort algorithm here

  bool swapped = true;
  std::vector<int>::iterator it;

  while(swapped){
    swapped = false;

    for(it = values.begin(); it != --values.end(); ++it){
      if(*it > *(it + 1)){
        Sort::swap(values, it, (it + 1));
        swapped = true;
      }
    }
  }
  
  return;
}
