#include "single_numbers_I.h"

#include <iostream>
#include <ostream>
#include <vector>
int main() {
  Solution solu;
  std::vector<int> test = {4, 1, 4, 6};
  std::vector<int> res = solu.Single_Numbers(test);
  for (auto n : res) {
    std::cout << n << ' ';
  }
  std::cout << std::endl;
}
