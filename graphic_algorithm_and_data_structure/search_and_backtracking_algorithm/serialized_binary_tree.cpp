#include "serialized_binary_tree.h"

#include <iostream>
#include <string>
#include <vector>
int main() {
  Solution solu;
  TreeNode first(1);
  TreeNode second(2);
  TreeNode third(3);
  TreeNode forth(4);
  TreeNode fifth(5);
  first.left = &second;
  first.right = &third;
  third.left = &forth;
  third.right = &fifth;
  string res = solu.Serialize(&first);
  cout << res << endl;
}
