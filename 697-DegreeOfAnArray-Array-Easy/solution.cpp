#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	int findShortestSubArray(vector<int>& nums) {
		// inverted index
		vector<int> index[50000];
		for (int i = 0; i < nums.size(); i ++) {
			index[nums[i]].push_back(i);
		}

		int degree = 1, slen = 0;
		for (int i = 0; i < 50000; i ++) {
			if (index[i].size() > degree) {
				slen = *max_element(index[i].begin(), index[i].end()) - 
					   *min_element(index[i].begin(), index[i].end());
				degree = index[i].size();
			} else if (index[i].size() == degree) {
				int len = *max_element(index[i].begin(), index[i].end()) - 
						  *min_element(index[i].begin(), index[i].end());
				if (slen > len) slen = len;
			}
		}
		return slen + 1;
	}
};

