#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	bool isToeplitzMatrix(vector<vector<int>>& matrix) {
		int m = matrix.size(), n = matrix[0].size();
		for (int i = 0; i < m; i ++) {
			int value = matrix[i][0];
			for (int j = 1; (j < m - i) && j < n; j ++) {
				if (matrix[i + j][j] != value)
					return false;
			}
		}
		for (int i = 1; i < n; i ++) {
			int value = matrix[0][i];
			for (int j = 1; (j < n - i) && j < m; j ++) {
				if (matrix[j][i + j] != value)
					return false;
			}
		}
		return true;
	}
};

