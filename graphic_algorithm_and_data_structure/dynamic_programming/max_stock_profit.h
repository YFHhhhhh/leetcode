#include <algorithm>
#include <vector>

#include "limits.h"
using namespace std;
class Solution {
 public:
  int MaxProfit(vector<int>& prices) {
    int min_price = INT_MAX, profit = 0;
    for (int i = 0; i < prices.size(); i++) {
      min_price = min(prices[i], min_price);
      profit = max(profit, prices[i] - min_price);
    }
    return profit;
  }
};
