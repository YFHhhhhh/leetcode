#include <stack>
#include <vector>

#include "treenode.h"
using namespace std;
class Solution {
 public:
  vector<int> PreOrder(TreeNode* root) {
    vector<int> res;
    if (!root) {
      return res;
    }
    stack<TreeNode*> stk;
    TreeNode* node = root;
    while (!stk.empty() || node) {
      while (node) {
        // push the whole branch until nullptr (for dfs)
        res.emplace_back(node->val);
        stk.push(node);
        node = node->left;
      }
      TreeNode* tmp = stk.top();  // pop the top node
      stk.pop();
      node = tmp->right;  // the right branch will be pushed in the next outer
                          // while
    }
    return res;
  }
  vector<int> InOrder(TreeNode* root) {
    vector<int> res;
    if (!root) {
      return res;
    }
    stack<TreeNode*> stk;
    TreeNode* node = root;
    while (!stk.empty() || node) {
      while (node) {
        stk.push(node);
        node = node->left;
      }
      TreeNode* tmp = stk.top();
      stk.pop();
      res.emplace_back(tmp->val);
      node = tmp->right;
    }
    return res;
  }
  vector<int> PostOrder(TreeNode* root) {
    vector<int> res;
    if (!root) {
      return res;
    }
    stack<TreeNode*> stk;
    TreeNode* node = root;
    TreeNode* prev = nullptr;
    while (!stk.empty() || node) {
      while (node) {
        stk.push(node);
        node = node->left;
      }
      TreeNode* tmp = stk.top();
      stk.pop();
      if (!tmp->right || tmp->right == prev) {
        // if no unemplaced right node
        res.emplace_back(tmp->val);  // emplace the node
        prev = tmp;
        node = nullptr;  // pop next node in next outer while
      } else {
        // if there is unemplaced right node
        stk.push(tmp);      // push current node again
        node = tmp->right;  // traverse the right branch in the next outer while
      }
    }
    return res;
  }
};
