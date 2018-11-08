#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	vector<int> getRow(int rowIndex) {
		long long ago = 1;
		vector<int> res = { 1 };
		for (int i = 0; i < rowIndex; i ++) {
			ago = ago * (rowIndex - i) / (i + 1);
			res.push_back(ago);
		}
		return res;
	}
};

