#include <vector>
#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	double findMaxAverage(vector<int>& nums, int k) {
		long sum = 0;
		for (int i = 0; i < k; i ++) sum += nums[i];
		long maxSum = sum;
		for (int i = k; i < nums.size(); i ++) {
			sum += nums[i] - nums[i - k];
			maxSum = max(sum, maxSum);
		}
		return (double)maxSum / k;
	}
};

