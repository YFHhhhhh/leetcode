#include <string>
#include <unordered_map>
using namespace std;
class Solution {
 public:
  int FindLongestNoRepeatSubString(string& s) {
    unordered_map<char, int> mp;
    int res = 0, prev = 0, j = -1;
    for (int i = 0; i < s.length(); i++) {
      if (mp.find(s[i]) == mp.end()) {
        j = -1;
      } else {
        j = mp[s[i]];
      }
      mp[s[i]] = i;
      if (i - j > prev) {
        res = max(res, prev + 1);
        prev = prev + 1;
      } else {
        res = max(res, i - j);
        prev = i - j;
      }
    }
    return res;
  }
};
