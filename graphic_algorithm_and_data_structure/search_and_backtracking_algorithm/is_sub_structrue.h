#include "treenode.h"
using namespace std;
class Solution {
 public:
  bool IsSubStructure(TreeNode* A, TreeNode* B) {
    if (!A || !B) {
      return false;
    }
    return Recur(A, B) || IsSubStructure(A->left, B) ||
           IsSubStructure(A->right, B);
  }

 private:
  bool Recur(TreeNode* A, TreeNode* B) {
    if (!B) {
      return true;
    }
    if (!A || A->val != B->val) {
      return false;
    }
    return Recur(A->left, B->left) && Recur(A->right, B->right);
  }
};
