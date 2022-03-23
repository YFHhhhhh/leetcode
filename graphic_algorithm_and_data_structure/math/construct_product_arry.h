#include <vector>
class Solution {
 public:
  std::vector<int> ProductArry(std::vector<int>& a) {
    if (a.empty()) {
      return a;
    }
    std::vector<int> b(a.size(), 1);
    int tmp = 1;
    for (int i = 1; i < a.size(); i++) {
      b[i] = b[i - 1] * a[i - 1];
    }
    for (int i = a.size() - 2; i >= 0; i--) {
      tmp *= a[i + 1];
      b[i] *= tmp;
    }
    return b;
  }
};
