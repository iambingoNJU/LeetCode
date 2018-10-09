#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	bool isOneBitCharacter(vector<int>& bits) {
		int len = bits.size(), i = 0;
		while (i < len - 1) {
			if (bits[i]) i += 2;
			else i ++;
		}
		return i == len - 1;
	}
};

