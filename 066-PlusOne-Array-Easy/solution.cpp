#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	/*
	vector<int> plusOne(vector<int>& digits) {
		int len = digits.size(), carry = 0;
		for (int i = len - 1; i >= 0; i --) {
			int sum = digits[i] + 1;
			digits[i] = sum % 10;
			carry = sum / 10;
			if (!carry) break;
		}
		if (carry) digits.insert(digits.begin(), 1);
		return digits;
	}
	*/
	vector<int> plusOne(vector<int>& digits) {
		for (int i = digits.size() - 1; i >= 0; i --) {
			if (digits[i] < 9) {
				digits[i] ++;
				return digits;
			}
			digits[i] = 0;
		}
		digits.insert(digits.begin(), 1);
		return digits;
	}
};

