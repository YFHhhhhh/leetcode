#include <deque>
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
    deque<TreeNode*> dq;
		dq.push_back(root);
    while (!dq.empty()) {
      vector<int> tmp;
      for (int i = dq.size(); i > 0; i--) {
        TreeNode* node = dq.front();
        dq.pop_front();
        tmp.emplace_back(node->val);
        if (node->left) {
          dq.push_back(node->left);
        }
        if (node->right) {
          dq.push_back(node->right);
        }
      }
      res.emplace_back(tmp);
      if (dq.empty()) {
        break;
      }
      tmp.clear();
      for (int i = dq.size(); i > 0; i--) {
        TreeNode* node = dq.back();
        dq.pop_back();
        tmp.emplace_back(node->val);
        if (node->right) {
          dq.push_front(node->right);
        }
        if (node->left) {
          dq.push_front(node->left);
        }
      }
      res.emplace_back(tmp);
    }
    return res;
  }
};
