#include <vector>
using namespace std;
class Solution {
 public:
  vector<int> GetMinKNumber(vector<int>& arr, int k) {
    if (k == arr.size()) {
      return arr;
    }
    if (k == 0) {
      return {};
    }
    this->k = k;
    return QuickSort(arr, 0, arr.size() - 1);
  }

 private:
  int k;
  vector<int> QuickSort(vector<int>& arr, int l, int r) {
    int x = arr[l], i = l - 1, j = r + 1;
    while (i < j) {
      do
        i++;
      while (arr[i] < x);
      do
        j--;
      while (arr[j] > x);
      if (i < j) {
        swap(arr[i], arr[j]);
      }
    }
    if (j + 1 > k) {
      return QuickSort(arr, l, j);
    }
    if (j + 1 < k) {
      return QuickSort(arr, j + 1, r);
    }
    vector<int> res;
    res.assign(arr.begin(), arr.begin() + k);
    return res;
  }
};
