#include <vector>
using namespace std;
class Solution {
 public:
  vector<int> TwoSum(vector<int>& nums, int target) {
    int i = 0, j = nums.size() - 1;
    vector<int> res;
    while (i < j) {
      int tmp = nums[i] + nums[j];
      if (tmp < target) {
        i++;
      } else if (tmp > target) {
        j--;
      } else {
        res.emplace_back(nums[i]);
        res.emplace_back(nums[j]);
        break;
      }
    }
    return res;
  }
};
