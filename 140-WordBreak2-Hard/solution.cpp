#include <vector>
#include <stack>
#include <unordered_set>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	vector<string> wordBreak(string s, vector<string>& wordDict) {
		int len = s.size();
		stack<int> st; st.push(0);
		unordered_set<string> wd(wordDict.begin(), wordDict.end());
		for (int i = 0; i < len; i ++) {
			if (wd.contains(s.substring(st.top(), i + 1)) {
				st.push(i);
				if (st.top() == len - 1) {
					cout << getSplitedString(s, st) << endl;
				}
			} 
		}
	}

	string getSplitedString(string str, stack<int> s) {
	}
};

