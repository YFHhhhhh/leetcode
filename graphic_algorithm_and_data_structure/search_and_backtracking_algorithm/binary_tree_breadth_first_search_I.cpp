#include "binary_tree_breadth_first_search_I.h"

#include <iostream>
#include <vector>
using namespace std;
int main() {
  Solution solu;
  TreeNode first(3);
  TreeNode second(9);
  TreeNode third(20);
  TreeNode forth(15);
  TreeNode fifth(7);
  first.left = &second;
  first.right = &third;
  third.left = &forth;
  third.right = &fifth;
  vector<int> res = solu.LevelOrder(&first);
  for (auto r : res) {
    cout << r << ' ';
  }
  cout << endl;
}
