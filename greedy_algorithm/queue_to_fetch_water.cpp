#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> nums;
  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    nums.emplace_back(tmp);
  }

  sort(nums.begin(), nums.end());

  long long res = 0;
  int size = nums.size();
  for (int i = 0; i < size; i++) {
    res += nums[i] * (size - i - 1);
  }

  cout << res << endl;

  return 0;
}
