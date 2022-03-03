#include <iostream>
#include <string>
using namespace std;
class Solution {
 public:
  string ReverseLeftWords(string &s, int n) {
    int size = s.size();
    int m = n % size;
    ReverseString(s, 0, m - 1);
    ReverseString(s, m, size - 1);
    ReverseString(s, 0, size - 1);
    return s;
  }

 private:
  void ReverseString(string &s, int begin, int end) {
    while (begin < end) {
      swap(s[begin++], s[end--]);
    }
  }
};
