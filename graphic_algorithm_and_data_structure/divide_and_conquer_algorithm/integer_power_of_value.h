class Solution {
 public:
  double MyPow(double x, int n) {
    if (x == 0.0f) {
      return 0.0;
    }
    long b = n;
    double res = 1.0;
    while (b > 0) {
      if (b % 2 == 1) {
        res *= x;
      }
      x *= x;
      b /= 2;
    }
    return res;
  }
};
