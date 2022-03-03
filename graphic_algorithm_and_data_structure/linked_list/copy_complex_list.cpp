#include "copy_complex_list.h"

#include <iostream>
using namespace std;
int main() {
  Node first(1);
  Node second(2);
  Node third(3);
  first.next = &second;
  second.next = &third;
  first.random = &second;
  second.random = &third;
  Solution solu;

	//use append node
  Node *res1 = solu.CopyComplexList(&first);
	Node *res = res1;
  while (res != nullptr) {
    cout << res->val << endl;
    res = res->next;
  }
	res = res1;
  cout << endl;
  while (res != nullptr) {
    cout << res->val << endl;
    res = res->random;
  }
	cout << endl;

	//use hashmap
	Node *res2 = solu.CopyComplexListUsingHashmap(&first);
	res = res2;
  while (res != nullptr) {
    cout << res->val << endl;
    res = res->next;
  }
	res = res1;
  cout << endl;
  while (res != nullptr) {
    cout << res->val << endl;
    res = res->random;
  }
}
