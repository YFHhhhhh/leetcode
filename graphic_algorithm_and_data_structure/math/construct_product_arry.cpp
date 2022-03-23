#include "construct_product_arry.h"

#include <iostream>
#include <vector>
int main() {
  Solution solu;
  std::vector<int> test = {1, 2, 3, 4, 5};
  std::vector<int> res = solu.ProductArry(test);
  for (auto n : res) {
    std::cout << n << ' ';
  }
  std::cout << std::endl;
}
