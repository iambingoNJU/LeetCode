#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	/*
	vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
		vector<vector<int>> result;
		for(int i = 0; i < A.size(); i++) {
			vector<int> v;
			for(int j = A[i].size() - 1; j >= 0; j--) {
				v.push_back(!A[i][j]);
			}
			result.push_back(v);
		}

		return result;
	}
	*/

	vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
		for (auto & row : A) reverse(row.begin(), row.end());
		for (auto & row : A) for (int & i : row) i ^= 1;
		return A;
	}
};

