//Given a binary tree, return the preorder traversal of its nodes' values.

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
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> vec;
        preorder(root,vec);
        return vec;
    }
    void preorder(TreeNode *r,vector<int> &v){
        if(r != NULL){
            v.push_back(r->val);
            preorder(r->left,v);
            preorder(r->right,v);
        }
    }
}; 