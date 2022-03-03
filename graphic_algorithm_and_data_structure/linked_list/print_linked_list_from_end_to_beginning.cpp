#include <iostream>
#include "print_linked_list_from_end_to_beginning.h"
using namespace std;
int main() {
	Solution solu;
	ListNode first(1);
	ListNode second(3);
	ListNode third(2);
	first.next = &second;
	second.next = &third;
	solu.ReversePrint(&first);
	for (int i = 0; i < solu.res.size(); i++) {
		cout << solu.res[i] << endl;
	}
}
