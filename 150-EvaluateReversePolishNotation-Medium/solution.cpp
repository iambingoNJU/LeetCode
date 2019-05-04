#include <vector>
#include <stack>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	int evalRPN(vector<string>& tokens) {
		stack<int> s;
		for(auto token : tokens) {
			if (token.size() > 1 || isdigit(token[0])) {
				s.push(stoi(token));
			} else {
				int v2 = s.top(); s.pop();
				int v1 = s.top(); s.pop();
				switch (token[0]) {
					case '+': s.push(v1 + v2); break;
					case '-': s.push(v1 - v2); break;
					case '*': s.push(v1 * v2); break;
					case '/': s.push(v1 / v2); break;
				}
			}
		}
		return s.top();
	}
};

