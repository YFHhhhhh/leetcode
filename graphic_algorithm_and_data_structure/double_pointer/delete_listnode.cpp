#include "delete_listnode.h"

#include <iostream>
using namespace std;
int main() {
  Solution solu;
  ListNode first(4);
  ListNode second(5);
  ListNode third(1);
  ListNode forth(9);
  first.next = &second;
  second.next = &third;
  third.next = &forth;
  ListNode* res = solu.DeleteListNode(&first, 5);
  while (res) {
    cout << res->val << ' ';
    res = res->next;
  }
  cout << endl;
}
