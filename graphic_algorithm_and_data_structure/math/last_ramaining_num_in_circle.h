class Solution {
 public:
  int LastRemaining(int n, int m) {
    if (n == 1) {
      return 0;
    }
    return (LastRemaining(n - 1, m) + m) % n;
  }
};
