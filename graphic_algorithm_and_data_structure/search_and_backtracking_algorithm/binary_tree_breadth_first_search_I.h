#include <queue>
#include <vector>

#include "treenode.h"
using namespace std;
class Solution {
 public:
  vector<int> LevelOrder(TreeNode* root) {
    vector<int> res;
    if (!root) {
      return res;
    }
    queue<TreeNode*> que;
    que.push(root);
    while (!que.empty()) {
      TreeNode* tmp = que.front();
      que.pop();
      res.emplace_back(tmp->val);
      if (tmp->left) {
        que.push(tmp->left);
      }
      if (tmp->right) {
        que.push(tmp->right);
      }
    }
    return res;
  }
};
