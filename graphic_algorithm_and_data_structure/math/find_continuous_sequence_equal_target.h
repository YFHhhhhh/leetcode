#include <vector>
using namespace std;
class Solution {
 public:
  vector<vector<int>> FindContinuousSequence(int target) {
    int slow = 1, fast = 2, sum = 3;
    vector<vector<int>> res;
    while (slow < fast) {
      if (sum == target) {
        vector<int> tmp;
        for (int i = slow; i <= fast; i++) {
          tmp.emplace_back(i);
        }
        res.emplace_back(tmp);
        sum -= slow;
        slow++;
      } else if (sum < target) {
        fast++;
        sum += fast;
      } else {
        sum -= slow;
        slow++;
      }
    }
    return res;
  }
};
