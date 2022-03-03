#include <stack>
#include <vector>
using namespace std;
class CQueue {
 private:
  stack<int> A;
  stack<int> B;

 public:
  CQueue() {}

  void appendTail(int value) { A.push(value); }

  int deleteHead() {
    if (B.empty()) {
      if (A.empty()) {
        return -1;
      } else {
        while (!A.empty()) {
          int tmp = A.top();
          B.push(tmp);
          A.pop();
        }
        int tmp = B.top();
        B.pop();
        return tmp;
      }
    } else {
      int tmp = B.top();
      B.pop();
      return tmp;
    }
  }
};
