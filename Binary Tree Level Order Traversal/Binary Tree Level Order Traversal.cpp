/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	vector<vector<int> > levelOrder(TreeNode *root) {
		vector<vector<int> >	result;
		int i = 0;
		levelOrder(root, i + 1, result);
		return result;
	}

	void levelOrder(TreeNode *root, int i, vector<vector<int> >	&result){
		if (root != NULL){
			if (i > result.size()){
				vector<int> v;
				result.push_back(v);
			}
			result[i - 1].push_back(root->val);
			levelOrder(root->left, i + 1,result);
			levelOrder(root->right, i + 1, result);
		}
	}
};