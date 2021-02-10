/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* x, TreeNode* y) {
        if(root == NULL) return NULL;
        if(x->val < root->val && y->val < root->val) return lowestCommonAncestor(root->left, x, y);
        if(x->val > root->val && y->val > root->val) return lowestCommonAncestor(root->right, x, y);
        return root;
    }
};