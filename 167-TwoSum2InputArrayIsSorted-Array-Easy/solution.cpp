#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	/*
	// O(Nlog(N))
	int binarySearch(vector<int>& v, int from, int to, int t) {
		if (from > to) return -1;
		int mid = (from + to) / 2;
		if (v[mid] == t) return mid;
		else if (v[mid] < t) return binarySearch(v, mid + 1, to, t);
		else return binarySearch(v, from, mid - 1, t);
	}

	vector<int> twoSum(vector<int>& numbers, int target) {
		for (int i = 0; i < numbers.size(); i ++) {
			int j = binarySearch(numbers, i + 1, numbers.size() - 1, target - numbers[i]);
			if (j != -1) return { i + 1, j + 1 };
		}
		return { 0, 0 };
	}
	*/

	// O(N)
	vector<int> twoSum(vector<int>& numbers, int target) {
		int l = 0, r = numbers.size() - 1;
		while (numbers[l] + numbers[r] != target) {
			if (numbers[l] + numbers[r] < target)
				l ++;
			else
				r --;
		}
		return { l + 1, r + 1 };
	}
};

