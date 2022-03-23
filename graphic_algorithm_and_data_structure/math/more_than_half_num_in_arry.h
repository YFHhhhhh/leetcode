#include <vector>
class Solution {
 public:
  int MajorityElement(std::vector<int>& nums) {
    int vote = 0, x = 0;
    for (auto n : nums) {
      if (vote == 0) {
        x = n;
      }
      if (x == n) {
        vote++;
      } else {
        vote--;
      }
    }
    return x;
  }
};
