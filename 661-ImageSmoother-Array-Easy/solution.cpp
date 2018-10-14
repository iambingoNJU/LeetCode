#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
		int m = M.size(), n = M[0].size();
		vector<vector<int>> dirs = { {-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1} };
		vector<vector<int>> res(m, vector<int>(n, 0));
		for (int i = 0; i < m; i ++) {
			for (int j = 0; j < n; j ++) {
				int sum = M[i][j], cnt = 1;
				for (int k = 0; k < dirs.size(); k ++) {
					int x = i + dirs[k][0], y = j + dirs[k][1];
					if (x < 0 || x >= m || y < 0 || y >= n)
						continue;
					sum += M[x][y];
					cnt ++;
				}
				res[i][j] = sum / cnt;
			}
		}
		return res;
	}
};

