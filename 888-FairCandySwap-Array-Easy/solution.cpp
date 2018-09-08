#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

class Solution {
public:
	// Edit your solution code here
	/*
	vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
		int sumA = 0, sumB = 0;
		for (int i = 0; i < A.size(); i ++)
			sumA += A[i];
		for (int i = 0; i < B.size(); i ++)
			sumB += B[i];
		int diff = (sumA - sumB) / 2;
		for (int i = 0; i < A.size(); i ++) {
			for (int j = 0; j < B.size(); j ++) {
				if (A[i] - B[j] == diff)
					return { A[i], B[j] };
			}
		}
		return { 0, 0 };
	}
	*/
	vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
		int diff = ( accumulate(A.begin(), A.end(), 0) -
					 accumulate(B.begin(), B.end(), 0) ) / 2;
		unordered_set<int> setA(A.begin(), A.end());
		for (int b : B)
			if (setA.find(b + diff) != setA.end())
				return { b + diff, b };
		return { 0 };
	}
};

