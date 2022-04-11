#include "permutation_of_string.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
  Solution solu;
  string test = "abc";
  vector<string> res = solu.Permutation(test);
  for (auto s : res) {
    cout << s << ' ';
  }
  cout << endl;
}
