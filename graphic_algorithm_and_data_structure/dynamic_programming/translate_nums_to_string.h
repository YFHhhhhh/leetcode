#include <string>
using namespace std;
class Solution {
 public:
  int TranslateNum(int num) {
    int a = 1, b = 1, x = num % 10;// "a" is a fake one, but it will make the while easy.
    while (num > 9) {
      num = num / 10;
      int y = num % 10;
      int tmp = 10 * y + x;
      int c = tmp >= 10 && tmp <= 25 ? a + b : b;
      a = b;
      b = c;
      x = y;
    }
    return b;
  }

  int TranslateNumInString(int num) {
    string s = to_string(num);// translate numbers to string
    int a = 1, b = 1;// "a" is a fake one, but it will make the for easy.
    for (int i = 1; i < s.length(); i++) {
      int tmp = 10 * int(s[i - 1] - '0') + int(s[i] - '0');// use ASCII to translate char to number.
      int c = tmp >= 10 && tmp <= 25 ? a + b : b;
      a = b;
      b = c;
    }
    return b;
  }
};
