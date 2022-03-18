#include "use_postorder_to_judge_binary_search_tree.h"

#include <iostream>
#include <vector>
int main() {
  Solution solu;
  vector<int> test = {1, 3, 2, 6, 5};
  std::cout << solu.VerfyPostorder(test) << std::endl;
}
