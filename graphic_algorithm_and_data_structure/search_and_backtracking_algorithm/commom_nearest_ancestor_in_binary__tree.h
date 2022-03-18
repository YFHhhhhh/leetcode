#include "treenode.h"
class Solution {
 public:
  TreeNode* NearestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (!root || root == p || root == q) {
      return root;
    }
    TreeNode* left = NearestCommonAncestor(root->left, p, q);
    TreeNode* right = NearestCommonAncestor(root->right, p, q);
    if (!left && !right) {
      return nullptr;
    }
    if (!left) {
      return right;
    }
    if (!right) {
      return left;
    }
    return root;
  }
};
