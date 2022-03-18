#include <inttypes.h>
class Solution {
 public:
  int HammingWeight(uint32_t n) {
    unsigned int res = 0;
    while (n != 0) {
      res += n & 1;
      n = n >> 1;
    }
    return res;
  }
};
