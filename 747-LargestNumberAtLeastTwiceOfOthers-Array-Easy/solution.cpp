#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	int dominantIndex(vector<int>& nums) {
		int first = INT_MIN, second = INT_MIN, index = -1;
		for (int i = 0; i < nums.size(); i ++) {
			if (nums[i] > first) {
				second = first;
				first = nums[i];
				index = i;
			} else if (nums[i] > second) {
				second = nums[i];
			}
		}
		return first >= second * 2 ? index : -1;
	}
};

