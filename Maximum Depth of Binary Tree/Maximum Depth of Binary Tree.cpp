//Given a binary tree, find its maximum depth.
//The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.


/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 #include<math.h>
class Solution {
public:
    int maxDepth(TreeNode *root) {
        if(root == NULL) return 0;
        else
        {
            int m = maxDepth(root->left);
            int n = maxDepth(root->right);
            return max(m,n) + 1;
        }
    }
};