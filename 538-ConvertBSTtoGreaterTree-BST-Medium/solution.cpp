#include <vector>
#include <algorithm>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left, *right;
	TreeNode(): val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *l, TreeNode *r): val(x), left(l), right(r) {}
};

class Solution {
	int sum = 0;
public:
	// Edit your solution code here
	TreeNode* convertBST(TreeNode *root) {
		if (root == nullptr) return nullptr;
		convertBST(root->right);
		root->val += sum;
		sum = root->val;
		convertBST(root->left);
		return root;
	}
};

