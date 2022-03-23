#include <stack>
#include <vector>
using namespace std;
class Solution {
 public:
  bool ValidateStackSequence(vector<int>& pushed, vector<int>& popped) {
    if (pushed.empty() || popped.empty()) {
      return true;
    }
    stack<int> stk;
    int i = 0;  // record subscript of popped
    for (auto n : pushed) {
      stk.push(n);
      while (!stk.empty() && stk.top() == popped[i]) {
        // use while to pop element continuously
        stk.pop();
        i++;
      }
    }
    return stk.empty();
  }
};
