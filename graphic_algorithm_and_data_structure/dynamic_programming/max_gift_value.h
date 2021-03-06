#include <vector>
using namespace std;
class Solution {
 public:
  int MaxValue(vector<vector<int>>& grid) {
    for (int i = 0; i < grid.size(); i++) {
      for (int j = 0; j < grid[0].size(); j++) {
        if (i == 0 && j == 0) {
          continue;
        }
        if (i != 0 && j == 0) {
          grid[i][j] = grid[i][j] + grid[i - 1][j];
        }
        if (i == 0 && j != 0) {
          grid[i][j] = grid[i][j] + grid[i][j - 1];
        }
        if (i != 0 && j != 0) {
          grid[i][j] = max(grid[i - 1][j], grid[i][j - 1]) + grid[i][j];
        }
      }
    }
    return grid[grid.size() - 1][grid[0].size() - 1];
  }
};
