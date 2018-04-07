
#include <set>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	// version 1, O(n^2), n = s.length()
	int lengthOfLongestSubstring(string s) {
		int max = 0;
		int len = s.length();
		for (int i = 0; i < len; i ++) {
			set<char> charset;
			int j;
			for (j = i; j < len; j ++) {
				if (charset.find(s[j]) != charset.end()) {
					break;
				} else {
					charset.insert(s[j]);
				}
			}
			max = max > (j - i) ? max : (j - i);
		}
		return max;
	}
};
