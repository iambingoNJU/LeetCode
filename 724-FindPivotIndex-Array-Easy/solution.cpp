#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	int pivotIndex(vector<int>& nums) {
		int sum = accumulate(nums.begin(), nums.end(), 0);
		for (int i = 0, left = 0; i < nums.size(); i ++) {
			if (left == sum - left - nums[i])
				return i;
			left += nums[i];
		}
		return -1;
	}
};

