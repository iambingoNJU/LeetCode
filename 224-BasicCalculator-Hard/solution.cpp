#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	int calculate(string s) {
		int val = 0, op = 0, len, cnt;
		for (int i = 0; i < s.size(); i ++) {
			switch(s[i]) {
				case ' ':
					break;
				case '+':
					op = 1;
					break;
				case '-':
					op = 2;
					break;
				case '(':
					for (len = 0, cnt = 1; cnt > 0; len++) {
						if (s[i + 1 + len] == '(') cnt++;
						else if (s[i + 1 + len] == ')') cnt--;
					}
					if (op == 2) val -= calculate(s.substr(i + 1, len - 1));
					else val += calculate(s.substr(i + 1, len - 1));
					i += len;
					break;
				default:
					for (len = 0; isdigit(s[i + len]); len++);
					if (op == 2) val -= stoi(s.substr(i, len));
					else val += stoi(s.substr(i, len));
					i += len - 1;
					break;
			}
		}
		return val;
	}
};

