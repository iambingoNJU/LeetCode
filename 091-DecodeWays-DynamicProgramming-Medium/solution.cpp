#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	bool isValid(string two) {
		return two[0] == '1' || two[0] == '2' && two[1] <= '6';
	}

	// f(n) = f(n-1) + isValid(s[n-1, n]) ? f(n-2) : 0
	int numDecodings(string s) {
		int len = s.size();
		int *dp = new int[len];
		for (int i = 0; i < len; i ++) {
			if (i == 0) {
				dp[i] = s[0] != '0';
			} else {
				dp[i] = 0;
				if (s[i] != '0') dp[i] += dp[i - 1];
				if (isValid(s.substr(i - 1, 2))) dp[i] += i > 1 ? dp[i - 2] : 1;
			}
		}
		return dp[len - 1];
	}
};

