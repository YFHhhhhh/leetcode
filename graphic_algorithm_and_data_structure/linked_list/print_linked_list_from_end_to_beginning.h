#include "list_node.h"
#include <vector>
using namespace std;
class Solution {
	private:
		void recur(ListNode* head) {
			if (head == nullptr) { return; }
			recur(head->next);
			res.emplace_back(head->val);
		}

	public:
		vector<int> res;
		vector<int> ReversePrint(ListNode *head) {
			recur(head);
			return res;
		}
};
