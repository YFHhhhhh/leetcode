#include <algorithm>
#include <queue>

#include "treenode.h"
using namespace std;
class Solution {
 public:
  int MaxDeepthDFS(TreeNode* root) {
    Dfs(root);
    return max_deep_;
  }

  int MaxDeepthBFS(TreeNode* root) {
    if (!root) {
      return 0;
    }
    int count = 0;
    queue<TreeNode*> que;
    que.push(root);
    while (!que.empty()) {
      count++;
      for (int i = que.size(); i > 0; i--) {
        TreeNode* tmp = que.front();
        que.pop();
        if (tmp->left) {
          que.push(tmp->left);
        }
        if (tmp->right) {
          que.push(tmp->right);
        }
      }
    }
    return count;
  }

 private:
  int deep_ = 0;
  int max_deep_ = 0;
  void Dfs(TreeNode* root) {
    if (!root) {
      return;
    }
    deep_++;
    max_deep_ = max(deep_, max_deep_);
    Dfs(root->left);
    deep_--;
    Dfs(root->right);
    deep_--;
  }
};
