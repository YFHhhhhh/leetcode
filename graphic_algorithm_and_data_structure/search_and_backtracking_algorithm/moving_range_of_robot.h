#include <vector>
using namespace std;
class Solution {
 public:
  int MovingRange(int m, int n, int k) {
    mm = m;
    nn = n;
    vector<vector<bool>> visited(m, vector<bool>(n, false));
    int res;
    dfs(0, 0, k, res, visited);
    return res;
  }

 private:
  int mm;
  int nn;
  void dfs(int i, int j, int k, int& res, vector<vector<bool>>& visited) {
    int ii = i;
    int jj = j;
    int tmp = 0;
    while (ii > 0) {
      tmp += ii % 10;
      ii /= 10;
    }
    while (jj > 0) {
      tmp += jj % 10;
      jj /= 10;
    }
    if (i < 0 || i >= mm || j < 0 || j >= nn || tmp > k ||
        visited[i][j] == true) {
      return;
    }
    res++;
    visited[i][j] = true;
    dfs(i + 1, j, k, res, visited);
    dfs(i - 1, j, k, res, visited);
    dfs(i, j + 1, k, res, visited);
    dfs(i, j - 1, k, res, visited);
  }
};
