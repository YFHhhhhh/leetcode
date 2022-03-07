#include "symmetrical_binary_tree.h"

#include <iostream>
using namespace std;
int main() {
  Solution solu;
  TreeNode first(1);
  TreeNode second(2);
  TreeNode third(2);
  TreeNode forth(3);
  TreeNode fifth(4);
  TreeNode sixth(4);
  TreeNode seventh(3);
  first.left = &second;
  first.right = &third;
  second.left = &forth;
  second.right = &fifth;
  third.left = &sixth;
  third.right = &seventh;
  cout << solu.IsSymmetricalInIteration(&first) << endl;
  cout << solu.IsSymmetricalInRecur(&first) << endl;
}
