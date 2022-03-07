class Solution {
 public:
  int Fibonacci(int n) {
    int a = 0, b = 1, sum = 0;
    for (int i = 0; i < n; i++) {
      sum = (a + b) % 1000000007;
      a = b;
      b = sum;
    }
    return a;
  }
};
