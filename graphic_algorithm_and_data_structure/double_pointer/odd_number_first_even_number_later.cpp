#include "odd_number_first_even_number_later.h"

#include <iostream>
#include <vector>
using namespace std;
int main() {
  Solution solu;
  vector<int> test = {1, 2, 3, 4};
  vector<int> res = solu.Exchange(test);
  for (auto n : res) {
    cout << n << ' ';
  }
  cout << endl;
}
