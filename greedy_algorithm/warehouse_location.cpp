#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        nums.emplace_back(tmp);
    }
    
    sort(nums.begin(), nums.end());
    
    int res = 0;
    for (int i = 0; i < n; i++) {
        res += abs(nums[i] - nums[n / 2]);
    }
    
    cout << res << endl;
    
    return 0;
}
