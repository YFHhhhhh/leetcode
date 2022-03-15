#include <vector>
using namespace std;
class Solution {
 public:
  bool IsStraight(vector<int>& nums) {
    QuickSort(nums, 0, nums.size() - 1);
    int count = 0;
    for (int i = 0; i < nums.size() - 1; i++) {
      if (nums[i] == 0) {
        count++;
      } else if (nums[i] == nums[i + 1]) {
        return false;
      }
    }
    int max_diff = nums[nums.size() - 1] - nums[count];
    if (max_diff < 5) {
      return true;
    } else {
      return false;
    }
  }

 private:
  void QuickSort(vector<int>& nums, int l, int r) {
    if (l >= r) {
      return;
    }
    int x = nums[l], i = l - 1, j = r + 1;
    while (i < j) {
      do
        i++;
      while (nums[i] < x);
      do
        j--;
      while (nums[j] > x);
      if (i < j) {
        swap(nums[i], nums[j]);
      }
    }
    QuickSort(nums, l, j);
    QuickSort(nums, j + 1, r);
  }
};
