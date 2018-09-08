#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	bool isMonotonic(vector<int>& A) {
		for (int i = 1, lastDiff = 0; i < A.size(); i ++) {
			int thisDiff = A[i] - A[i - 1];
			if (lastDiff < 0 && thisDiff > 0 || lastDiff > 0 && thisDiff < 0)
				return false;
			if (thisDiff) lastDiff = thisDiff;
		}
		return true;
	}
};

