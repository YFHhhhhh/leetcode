#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
 public:
  char FindUniqueChar(string &s) {
    if (s.length() == 1) {
      return s[0];
    }
    vector<char> keys;
    unordered_map<char, bool> maps;
    for (auto ch : s) {
      if (maps.find(ch) == maps.end()) {
        keys.emplace_back(ch);
      }
      maps[ch] = maps.find(ch) == maps.end();
    }
    for (auto key : keys) {
      if (maps[key] == true) {
        return key;
      }
    }
    return ' ';
  }
};
