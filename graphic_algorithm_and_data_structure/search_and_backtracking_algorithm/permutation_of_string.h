#include <set>
#include <string>
#include <utility>
#include <vector>
using namespace std;
class Solution {
 public:
  vector<string> Permutation(string& s) {
    Dfs(s, 0);
    return res;
  }

 private:
  vector<string> res;
  void Dfs(string s, int x) {
    if (x == s.length() - 1) {
      res.emplace_back(s);
    }
    set<int> st;
    for (int i = x; i < s.length(); i++) {
      if (st.find(s[i]) != st.end()) {
        continue;
      }
      st.insert(s[i]);
      swap(s[i], s[x]);
      Dfs(s, x + 1);
      swap(s[i], s[x]);
    }
  }
};
