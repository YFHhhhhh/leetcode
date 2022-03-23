#include <vector>
#include "push_and_pop_sequence_of_stack.h"
#include <iostream>
using namespace std;
int main() {
	Solution solu;
	vector<int> pushed = {1,2,3,4,5};
	vector<int> popped = {4,5,3,2,1};
	cout << solu.ValidateStackSequence(pushed, popped) << endl;
}
