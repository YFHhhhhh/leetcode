#include "find_duplicate_element_in_array.h"

#include <iostream>
#include <vector>
using namespace std;
int main() {
  Solution solu;
  vector<int> test = {1, 2, 3, 4, 1};
  cout << solu.FindRepeatedNumber(test) << endl;
}
