#include "listnode.h"
class Solution {
 public:
  ListNode* DeleteListNode(ListNode* head, int val) {
    if (!head) {
      return head;
    }
    ListNode* cur = head;
    ListNode* pre = nullptr;
    while (cur) {
      if (cur->val == val) {
        if (!pre) {
          pre = cur->next;
          cur->next = nullptr;
          return pre;
        } else {
          pre->next = cur->next;
          cur->next = nullptr;
          break;
          ;
        }
      }
      pre = cur;
      cur = cur->next;
    }
    return head;
  }
};
