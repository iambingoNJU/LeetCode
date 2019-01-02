#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	bool containsNearbyDuplicate(vector<int>& nums, int k) {
		unordered_set<int> set;
		for (int i = 0; i < nums.size(); i ++) {
			if (i > k) set.erase(nums[i - k - 1]);
			if (!set.insert(nums[i]).second) return true;
		}
		return false;
	}
};

