#include "find_continuous_sequence_equal_target.h"

#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<vector<int>> res;
  Solution solu;
  res = solu.FindContinuousSequence(9);
  for (int i = 0; i < res.size(); i++) {
    for (int j = 0; j < res[i].size(); j++) {
      cout << res[i][j] << ' ';
    }
    cout << endl;
  }
}
