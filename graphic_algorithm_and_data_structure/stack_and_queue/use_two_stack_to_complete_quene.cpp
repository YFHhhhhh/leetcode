#include "use_two_stack_to_complete_quene.h"
#include <iostream>
#include <ostream>
using namespace std;
int main() {
	CQueue queue;
	queue.appendTail(3);
	cout << queue.deleteHead() << endl;
	cout << queue.deleteHead() << endl;
	cout << queue.deleteHead() << endl;
}
