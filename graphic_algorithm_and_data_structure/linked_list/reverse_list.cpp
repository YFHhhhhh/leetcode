#include "reverse_list.h"
#include <iostream>
using namespace std;
int main() {
	ListNode first(1);
	ListNode second(2);
	ListNode third(3);
	ListNode forth(4);
	ListNode fifth(5);
	first.next = &second;
	second.next = &third;
	third.next = &forth;
	forth.next = &fifth;
	fifth.next = nullptr;
	Solution test;
	ListNode *res = test.reverseList(&first);
	while(res != nullptr) {
		cout << res->val << endl;
		res = res->next;
	}
}
