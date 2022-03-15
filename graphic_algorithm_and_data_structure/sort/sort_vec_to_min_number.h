#include <cstdarg>
#include <string>
#include <vector>
using namespace std;
class Solution {
 public:
  string MinNumber(vector<int>& nums) {
    vector<string> strs;
    for (auto n : nums) {
      strs.emplace_back(to_string(n));
    }
    QuickSort(strs, 0, strs.size() - 1);
    string res;
    for (auto str : strs) {
      res.append(str);
    }
    return res;
  }

 private:
  void QuickSort(vector<string>& strs, int l, int r) {
    if (l <= r) {
      return;
    }
    string x = strs[l];
    int i = l - 1, j = r + 1;
    while (i < j) {
      do
        i++;
      while (strs[i] + x < x + strs[i]);
      do
        j++;
      while (strs[j] + x > x + strs[j]);
      if (i < j) {
        swap(strs[i], strs[j]);
      }
    }
    QuickSort(strs, l, j);
    QuickSort(strs, j + 1, r);
  }
};
