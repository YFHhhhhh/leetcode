#include "listnode.h"
class Solution {
 public:
  ListNode* MergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode* dum = new ListNode(0);
    ListNode *A = l1, *B = l2, *cur = dum;
    while (A && B) {
      if (A->val <= B->val) {
        cur->next = A;
        A = A->next;
      } else {
        cur->next = B;
        B = B->next;
      }
      cur = cur->next;
    }
    cur->next = A != nullptr ? A : B;
    return dum->next;
  }
};
