#include <iostream>
#include <vector>
using namespace std;
class Solution {
 public:
  int FindRepeatedNumber(vector<int> &nums) {
    int i = 0;
    while (i < nums.size()) {
      if (nums[i] == i) {
        i++;
      } else {
        if (nums[i] == nums[i + 1]) {
          return nums[i];
        } else {
          swap(nums[i], nums[nums[i]]);
        }
      }
    }
    return -1;
  }
};
