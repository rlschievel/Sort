#include <iostream>

using namespace std;

int main(int argc, char** argv){
  printPrompt();
  
  return 0;
}

void printPrompt(){
  cout<<"Select a sort algorithm to run..."<<endl;
  cout<<"  1: Bubble Sort"<<endl;
  cout<<"  2: Selection Sort"<<endl;
  cout<<"  3: Merge Sort"<<endl;
  cout<<"  4: Quick Sort"<<endl;

  return;
}
