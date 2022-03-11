#include <vector>

#include "treenode.h"
using namespace std;
class Solution {
 public:
  vector<vector<int>> PathSum(TreeNode* root, int target) {
    dfs(root, target);
    return res;
  }

 private:
  vector<vector<int>> res;// define private member variable so that reduce paramerter of dfs.
  vector<int> path;
  void dfs(TreeNode* node, int target) {
    if (!node) {
      return;
    }
    target -= node->val;
    path.emplace_back(node->val);
    if (target == 0 && !node->left && !node->right) {
      res.emplace_back(path);//cannot retur here, or the path will not pop_back;
    }
    dfs(node->left, target);
    dfs(node->right, target);
    path.pop_back();// backtrace!!!
  }
};
