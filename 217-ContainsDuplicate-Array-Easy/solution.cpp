#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	bool containsDuplicate(vector<int>& nums) {
		unordered_set<int> container;
		for (int i = 0; i < nums.size(); i ++) {
			if (container.count(nums[i])) return true;
			container.insert(nums[i]);
		}
		return false;
	}
};

