
#include <set>
#include <memory.h>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	// version 1, O(n^3), n = s.length()
	/*
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
	*/

	// version 2, O(n^2)
	/*
	int lengthOfLongestSubstring(string s) {
		int max = 0, len = s.length();
		for (int i = 0; i < len; i ++) {
			bool map[256] = { false };
			int j;
			for (j = i; j < len; j ++) {
				if (map[s[j]]) {
					break;
				} else {
					map[s[j]] = true;
				}
			}
			max = max > (j - i) ? max : (j - i);
		}
		return max;
	}
	*/

	// version 3, O(n)
	int lengthOfLongestSubstring(string s) {
		bool map[256] = { false };
		int max = 0, j = 0, len = s.length();
		for (int i = 0; i < len && j < len; i ++) {
			for (; j < len; j ++) {
				if (map[s[j]]) {
					map[s[i]] = false;
					break;
				} else {
					map[s[j]] = true;
				}
			}
			max = max > (j - i) ? max : (j - i);
		}
		return max;
	}
};
