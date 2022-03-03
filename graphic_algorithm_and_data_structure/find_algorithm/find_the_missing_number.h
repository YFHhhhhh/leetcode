#include <vector>
using namespace std;
class Solution {
	public:
  int FindMissingNumber(vector<int> &nums) {
    int l = 0, r = nums.size() - 1;
    while (l < r) {
      int m = (l + r + 1) / 2;
      if (nums[m] == m) { //abstract into a binary search question
        l = m;
      } else {
        r = m - 1;
      }
    }
    if (nums[l] != l) {// It is necessary for the template to check
      return l;
    }
    return l + 1;
  }
};
