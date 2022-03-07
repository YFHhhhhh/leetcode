#include <vector>

#include "treenode.h"
using namespace std;
class Solution {
 public:
  vector<int> PreOrder(TreeNode* root) {
    vector<int> res;
    PreOrderTraversal(root, res);
    return res;
  }
  vector<int> InOrder(TreeNode* root) {
    vector<int> res;
    InOrderTraversal(root, res);
    return res;
  }
  vector<int> PostOrder(TreeNode* root) {
    vector<int> res;
    PostOrderTraversal(root, res);
    return res;
  }

 private:
  void PreOrderTraversal(TreeNode* root, vector<int>& res) {
    if (!root) {
      return;
    }
    res.emplace_back(root->val);
    PreOrderTraversal(root->left, res);
    PreOrderTraversal(root->right, res);
  }
  void InOrderTraversal(TreeNode* root, vector<int>& res) {
    if (!root) {
      return;
    }
    InOrderTraversal(root->left, res);
    res.emplace_back(root->val);
    InOrderTraversal(root->right, res);
  }
  void PostOrderTraversal(TreeNode* root, vector<int>& res) {
    if (!root) {
      return;
    }
    PostOrderTraversal(root->left, res);
    PostOrderTraversal(root->right, res);
    res.emplace_back(root->val);
  }
};
