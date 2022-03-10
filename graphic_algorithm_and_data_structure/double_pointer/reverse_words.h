#include <string>
using namespace std;
class Solution {
 public:
  string ReverseWords(string& s) {
    string ss = " ";
    ss.append(s);
    string res;
    int slow = ss.length() - 1, fast = ss.length() - 1;
    while (fast >= 0) {
      if (fast == slow) {
        if (ss[fast] == ' ') {
          slow--;
        }
      } else {
        if (ss[fast] == ' ') {
          if (res.length() != 0) {
            res.append(" ");
          }
          res.append(ss.substr(fast + 1, slow - fast));
          slow = fast;
          slow--;
        }
      }
      fast--;  // must write here, or while failed.
    }
    return res;
  }
};
