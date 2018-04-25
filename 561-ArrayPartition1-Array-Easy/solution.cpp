#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	// O(nlogn)
	/*
	int arrayPairSum(vector<int>& nums) {
		sort(nums.begin(), nums.end());

		int sum = 0;
		for (int i = 0; i < nums.size(); i += 2) {
			sum += nums[i];
		}

		return sum;
	}
	*/

	// O(n)
	int arrayPairSum(vector<int>& nums) {
		int map[20001] = { 0 };
		for (int i : nums) map[i + 10000] ++;

		int sum = 0, cnt = 0, i = 0;
		while(cnt < nums.size()) {
			if (map[i] > 0) {
				if (cnt % 2 == 0)
					sum += i - 10000;
				map[i] --;
				cnt ++;
			} else {
				i ++;
			}
		}

		return sum;
	}
};

