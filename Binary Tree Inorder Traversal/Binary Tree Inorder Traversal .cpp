//Given a binary tree, return the inorder traversal of its nodes' values.

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
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> vec;
        inorder(root,vec);
        return vec;
    }
    void inorder(TreeNode *r ,vector<int> &v ){
        if(r != NULL){
        inorder(r->left,v);
        v.push_back(r->val);
        inorder(r->right,v);
        }
    }
};