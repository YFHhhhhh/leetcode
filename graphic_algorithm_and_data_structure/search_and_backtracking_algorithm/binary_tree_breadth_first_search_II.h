#include <queue>
#include <vector>

#include "treenode.h"
using namespace std;
class Solution {
 public:
  vector<vector<int>> LevelOrder(TreeNode* root) {
    vector<vector<int>> res;
    if (!root) {
      return res;
    }
    queue<TreeNode*> que;
    que.push(root);
    while (!que.empty()) {
      vector<int> tmp_res;
      for (int i = que.size(); i > 0; i--) {
        TreeNode* tmp_node = que.front();
        que.pop();
        tmp_res.emplace_back(tmp_node->val);
        if (tmp_node->left) {
          que.push(tmp_node->left);
        }
        if (tmp_node->right) {
          que.push(tmp_node->right);
        }
      }
      res.emplace_back(tmp_res);
    }
    return res;
  }
};
