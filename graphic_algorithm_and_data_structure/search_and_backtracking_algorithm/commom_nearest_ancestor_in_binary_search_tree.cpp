#include "commom_nearest_ancestor_in_binary_search_tree.h"

#include <iostream>
using namespace std;
int main() {
  Solution solu;
  TreeNode first(3);
  TreeNode second(1);
  TreeNode third(4);
  first.left = &second;
  first.right = &third;
  cout << solu.NearsetCommonAncestor(&first, &second, &third)->val << endl;
}
