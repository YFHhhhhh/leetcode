#include "path_in_binary_tree.h"

#include <iostream>
#include <vector>
using namespace std;
int main() {
  Solution solu;
  TreeNode first(1);
  TreeNode second(5);
  TreeNode third(2);
  TreeNode forth(3);
  first.left = &second;
  first.right = &third;
  third.right = &forth;
  vector<vector<int>> res = solu.PathSum(&first, 6);
  for (int i = 0; i < res.size(); i++) {
    for (int j = 0; j < res[i].size(); j++) {
      cout << res[i][j] << ' ';
    }
    cout << endl;
  }
}
