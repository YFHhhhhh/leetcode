#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct Range {
  int l, r;

  Range(int l, int r) : l(l), r(r) {}

  bool operator<(const Range& _t) { return r < _t.r; }
};

int main() {
  int n;
  cin >> n;

  vector<Range> rge;
  for (int i = 0; i < n; i++) {
    int l, r;
    cin >> l >> r;
    rge.emplace_back(Range(l, r));
  }

  sort(rge.begin(), rge.end()); // 按照右端点升序排列

  int cur = 0, res = 1;
  for (int i = 1; i < rge.size(); i++) {
		// 每次拿当前端点的右端点与枚举端点的左端点比较，因为已经按照右端点排序了，故只要枚举左端点小于当前右端点，比相交，更新
    if (rge[i].l > rge[cur].r) {
      res++;// 结果+1
      cur = i;// 更新当前端点（比较基准）
    }
  }

  cout << res << endl;

  return 0;
}
