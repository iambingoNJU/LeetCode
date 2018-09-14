#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	void moveZeroes(vector<int>& nums) {
		for (int i = 0, j = 0; i < nums.size(); i ++) {
			if (nums[i]) {
				if (!nums[j]) {
					int t = nums[i];
					nums[i] = nums[j];
					nums[j] = t;
				}
				j ++;
			}
		}
	}
};

