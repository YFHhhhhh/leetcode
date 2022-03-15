#include <queue>
#include <vector>
using namespace std;
class MedianFinder {
 public:
  MedianFinder() {}

  void AddNum(int num) {
    if (A.size() == B.size()) {
      B.push(num);
      A.push(B.top());
      B.pop();
    } else {
      A.push(num);
      B.push(A.top());
      A.pop();
    }
  }

  double FindMedian() {
    if (A.size() == B.size()) {
      return (A.top() + B.top()) / 2.0;
    } else {
      return A.top();
    }
  }

 private:
  priority_queue<int, vector<int>, greater<int>> A;
  priority_queue<int, vector<int>, greater<int>> B;
};
