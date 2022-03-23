#include <string>
#include <unordered_map>
using namespace std;
class Solution {
 private:
  unordered_map<char, int> states[9] = {
      {{' ', 0}, {'s', 1}, {'d', 2}, {'.', 4}},  //! 0.
      {{'d', 2}, {'.', 4}},                      //! 1.
      {{'d', 2}, {'.', 3}, {'e', 5}, {' ', 8}},  //! 2.
      {{'d', 3}, {'e', 5}, {' ', 8}},            //! 3.
      {{'d', 3}},                                //! 4.
      {{'s', 6}, {'d', 7}},                      //! 5.
      {{'d', 7}},                                //! 6.
      {{'d', 7}, {' ', 8}},                      //! 7.
      {{' ', 8}}                                 //! 8.
  };

 public:
  bool isNumber(string s) {
    int p = 0;
    char t;
    for (auto c : s) {
      if (c >= '0' && c <= '9')
        t = 'd';
      else if (c == '+' || c == '-')
        t = 's';
      else if (c == 'e' || c == 'E')
        t = 'e';
      else if (c == '.' || c == ' ')
        t = c;
      else
        t = '?';
      auto it = states[p].find(t);
      if (it == states[p].end()) return false;
      p = (int)it->second;
    }
    return p == 2 || p == 3 || p == 7 || p == 8;
  }
};
