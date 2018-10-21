#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	int findLengthOfLCIS(vector<int>& nums) {
		if (nums.size() == 0) return 0;
		int maxLen = 1;
		for (int i = 1, len = 1; i < nums.size(); i ++) {
			if(nums[i] > nums[i - 1]) {
				len ++;
				maxLen = max(maxLen, len);
			} else {
				len = 1;
			}
		}
		return maxLen;
	}
};

