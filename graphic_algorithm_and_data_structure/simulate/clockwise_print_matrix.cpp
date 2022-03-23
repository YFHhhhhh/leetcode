#include "clockwise_print_matrix.h"

#include <iostream>
#include <vector>
using namespace std;
int main() {
  Solution solu;
  vector<vector<int>> test = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  vector<int> res = solu.PrintMatrixColockwise(test);
  for (auto n : res) {
    cout << n << ' ';
  }
  cout << endl;
}
