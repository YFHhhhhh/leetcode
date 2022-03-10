#include "max_gift_value.h"

#include <iostream>
#include <vector>
using namespace std;
int main() {
  Solution solu;
  vector<vector<int>> test = {{1, 3, 1}, {1, 5, 1}, {4, 2, 1}};
  cout << solu.MaxValue(test) << endl;
}
