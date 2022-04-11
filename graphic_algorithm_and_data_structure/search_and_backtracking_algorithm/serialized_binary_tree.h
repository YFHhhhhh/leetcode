#include <queue>
#include <string>
#include <vector>

#include "treenode.h"
using namespace std;
class Solution {
 public:
  string Serialize(TreeNode* root) {
    if (root == nullptr) {
      return "[]";
    }
    string res = "[";
    queue<TreeNode*> que;
    que.push(root);
    while (!que.empty()) {
      TreeNode* node = que.front();
      que.pop();
      if (node != nullptr) {
        que.push(node->left);
        que.push(node->right);
        res += to_string(node->val);
        res += ",";
      } else {
        res += "null,";
      }
    }
    res.pop_back();
    res += "]";
    return res;
  }

  TreeNode* Deserialize(string& data) {
    if (data == "[]") {
      return nullptr;
    }
    vector<string> vec = split(data);
    TreeNode* root = new TreeNode(stoi(vec[0]));
    queue<TreeNode*> que;
    que.push(root);
    int i = 1;
    while (!que.empty()) {
      TreeNode* node = que.front();
      que.pop();
      if (vec[i] != "null") {
        node->left = new TreeNode(stoi(vec[i]));
        que.push(node->left);
      }
      i++;
      if (vec[i] != "null") {
        node->right = new TreeNode(stoi(vec[i]));
        que.push(node->right);
      }
      i++;
    }
    return root;
  }

 private:
  vector<string> split(string& data) {
    vector<string> res;
    int i = 0, j = 0, len = data.length();
    while (i < len) {
      while (j < len && j != ',') {
        j++;
      }
      i = ++j;
      data += data.substr(i, j - i);
    }
    return res;
  }
};
