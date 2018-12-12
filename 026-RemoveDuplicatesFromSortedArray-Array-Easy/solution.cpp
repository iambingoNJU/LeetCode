#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	int removeDuplicates(vector<int>& nums) {
		int sz = nums.size();
		if (sz < 2) return sz;
		int k = 0;
		for (int i = 1; i < sz; i ++) {
			if (nums[i] != nums[k])
				nums[++k] = nums[i];
		}
		return k + 1;
	}
};

