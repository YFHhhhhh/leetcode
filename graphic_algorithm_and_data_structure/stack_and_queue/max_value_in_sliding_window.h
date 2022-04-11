#include <deque>
#include <vector>
using namespace std;
class Solution {
 public:
  vector<int> MaxNumberInSlidingWindow(vector<int>& nums, int k) {
    if (nums.size() == 0 || k == 0) {
      return nums;
    }
    deque<int> dq;
    for (int i = 0; i < k; i++) {
      while (!dq.empty() && nums[i] > dq.front()) {
        dq.pop_back();
      }
      dq.push_back(nums[i]);
    }
    vector<int> res;
    res.emplace_back(dq.front());
    for (int i = 1, j = k; j < nums.size(); i++, j++) {
      if (dq.front() == nums[i - 1]) {
        dq.pop_front();
      }
      while (!dq.empty() && nums[j] > dq.front()) {
        dq.pop_back();
      }
      dq.push_back(nums[j]);
      res.emplace_back(dq.front());
    }
    return res;
  }
};
