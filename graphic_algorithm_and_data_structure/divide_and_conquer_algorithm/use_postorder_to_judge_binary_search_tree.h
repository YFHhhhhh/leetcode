#include <vector>
using namespace std;
class Solution {
	public:
		bool VerfyPostorder(vector<int>& postorder) {
			this->postorder = postorder;
			return Recur(postorder.size() - 1, 0, postorder.size() - 2);
		}

	private:
		vector<int> postorder;
		bool Recur(int root, int left, int right) {
			if (left >= right) {
				return true;
			}
			int i = right;
			while (i >= 0 && postorder[i] > postorder[root]) {
				// find the bounary of left tree and right tree;
				i--;
			}
			int j = left;
			while (j <= postorder.size() - 1 && postorder[j] < postorder[root]) {
				// judge if the left tree less than root(right tree is judged in last while)
				j++;
			}
			return j == i + 1 && Recur(i, left, i - 1) && Recur(right, j, right - 1);
		}
};
