#include <algorithm>
#include <functional>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct Range {
  int l, r;

  Range(int l, int r) : l(l), r(r) {}

  bool operator<(const Range& t_) {
    return l < t_.l;
  }  //定义结构体的小于号，用于后续sort，升序排序
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

  sort(rge.begin(), rge.end());  // 按照左端点升序排序

  priority_queue<int, vector<int>, greater<int>>
      heap;  // 定义小顶堆（最小的元素优先级最高，位于队首），从而得到所有分组中右端点最小的
  for (int i = 0; i < rge.size(); i++) {
    if (heap.empty() || rge[i].l <= heap.top()) {
			// ***维护一个小顶堆，每次和r最小的组比较并更新，体现了贪心思想***
      // 因为所有区间已经按照左端点升序排列了，如果当前区间左端点小于所有分组最小右端点，则无法放入任何组
      heap.push(rge[i].r);
    } else {
      // 至少可以放入右端点最小的组，当然也可能放入别的组，故直接放入右端点最小的组即可满足，并不会导致最终结果不是最优的，因为heap内的各组均是互斥的
      heap.pop();
      heap.push(rge[i].r);
    }
  }

  cout << heap.size() << endl;

  return 0;
}
