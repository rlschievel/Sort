#include <vector>
#include <algorithm>

class Sort{
 public:
  virtual void sort(std::vector<int> &values);
  void swap(std::vector<int> &values, std::vector<int>::iterator it1, std::vector<int>::iterator it2);
};
