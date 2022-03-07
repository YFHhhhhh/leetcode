#include <iostream>
#include "is_sub_structrue.h"
using namespace std;
int main() {
	Solution solu;
	TreeNode first(3);
  TreeNode second(9);
  TreeNode third(20);
  TreeNode forth(15);
  TreeNode fifth(7);
  first.left = &second;
  first.right = &third;
  third.left = &forth;
  third.right = &fifth;
	
	TreeNode first1(20);
	TreeNode second1(15);
	TreeNode third1(7);
	first1.left = &second1;
	first1.right = &third1;

	cout << solu.IsSubStructure(&first, &first1) << endl;
}
