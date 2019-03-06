#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
		if (std::find(wordList.begin(), wordList.end(), endWord) == wordList.end())
			return 0;

		wordList.insert(wordList.begin(), beginWord);
		int m = wordList.size();
		vector<vector<int>> edge(m, vector<int>(m, 0));
		for (int i = 0; i < m; i ++)
			for (int j = 0; j < m; j ++)
				if (adjacentString(wordList[i], wordList[j]))
					edge[i][j] = 1;

		int height = 1;
		queue<int> q;
		vector<int> visited(m, 0);
		q.push(0);
		visited[0] = 1;
		while (!q.empty()) {
			int n = q.size();
			for (int k = 0; k < n; k ++) {
				int cur = q.front();
				q.pop();
				for (int i = 0; i < m; i ++) {
					if (edge[cur][i] && !visited[i]) {
						if (wordList[i] == endWord)
							return height + 1;
						visited[i] = 1;
						q.push(i);
					}
				}
			}
			height ++;
		}

		return 0;
	}

	bool adjacentString(string s1, string s2) {
		int diff = 0;
		for (int i = 0; i < s1.length(); i ++)
			if (s1[i] != s2[i]) diff ++;
		return diff == 1;
	}
};

