#include "min_stack.h"

#include <iostream>
using namespace std;
int main() {
  MinStack test;
  test.push(-2);
  test.push(0);
  test.push(-3);
  cout << test.min() << endl;
  test.pop();
  cout << test.top() << endl;
  cout << test.min() << endl;
}

