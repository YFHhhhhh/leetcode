#include "find_number_in_ordered_array.h"

#include <iostream>
#include <vector>
using namespace std;
int main() {
  Solution solu;
  vector<int> test = {1, 2, 3, 4, 4, 4, 5, 6};
  cout << solu.FindNumInOrderedArray(test, 4) << endl;
	cout << solu.TemplateForBinarySearch(test, 0) << endl;
}
