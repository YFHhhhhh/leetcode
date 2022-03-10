#include <string>
#include <vector>
using namespace std;
class Solution {
 public:
  bool PathInMatrix(vector<vector<char>>& board, string word) {
    m = board.size();
    n = board[0].size();
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        // traverse every element to dfs
        if (dfs(board, word, i, j, 0)) {
          return true;
        }
      }
    }
    return false;
  }

 private:
  int m;
  int n;
  bool dfs(vector<vector<char>>& board, string word, int i, int j, int k) {
    if (i < 0 || i >= m || j < 0 || j >= n || board[i][j] != word[k]) {
      // termination conditions and prune
      return false;
    }
    if (k == word.size() - 1) {
      // get true and return
      return true;
    }
    board[i][j] = '\0';  //******:set ' ' to visted element
    bool res = dfs(board, word, i + 1, j, k + 1) ||
               dfs(board, word, i - 1, j, k + 1) ||
               dfs(board, word, i, j + 1, k + 1) ||
               dfs(board, word, i, j - 1, k + 1);
    board[i][j] = word[k];  // ******:element will be reset when traceback
    return res;
  }
};
