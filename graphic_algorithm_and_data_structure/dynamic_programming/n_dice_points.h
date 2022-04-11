#include <vector>
using namespace std;
class Solution {
 public:
  vector<double> DicePoints(int n) {
    vector<double> dp(6, 1.0 / 6.0);
    for (int i = 2; i <= n; i++) {
      vector<double> tmp(5 * i + 1, 0.0);
      for (int j = 0; j < dp.size(); j++) {
        for (int k = j; k < j + 6; k++) {
          tmp[k] += dp[j] / 6.0;
        }
      }
      dp = tmp;
    }
    return dp;
  }
};
