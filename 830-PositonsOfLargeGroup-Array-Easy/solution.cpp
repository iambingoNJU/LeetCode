#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	vector<vector<int>> largeGroupPositions(string S) {
		S.push_back('A');
		vector<vector<int>> res;
		for (int i = 1, start = 0; i < S.size(); i ++) {
			if (S[i] != S[start]) {
				if (i - start > 2)
					res.push_back({start, i - 1});
				start = i;
			}
		}
		return res;
	}
};

