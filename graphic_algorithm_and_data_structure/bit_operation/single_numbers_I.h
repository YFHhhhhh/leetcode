#include <vector>
class Solution {
 public:
  std::vector<int> Single_Numbers(std::vector<int>& nums) {
    int x = 0, y = 0, a = 0, m = 1;
    for (auto num : nums) {
      a ^= num;
    }
    while ((a & m) == 0) {
      m <<= 1;
    }
    for (auto num : nums) {
      if (num & m) {
        x ^= num;
      } else {
        y ^= num;
      }
    }
    return {x, y};
  }
};
