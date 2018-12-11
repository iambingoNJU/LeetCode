#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	int maxDistToClosest(vector<int>& seats) {
		int l = 0, r = seats.size() - 1;
		while (!seats[l]) l ++;
		while (!seats[r]) r --;
		int maxDist = max(l, (int)seats.size() - r - 1);
		for (int i = l + 1, zeros = 0; i <= r; i ++) {
			if (!seats[i]) {
				zeros ++;
			} else {
				maxDist = max(maxDist, (zeros + 1) / 2);
				zeros = 0;
			}
		}
		return maxDist;
	}
};

