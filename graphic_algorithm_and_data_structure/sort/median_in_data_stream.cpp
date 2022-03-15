#include "median_in_data_stream.h"

#include <iostream>
using namespace std;
int main() {
  MedianFinder test;
  test.AddNum(1);
  test.AddNum(2);
  cout << test.FindMedian() << endl;
}
