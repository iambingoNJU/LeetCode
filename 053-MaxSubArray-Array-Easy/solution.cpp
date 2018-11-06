#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	/*
	int maxSubArray(vector<int>& nums) {
		int maxSum = INT_MIN, curSum = 0;
		for (int i = 0; i < nums.size(); i ++) {
			curSum += nums[i];
			if (curSum > maxSum) maxSum = curSum;
			if (curSum < 0) curSum = 0;
		}
		return maxSum;
	}
	*/
	int maxSubArray(vector<int>& nums) {
		if (nums.size() == 0) return 0;
		int *dp = new int[nums.size()];
		dp[0] = nums[0];
		int maxSum = dp[0];
		for (int i = 1; i < nums.size(); i ++) {
			dp[i] = max(dp[i - 1], 0) + nums[i];
			maxSum = max(maxSum, dp[i]);
		}
		return maxSum;
	}
};

