#include <stack>

#include "treenode.h"
using namespace std;
class Solution {
 public:
  bool IsSymmetricalInRecur(TreeNode* root) {
    if (!root) {
      return true;
    }
    return recur(root->left, root->right);
  }

  bool IsSymmetricalInIteration(TreeNode* root) {
    if (!root) {
      return true;
    }
    stack<TreeNode*> stk;
    stk.push(root);
    stk.push(root);
    while (!stk.empty()) {
      TreeNode* node1 = stk.top();
      TreeNode* node2 = stk.top();
      stk.pop();
      stk.pop();
      if (!node1 && !node2) {
        continue;
      }
      if (!node1 || !node2 || node1->val != node2->val) {
        return false;
      }
      stk.push(node1->left);
      stk.push(node2->right);
      stk.push(node1->right);
      stk.push(node2->left);
    }
    return true;
  };

 private:
  bool recur(TreeNode* left, TreeNode* right) {
    if (!left && !right) {
      return true;
    }
    if (!left || !right || left->val != right->val) {
      return false;
    }
    return recur(left->left, right->right) && recur(left->right, right->left);
  }
};
