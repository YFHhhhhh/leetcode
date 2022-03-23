#include <vector>
class Solution {
 public:
  int SingleNumber(std::vector<int>& nums) {
    std::vector<int> count(32);
    for (auto n : nums) {
      for (int i = 0; i < 32; i++) {
        if ((n & 1) == 1) {
          count[i]++;
        }
        n = n >> 1;
      }
    }
    int res = 0, m = 3;
    for (int i = 31; i >= 0; i--) {
      res <<= 1;
      res |= count[i] % 3;
    }
    return res;
  }
};
