#include <vector>
using namespace std;
class Solution {
	public:
		int ReversePairs(vector<int>& nums) {
			return MergeSort(0, nums.size() - 1, nums);
		}
	private:
		int MergeSort(int l, int r, vector<int>& nums) {
			if (l >= r) {
				return 0;
			}
			int m = (l + r) / 2;
			int res = MergeSort(l, m, nums) + MergeSort(m + 1, r, nums); 
			vector<int> tmp(r - l + 1, 0);
			for (int i = 0; i < tmp.size(); i++) {
				tmp[i] = nums[l + i];
			}
			int ll = 0, rr = m - l + 1;
			for (int k = l; k <= r; k++) {
				if (ll == m - l + 1) {
					nums[k] = tmp[rr++];
				} else if (rr == r - l + 1) {
					nums[k] = tmp[ll++];
				} else if (tmp[ll] > tmp[rr]) {
					res += m - l - ll + 1;
					nums[k] = tmp[rr++];
				} else {
					nums[k] = tmp[ll++];
				}
			}
			return res;
		}
};
