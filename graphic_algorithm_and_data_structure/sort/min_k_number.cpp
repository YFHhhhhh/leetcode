#include "min_k_number.h"

#include <iostream>
#include <vector>
using namespace std;
int main() {
  Solution solu;
  vector<int> test = {0, 1, 2, 1};
  vector<int> res = solu.GetMinKNumber(test, 3);
  for (auto n : res) {
    cout << n << ' ';
  }
  cout << endl;
}
