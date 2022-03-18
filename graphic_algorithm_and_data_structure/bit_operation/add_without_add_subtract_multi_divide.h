class Solution {
 public:
  int Add(int a, int b) {
    while (b != 0) {
      int c = (unsigned int)(a & b) << 1;// carry
      a = a ^ b;// no carry
      b = c;
    }
    return a;
  }
};
