#include "max_queue.h"

#include <iostream>
using namespace std;
int main() {
  MaxQueue max_queue;
  max_queue.push_back(1);
  max_queue.push_back(2);
  cout << max_queue.max_value() << endl;
  cout << max_queue.pop_back() << endl;
  cout << max_queue.max_value() << endl;
}
