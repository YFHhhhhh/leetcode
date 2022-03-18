#include "commom_nearest_ancestor_in_binary__tree.h"

#include <iostream>
using namespace std;
int main() {
  Solution solu;
  TreeNode first(0);
  TreeNode second(1);
  TreeNode third(2);
  first.left = &second;
  first.right = &third;
  cout << solu.NearestCommonAncestor(&first, &second, &third)->val << endl;
}
