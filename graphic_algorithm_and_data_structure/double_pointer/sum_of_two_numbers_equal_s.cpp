#include "sum_of_two_numbers_equal_s.h"

#include <iostream>
#include <vector>
using namespace std;
int main() {
  Solution solu;
  vector<int> test = {2, 7, 11, 15};
  vector<int> res = solu.TwoSum(test, 9);
  for (auto n : res) {
    cout << n << ' ';
  }
  cout << endl;
}
