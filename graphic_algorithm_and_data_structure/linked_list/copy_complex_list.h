#include <unordered_map>

#include "complex_node.h"
using namespace std;
class Solution {
 public:
	//method1: use append node O(N) O(1)==========================================================
  Node *CopyComplexList(Node *head) {
    if (head == nullptr) {
      return head;
    }
    Node *cur = head;
    // copy new node
    while (cur != nullptr) {
      Node *copied = new Node(cur->val);
      copied->next = cur->next;
      cur->next = copied;
      cur = copied->next;
    }
    cur = head;
    // link random for new node
    while (cur != nullptr) {
      if (cur->random != nullptr) {
        cur->next->random = cur->random->next;
      }
      cur = cur->next->next;
    }
    cur = head->next;
    Node *pre = head;
    Node *res = head->next;
    // split new node from old node
    while (cur->next != nullptr) {
      // use cur->next instead of cur, because cur->next->next
      // is used in while, but you should deal with pre later
      pre->next = pre->next->next;
      cur->next = cur->next->next;
      pre = pre->next;
      cur = cur->next;
    }
    pre->next = nullptr;  // deal with the end node of old , because the last
                          // while did not deal with it
    return res;
  }

  //method2: use hashmap O(N) O(N)======================================================
  Node *CopyComplexListUsingHashmap(Node *head) {
    if (head == nullptr) {
      return head;
    }
    Node *cur = head;
    unordered_map<Node *, Node *> res;
    // copy new node and add to unordered_map
    while (cur != nullptr) {
      Node *copied = new Node(cur->val);
      res[cur] = copied;
      cur = cur->next;
    }
    cur = head;
    // link random for new node
    while (cur != nullptr) {
      res[cur]->next = res[cur->next];
      res[cur]->random = res[cur->random];
      cur = cur->next;
    }
    return res[head];
  }
};
