#include "binary_tree_breadth_first_search_III.h"

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
  vector<vector<int>> res = solu.LevelOrder(&first);
  int m = res.size();
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < res[i].size(); j++) {
      cout << res[i][j] << ' ';
    }
    cout << endl;
  }
}

