#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	int removeElement(vector<int>& nums, int val) {
		int k = 0;
		for (int i = 0; i < nums.size(); i ++) {
			if (nums[i] != val)
				nums[k ++] = nums[i];
		}
		return k;
	}
};

