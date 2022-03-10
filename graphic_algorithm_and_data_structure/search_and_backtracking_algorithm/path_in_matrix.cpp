#include "path_in_matrix.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;
int main() {
	Solution solu;
	vector<vector<char>> test = {{'A','B','C','E'}, {'S','F','C','S'}, {'A','D','E','E'}};
	string word = "ABCCED";
	cout << solu.PathInMatrix(test, word) << endl;
}
