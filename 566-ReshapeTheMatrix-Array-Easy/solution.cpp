#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
		if (r * c != nums.size() * nums[0].size())
			return nums;
		vector<vector<int>> result;
		for (int i = 0, k = 0; i < r; i ++) {
			vector<int> row;
			for (int j = 0; j < c; j ++, k ++)
				row.push_back(nums[k / nums[0].size()][k % nums[0].size()]);
			result.push_back(row);
		}
		return result;
	}
};

