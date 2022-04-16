#include <string>
#include <vector>
using namespace std;
class Solution {
 public:
  bool IsMatch(string s, string p) {
    int m = s.size() + 1, n = p.size() + 1;
    vector<vector<bool>> dp(m, vector<bool>(n, false));
    dp[0][0] = true;
    for (int j = 2; j < n; j += 2) {
      dp[0][j] = dp[0][j - 2] && p[j - 1] == '*';
    }
    for (int i = 1; i < m; i++) {
      for (int j = 1; j < n; j++) {
        if (p[j - 1] == '*') {
          if (dp[i][j - 2]) {
            dp[i][j] = true;
          }
          if (dp[i - 1][j] && s[i - 1] == p[j - 2]) {
            dp[i][j] = true;
          }
          if (dp[i - 1][j] && p[j - 2] == '.') {
            dp[i][j] = true;
          }
        } else {
          if (dp[i - 1][j - 1] && s[i - 1] == p[j - 1]) {
            dp[i][j] = true;
          }
          if (dp[i - 1][j - 1] && p[j - 1] == '.') {
            dp[i][j] = true;
          }
        }
      }
    }
    return dp[m - 1][n - 1];
  }
};
