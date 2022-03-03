#include "list_node.h"
class Solution {
	public:
	ListNode *reverseList(ListNode *head) {
		if(head == nullptr) {
			return head;
		}
		ListNode *pre = nullptr;
		ListNode *cur = head;
		ListNode *next = head->next;
		while(cur != nullptr) {
			cur->next = pre;
			pre = cur;
			cur = next;
			if(next != nullptr) {
				next = next->next;
			}
		}
		return pre;
	}
};
