#include "mirror_tree.h"

#include <iostream>
#include <queue>
using namespace std;
int main() {
  Solution solu;
  TreeNode first(3);
  TreeNode second(9);
  TreeNode third(20);
  TreeNode forth(15);
  TreeNode fifth(7);
  first.left = &second;
  first.right = &third;
  third.left = &forth;
  third.right = &fifth;
  TreeNode* res = solu.MirrorTreeInRecru(&first);
  TreeNode* res1 = solu.MirrorTreeInRecru(&first);
  queue<TreeNode*> que;
  que.push(res);
  while (!que.empty()) {
    TreeNode* node = que.front();
    que.pop();
    if (node->left) {
      que.push(node->left);
    }
    if (node->right) {
      que.push(node->right);
    }
    cout << node->val << ' ';
  }
  cout << endl;
  queue<TreeNode*> que1;
  que1.push(res1);
  while (!que1.empty()) {
    TreeNode* node = que1.front();
    que1.pop();
    if (node->left) {
      que1.push(node->left);
    }
    if (node->right) {
      que1.push(node->right);
    }
    cout << node->val << ' ';
  }
  cout << endl;
}
