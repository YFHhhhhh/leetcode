#include <vector>
using namespace std;
class Solution {
 public:
  bool SearchMatrix(vector<vector<int>> &martix, int target) {
    if (martix.size() == 0) {
      return false;
    }
    int n = martix.size(), m = martix[0].size();
    int i = n - 1, j = 0;
    while (i >= 0 && j < m) {
      if (martix[i][j] > target) {
        i--;
      } else if (martix[i][j] < target) {
        j++;
      } else {
        return true;
      }
    }
    return false;
  }
};
