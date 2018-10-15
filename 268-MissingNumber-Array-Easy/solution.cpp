#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	int missingNumber(vector<int>& nums) {
		int res = nums.size();
		for (int i = 0; i < nums.size(); i ++)
			res ^= i ^ nums[i];
		return res;
	}
};

