#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	int findMaxConsecutiveOnes(vector<int>& nums) {
		int max = 0, cnt = 0;
		nums.push_back(0);
		for (int i = 0; i < nums.size(); i ++) {
			if (nums[i]) cnt ++;
			else {
				if (max < cnt) max = cnt;
				cnt = 0;
			}
		}
		return max;
	}
};

