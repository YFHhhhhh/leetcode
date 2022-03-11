#include "treenode.h"
class Solution {
 public:
  TreeNode* TreeToDoubleList(TreeNode* root) {
    if (!root) {
      return root;
    }
    Dfs(root);
    head->left = pre;
    pre->right = head;
    return head;
  }

 private:
  TreeNode *pre, *head;// use private member variable to mark so that can reduce parameter of dfs. 
  void Dfs(TreeNode* cur) {
    if (!cur) {
      return;
    }
    Dfs(cur->right);
    if (!pre) {
      head = cur;
    } else {
      pre->right = cur;
    }
    cur->left = pre;
    pre = cur;
    Dfs(cur->right);
  }
};
