#include <vector>
#include <algorithm>
#include <unordered_map>
#include <numeric>
#include <iostream>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	bool hasGroupsSizeX(vector<int>& deck) {
		unordered_map<int, int> um;
		for (int i = 0; i < deck.size(); i ++) {
			if (um.find(deck[i]) == um.end()) {
				um[deck[i]] = 1;
			} else {
				um[deck[i]] ++;
			}
		}
		return accumulate(um.begin(), um.end(), um.begin()->second, 
				[](int result, pair<int, int> item) { return __gcd(result, item.second); }
			) >= 2;
	}
};

