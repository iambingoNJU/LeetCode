#include <vector>
#include <algorithm>
using namespace std;

class Solution {
	int m, n;
public:
	// Edit your solution code here
	int maxAreaOfIsland(vector<vector<int>>& grid) {
		m = grid.size();
		n = grid[0].size();
		int max = 0, cur = 0;
		for (int i = 0; i < m; i ++) {
			for (int j = 0; j < n; j ++) {
				cur = dfs(grid, i , j);
				if (cur > max) max = cur;
			}
		}
		return max;
	}

	int dfs(vector<vector<int>>& grid, int i, int j) {
		if (grid[i][j]) {
			grid[i][j] = 0; // visited
			return 1 + 
				(i >= 1 ? dfs(grid, i - 1, j) : 0) +
				(j < n - 1 ? dfs(grid, i, j + 1) : 0) +
				(i < m - 1 ? dfs(grid, i + 1, j) : 0) +
				(j >= 1 ? dfs(grid, i, j - 1) : 0);
		}
		return 0;
	}
};

