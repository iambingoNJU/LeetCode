#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
		for (int i = 0; i < nums.size() - 1; i ++) {
			int another = target - nums[i];
			vector<int>::iterator iter = find(nums.begin() + i + 1, nums.end(), another);
			if (iter != nums.end()) {
				int another_index = iter - nums.begin();
				return { i, another_index };
			}
		}

		return { 0, 0 };
    }
};
