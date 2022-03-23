#include "more_than_half_num_in_arry.h"

#include <iostream>
#include <vector>
int main() {
  Solution solu;
  std::vector<int> test = {1, 2, 3, 2, 2, 2, 5, 4, 2};
  std::cout << solu.MajorityElement(test) << std::endl;
}
