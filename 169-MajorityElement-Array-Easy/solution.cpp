#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	/*
	int majorityElement(vector<int>& nums) {
		if (nums.size() == 1) return nums[0];
		vector<int> iv;
		for (int i = 0; i < nums.size(); i += 2) {
			if (i + 1 < nums.size()) {
				if (nums[i] == nums[i + 1])
					iv.push_back(nums[i]);
			} else {
				iv.push_back(nums[i]);
				break;
			}
		}
		return majorityElement(iv);
	}
	 */

	int majorityElement(vector<int>& nums) {
		int cnt = 1, major = nums[0];
		for (int i = 1; i < nums.size(); i ++) {
			if (nums[i] == major) {
				cnt ++;
			} else if (cnt > 0) {
				cnt --;
			} else {
				cnt ++;
				major = nums[i];
			}
		}
		return major;
	}
};

