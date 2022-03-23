#include <string>

#include "limits.h"
using namespace std;
class Solution {
 public:
  int StrToInt(string& s) {
    int res = 0, boundary = INT_MAX / 10;
    int i = 0, sign = 1, len = s.size();
    if (len == 0) {
      return 0;
    }
    while (i < len && s[i] == ' ') {
      i++;
    }
    if (i == len) {
      return 0;
    }
    if (s[i] == '-') {
      sign = -1;
    }
    if (s[i] == '-' || s[i] == '+') {
      i++;
    }
    for (int j = i; j < len; j++) {
      // handle non-number char here
      if (s[j] < '0' || s[j] > '9') {
        break;
      }
      if (res > boundary || (res == boundary && s[j] > '7')) {
        // handle number boundary ahead, or the res will beyond boundary
        return sign == 1 ? INT_MAX : INT_MIN;
      }
      res = 10 * res + (s[j] - '0');
    }
    return sign * res;
  }
};

