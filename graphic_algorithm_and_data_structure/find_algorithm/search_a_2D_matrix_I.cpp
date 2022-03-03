#include "search_a_2D_matrix_I.h"

#include <iostream>
#include <vector>
using namespace std;
int main() {
  Solution solu;
  vector<vector<int>> test = {{1, 4, 7, 11, 15},
                              {2, 5, 8, 12, 19},
                              {3, 6, 9, 16, 22},
                              {10, 13, 14, 17, 24},
                              {18, 21, 23, 26, 30}};
  cout << solu.SearchMatrix(test, 5) << endl;
}
