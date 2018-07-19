#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	vector<vector<int>> transpose(vector<vector<int>>& A) {
		vector<vector<int>> result;
		for(int j = 0; j < A[0].size(); j ++) {
			vector<int> tmp;
			for (int i = 0; i < A.size(); i ++) {
				tmp.push_back(A[i][j]);
			}
			result.push_back(tmp);
		}
		return result;
	}
};

