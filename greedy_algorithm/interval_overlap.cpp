#include <limits.h>

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct Range {
  int l, r;

  Range(int l, int r) : l(l), r(r) {}

  bool operator<(const Range& _t) { return l < _t.l; }
};

int main() {
  int st, ed;
  cin >> st >> ed;

  int n;
  cin >> n;

  vector<Range> range;
  for (int i = 0; i < n; i++) {
		// 以左端点升序排列
    int l, r;
    cin >> l >> r;
    range.emplace_back(Range(l, r));
  }

  sort(range.begin(), range.end());

  int res = 0;
  bool success = false;// 用success判断for循环是怎么退出的
  for (int i = 0; i < n; i++) {
		// 从头枚举
    int j = i, r = INT_MIN;
    while (j < n && range[j].l <= st) {
			// 从i开始枚举后面的区间，若满足左端点小于st，则继续枚举，直到出现不满足的
      r = max(r, range[j].r);// 同时记录下在此次while循环中最大的右端点，作为下次while循环的st。***取右端点最大作为基准体现了贪心思想***
			j++;
    }
    if (r < st) {
			// 如果r值小于st，则说明出现断档，直接返回误解
      res = -1;
      break;
    }
    res++;
    if (r >= ed) {
			// 如果r值已经大于总的ed，则终止循环即可
      success = true;
      break;
    }
    st = r;// 更新st为r
    i = j - 1;
  }

  if (success) {
    cout << res << endl;
  } else {
    cout << -1 << endl;
  }
  return 0;
}
