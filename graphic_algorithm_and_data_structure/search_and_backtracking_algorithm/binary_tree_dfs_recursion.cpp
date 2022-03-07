#include "binary_tree_dfs_recursion.h"

#include <iostream>
#include <vector>
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
	/*
  vector<int> res1 = solu.InOrder(&first);
  for (auto n : res1) {
    cout << n << ' ';
  }
  cout << endl;
  */
	/*
  vector<int> res2 = solu.InOrder(&first);
  for (auto n : res2) {
    cout << n << ' ';
  }
  cout << endl;
	*/
  vector<int> res3 = solu.PostOrder(&first);
  for (auto n : res3) {
    cout << n << ' ';
  }
  cout << endl;
}
