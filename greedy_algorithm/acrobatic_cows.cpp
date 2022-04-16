#include <limits.h>

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct Cow {
  int w, s;
  Cow(int w, int s) : w(w), s(s) {}
  bool operator<(const Cow& t_) { return w + s < t_.w + t_.s; }
};

int main() {
  int n;
  cin >> n;

  vector<Cow> cow;
  for (int i = 0; i < n; i++) {
    int w, s;
    cin >> w >> s;
    cow.emplace_back(Cow(w, s));
  }

	// 按照w+s从小到大排序，会使所有风险的最大值最小，可用反证法证明
  sort(cow.begin(), cow.end());

  int res = INT_MIN, tmp = 0;
  for (int i = 0; i < n; i++) {
    res = max(res, tmp - cow[i].s);
    tmp += cow[i].w;
  }

  cout << res << endl;

  return 0;
}
