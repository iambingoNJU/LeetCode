#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	vector<vector<int>> generate(int numRows) {
		vector<vector<int>> res;
		for (int i = 0; i < numRows; i ++) {
			vector<int> line;
			for (int j = 0; j <= i; j ++) {
				if(j == 0 || j == i)
					line.push_back(1);
				else
					line.push_back(res[i - 1][j - 1] + res[i - 1][j]);
			}
			res.push_back(line);
		}
		return res;
	}
};

