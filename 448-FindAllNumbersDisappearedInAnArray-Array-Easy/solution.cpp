#include <vector>
#include <algorithm>
#include <cstdint>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	vector<int> findDisappearedNumbers(vector<int>& nums) {
		for (int i = 0; i < nums.size(); i ++) {
			int idx = abs(nums[i]) - 1;
			if (nums[idx] > 0) nums[idx] = - nums[idx];
		}

		vector<int> result;
		for (int i = 0; i < nums.size(); i ++)
			if (nums[i] > 0) result.push_back(i + 1);

		return result;
	}

	int abs(int x) {
		return x < 0 ? -x : x;
	}
};

