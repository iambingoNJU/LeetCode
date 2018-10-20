#include <vector>
#include <algorithm>
using namespace std;

class Solution {
	int dp[1000];
public:
	// Edit your solution code here
	/*
	// recursive version
	int minCostClimbingStairs(vector<int>& cost) {
		for (int i = 0; i < 1000; i ++) {
			dp[i] = -1;
		}
		return minCost(cost, cost.size());
	}

	int minCost(vector<int>& cost, int r) {
		if (r <= 1) return 0;
		if (dp[r - 1] == -1)
			dp[r - 1] = minCost(cost, r - 1) + cost[r - 1];
		if (dp[r - 2] == -1)
			dp[r - 2] = minCost(cost, r - 2) + cost[r - 2];
		return min(dp[r - 1], dp[r - 2]);
	}
	*/

	// loop verion
	int minCostClimbingStairs(vector<int>& cost) {
		for (int i = 2; i < cost.size(); i ++) {
			cost[i] += min(cost[i - 1], cost[i - 2]);
		}
		return min(cost[cost.size() - 1], cost[cost.size() - 2]);
	}
};

