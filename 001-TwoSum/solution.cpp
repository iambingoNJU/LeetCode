#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:

	// version 1, O(n^2)
	/*
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
	*/

	// version 2, O(n)
    vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> map;

		for (int i = 0; i < nums.size(); i ++) {
			auto it = map.find(target - nums[i]);

			if (it != map.end()) {
				return { i, it->second };
			}

			map[nums[i]] = i;
		}

		return { 0, 0 };
	}
};
