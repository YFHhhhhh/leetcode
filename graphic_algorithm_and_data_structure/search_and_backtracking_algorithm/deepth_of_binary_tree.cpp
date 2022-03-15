#include "deepth_of_binary_tree.h"

#include <iostream>
using namespace std;
int main() {
  Solution solu;
  TreeNode first(0);
  TreeNode second(0);
  TreeNode third(0);
  first.left = &second;
  second.left = &third;
  cout << solu.MaxDeepthDFS(&first) << endl;
  cout << solu.MaxDeepthBFS(&first) << endl;
}
