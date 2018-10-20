#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	/*
	int maxProfit(vector<int>& prices) {
		int max = 0, cur = 0;
		for (int i = 1; i < prices.size(); i ++) {
			cur += prices[i] - prices[i - 1];
			if (cur < 0) {
				cur = 0;
			} else if (cur > max) {
				max = cur;
			}
		}
		return max;
	}
	*/

	int maxProfit(vector<int>& prices) {
		int minPrice = INT_MAX, maxCur = 0;
		for (int i = 0; i < prices.size(); i ++) {
			minPrice = min(minPrice, prices[i]);
			maxCur = max(maxCur, prices[i] - minPrice);
		}
		return maxCur;
	}
};

