#include <algorithm>
#include <cmath>

#include "treenode.h"
class Solution {
 public:
  bool IsBalanced(TreeNode* root) { return Dfs(root) == -1 ? false : true; }

 private:
  int Dfs(TreeNode* root) {
    if (!root) {
      return 0;
    }
    int left = Dfs(root->left);
    if (left == -1) {
      return -1;
    }
    int right = Dfs(root->right);
    if (right == -1) {
      return -1;
    }
    return std::abs(left - right) <= 1 ? std::max(left, right) + 1 : -1;
  }
};
