#include <string>
using namespace std;
class Solution {
 public:
	//In cpp, string is variable, so you can resize it and edit it to reduce spatial complexity.
  string ReplaceSpace(string &s) {
    int size = s.size();
    int count = 0;
    for (auto c : s) {
      if (c == ' ') {
        count++;
      }
    }
    int len = size + 2 * count;
    s.resize(len);
    for (int i = size - 1, j = len - 1; i < j; i--, j--) {
      if (s[i] != ' ') {
        s[j] = s[i];
      } else {
        s[j] = '0';
        s[j - 1] = '2';
        s[j - 2] = '%';
        j = j - 2;
      }
    }
		return s;
  }
};
