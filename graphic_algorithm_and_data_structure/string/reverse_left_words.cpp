#include "reverse_left_words.h"

#include <iostream>
using namespace std;
int main() {
  Solution solu;
  string s = "abcdefg";
  string res = solu.ReverseLeftWords(s, 2);
  cout << res << endl;
}
