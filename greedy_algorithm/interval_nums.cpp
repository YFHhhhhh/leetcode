#include <limits.h>

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct Range {
  int l, r;

  Range(int l, int r) : l(l), r(r) {}

  bool operator<(const Range& t_) { return l < t_.l; }
};

int main() {
  int n;
  cin >> n;

  vector<Range> range;
  for (int i = 0; i < n; i++) {
    int l, r;
    cin >> l >> r;
    range.emplace_back(Range(l, r));
  }

  sort(range.begin(), range.end());// 按照左端点升序排列

  int res = 1, min_r = range[0].r;
  for (int i = 1; i < n; i++) {
    if (range[i].l > min_r) {
			// 如果不相交，则res++，同时改变比较基准
      res++;
      min_r = range[i].r;
    } else {
			// 如果存在相交，则更新比较基准为所有相交区间右端点的最小值
      min_r = min(min_r, range[i].r);
    }
  }

  cout << res << endl;

  return 0;
}
