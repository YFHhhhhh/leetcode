#include "max_value_in_sliding_window.h"

#include <iostream>
#include <vector>
using namespace std;
int main() {
  Solution solu;
  vector<int> test = {1, 3, -1, -3, 5, 3, 6, 7};
  vector<int> res = solu.MaxNumberInSlidingWindow(test, 3);
  for (auto n : res) {
    cout << n << ' ';
  }
  cout << endl;
}
