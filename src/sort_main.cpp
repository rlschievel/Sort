#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void printPrompt();
int promptUser();

int main(int argc, char** argv){
  int userSelection;
  
  userSelection = promptUser();

  cout << "User selected option: " << userSelection << endl;

  for(int i = 5; i > 0; --i){
    cout << "Closing in " << i << "..." << endl;
    this_thread::sleep_for(chrono::seconds(1));
  }
  
  return 0;
}

void printPrompt(){
  cout << "Select a sort algorithm to run..." << endl;
  cout << "  1: Bubble Sort" << endl;
  cout << "  2: Selection Sort" << endl;
  cout << "  3: Merge Sort" << endl;
  cout << "  4: Quick Sort" << endl;
  cout << endl;

  return;
}

int promptUser(){
  bool validSelection = false;
  int userSelection;

  while(!validSelection){
    printPrompt();

    cout << "Selection: ";
    if(cin >> userSelection && 1 <= userSelection && userSelection <= 4){
      validSelection = true;
    }else{
      cout << endl;
      cout << "Invalid selection. Please enter a valid number as your selection." << endl;
      cout << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

  }
  
  return userSelection;
}
