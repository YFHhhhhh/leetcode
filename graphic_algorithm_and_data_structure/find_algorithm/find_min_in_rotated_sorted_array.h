#include <vector>
using namespace std;
class Solution {
 public:
  int FindMin(vector<int> &nums) {
    if (nums.size() == 1) {
      return nums[0];
    }
    int l = 0, r = nums.size() - 1;
    while (l < r) {
      int m = (l + r) / 2;
      if (nums[m] < nums[r]) {
        r = m;
      } else if (nums[m] > nums[r]) {
        l = m + 1;
      } else {
        r--;
      }
    }
    return nums[l];
  }
};
