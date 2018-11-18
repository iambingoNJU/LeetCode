#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	int searchInsert(vector<int>& nums, int target) {
		int l = 0, r = nums.size() - 1;
		while (l <= r) {
			int m = (l + r) / 2;
			if (nums[m] < target) {
				l = m + 1;
			} else if (nums[m] > target) {
				r = m - 1;
			} else {
				return m;
			}
		}
		return l;
	}
};

