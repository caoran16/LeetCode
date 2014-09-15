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
    vector<vector<int> > levelOrderBottom(TreeNode *root) {
        vector<vector<int> >	result;
        vector<vector<int> >	pre_result;
		int i = 0;
		levelOrder(root, i + 1, pre_result);
		for (vector<vector<int>>::size_type i = 0; i <pre_result.size(); i++){
		    result.push_back(pre_result[pre_result.size() - 1 - i]);
		}
		return result;
    }
    void levelOrder(TreeNode *root, int i, vector<vector<int>>	&result){
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