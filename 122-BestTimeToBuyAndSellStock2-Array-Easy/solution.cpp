#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	int maxProfit(vector<int>& prices) {
		int profit = 0;
		for (int i = 1; i < prices.size(); i ++) {
			int diff = prices[i] - prices[i - 1];
			if (diff > 0) profit += diff;
		}
		return profit;
	}
};

