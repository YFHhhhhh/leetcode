#include <stack>

#include "treenode.h"
using namespace std;
class Solution {
 public:
  TreeNode* MirrorTreeInRecru(TreeNode* root) {
    if (root == nullptr) {
      return root;
    }
    TreeNode* tmp = root->left;
    root->left = MirrorTreeInRecru(root->right);
    root->right = MirrorTreeInRecru(tmp);
    return root;
  }

  TreeNode* MirrorTreeInStack(TreeNode* root) {
    if (root == nullptr) {
      return root;
    }
    stack<TreeNode*> stk;
    stk.push(root);
    while (!stk.empty()) {
      TreeNode* node = stk.top();
      stk.pop();
      if (node->left) {
        stk.push(node->left);
      }
      if (node->right) {
        stk.push(node->right);
      }
      TreeNode* tmp = node->left;
      node->left = node->right;
      node->right = tmp;
    }
    return root;
  }
};
