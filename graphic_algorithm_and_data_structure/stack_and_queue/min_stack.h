#include <stack>
using namespace std;
class MinStack {
 private:
  stack<int> real_stack;
  stack<int> min_stack;

 public:
  MinStack() {}

  void push(int x) {
    real_stack.push(x);
    if (min_stack.empty() || x <= min_stack.top()) {
      min_stack.push(x);
    }
  }

  void pop() {
    if (real_stack.top() == min_stack.top()) {
      min_stack.pop();
    }
    real_stack.pop();
  }

  int top() { return real_stack.top(); }
  int min() { return min_stack.top(); }
};
