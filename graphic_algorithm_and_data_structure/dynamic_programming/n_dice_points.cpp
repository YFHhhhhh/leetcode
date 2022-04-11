#include "n_dice_points.h"

#include <iostream>
#include <vector>
using namespace std;
int main() {
  Solution solu;
  vector<double> res = solu.DicePoints(2);
  for (auto n : res) {
    cout << n << ' ';
  }
  cout << endl;
}
