#include <deque>
#include <queue>
using namespace std;
class MaxQueue {
 public:
  MaxQueue() {}

  int max_value() { return que.empty() ? -1 : dq.front(); }

  void push_back(int value) {
    que.push(value);
    while (!dq.empty() && value > dq.back()) {
      dq.pop_back();
    }
    dq.push_back(value);
  }

  int pop_back() {
    if (que.empty()) {
      return -1;
    } else {
      int tmp = que.front();
      que.pop();
      if (tmp == dq.front()) {
        dq.pop_front();
      }
      return tmp;
    }
  }

 private:
  queue<int> que;
  deque<int> dq;
};
