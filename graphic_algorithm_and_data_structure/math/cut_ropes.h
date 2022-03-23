#include <algorithm>
#include <vector>
class Solution {
 public:
  int CutRope(int n) {
    std::vector<int> dp(n + 1);
    for (int i = 0; i <= n; i++) {
      int cur_max = 0;
      for (int j = 1; j < i; j++) {
        cur_max = std::max(cur_max, std::max(j * (i - j), j * dp[i - j]));
      }
			dp[i] = cur_max;
    }
    return dp[n];
  }
};
