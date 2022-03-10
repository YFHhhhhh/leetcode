#include "merge_sorted_list.h"

#include <iostream>
using namespace std;
int main() {
  Solution solu;
  ListNode first(1);
  ListNode second(2);
  ListNode third(4);
  first.next = &second;
  second.next = &third;

  ListNode I(1);
  ListNode II(3);
  ListNode III(4);
  I.next = &II;
  II.next = &III;

  ListNode* res = solu.MergeTwoLists(&first, &I);

  while (res) {
    cout << res->val << ' ';
    res = res->next;
  }
  cout << endl;
}
