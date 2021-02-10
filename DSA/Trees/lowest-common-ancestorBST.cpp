/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

// T-C : O(n) considering the worst case when all node only has one child and p,q are near the bottom. For a balanced BST, 
// the time complexity may be O(log(n)) or O(h) for a balanced BST.

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* x, TreeNode* y) {
        if(root == NULL) return NULL;
        if(x->val < root->val && y->val < root->val) return lowestCommonAncestor(root->left, x, y);
        else if(x->val > root->val && y->val > root->val) return lowestCommonAncestor(root->right, x, y);
        else {
            return root;
        }
    }
};