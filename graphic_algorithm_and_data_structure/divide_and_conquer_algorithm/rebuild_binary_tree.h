#include "treenode.h"
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
	public:
		TreeNode* RebuildTree(vector<int>& preorder, vector<int>& inorder) {
			this->preorder = preorder;
			for (int i = 0; i < inorder.size(); i++) {
				// use hashmap to store inorder element and subscript
				mp[inorder[i]] = i;
			}
			return Recur(0, 0, inorder.size() - 1);
		}

	private:
		vector<int> preorder;
		unordered_map<int, int> mp;
		TreeNode* Recur(int root, int left, int right) {
			if (left > right) {
				return nullptr;
			}
			int i = mp[preorder[root]];// split inorder to left and right tree
			TreeNode* node = new TreeNode(preorder[root]);
			node->left = Recur(root + 1, left, i - 1);// recur left tree
			node->right = Recur(root + i - left + 1, i + 1, right);// recur right tree
			return node;
		}
};
