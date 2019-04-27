#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	// O(nm) space version
	/*
	int minDistance(string word1, string word2) {
		int len1 = word1.size() + 1, len2 = word2.size() + 1;
		vector<vector<int>> distance(len1, vector<int>(len2));
		for (int i = 0; i < len1; i ++) {
			for (int j = 0; j < len2; j ++) {
				if (min(i, j) == 0) {
					distance[i][j] = max(i, j);
				} else if (word1[i - 1] == word2[j - 1]) {
					distance[i][j] = distance[i - 1][j - 1];
				} else {
					distance[i][j] = min(min(distance[i][j - 1], distance[i - 1][j]), distance[i - 1][j - 1]) + 1;
				}
			}
		}
		return distance[len1 - 1][len2 - 1];
	}
	*/

	// O(m) space version
	int minDistance(string word1, string word2) {
		int len1 = word1.size() + 1, len2 = word2.size() + 1, lt;
		vector<int> lastLine(len2);
		for (int i = 0; i < len2; i ++) lastLine[i] = i;
		for (int i = 1; i < len1; i ++) {
			lt = lastLine[0];
			lastLine[0] = i;
			for (int j = 1; j < len2; j ++) {
				int tmp = lastLine[j];
				if (word1[i - 1] == word2[j - 1]) {
					lastLine[j] = lt;
				} else {
					lastLine[j] = min(lt, min(lastLine[j - 1], lastLine[j])) + 1;
				}
				lt = tmp;
			}
		}
		return lastLine[len2 - 1];
	}
};

