#include <vector>
using namespace std;
class Solution {
 public:
  int FindNumInOrderedArray(vector<int> &nums, int target) {
    int i = 0, j = nums.size() - 1;
    // find right boundary
    while (i <= j) {
      int m = (i + j) / 2;
      if (target >= nums[m]) {
        i = m + 1;
      } else {
        j = m - 1;
      }
    }
    int right = i;
    // find left boundary
    i = 0;
    j = nums.size();
    while (i <= j) {
      int m = (i + j) / 2;
      if (target <= nums[m]) {
        j = m - 1;
      } else {
        i = m + 1;
      }
    }
    int left = j;
    return right - left - 1;
  }

  // template for binary search
  int TemplateForBinarySearch(vector<int> &nums, int target) {
    if (nums.size() == 0) {
      return 0;
    }
    int l = 0, r = nums.size() - 1;

    // find the right boundary, check: nums[m] <= target
    while (l < r) {
      int m = (l + r + 1) / 2;
      if (nums[m] <= target) {
        l = m;
      } else {
        r = m - 1;
      }
    }
    if (nums[l] != target) {
      return 0;
    }
    int right = l;

    // find the left boundary, check: nums[m] >= target
    l = 0;
    r = nums.size() - 1;
    while (l < r) {
      int m = (l + r) / 2;
      if (nums[m] >= target) {
        r = m;
      } else {
        l = m + 1;
      }
    }
    int left = l;

    return right - left + 1;
  }
};
