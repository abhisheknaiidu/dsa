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
	if(root->val == x->val || root->val == y->val) {
        cout << root->val << endl;
        return root;
    } 

	TreeNode* leftSearchResult = lowestCommonAncestor(root->left, x, y);
	TreeNode* rightSearchResult = lowestCommonAncestor(root->right, x, y);
    
    // cout << root->val << endl;
    // if(leftSearchResult == NULL && rightSearchResult == NULL) {
    //     cout << "NULL" << " " << root->val << endl;
    // }
        
	if(leftSearchResult == NULL) return rightSearchResult;
	if(rightSearchResult == NULL) return leftSearchResult;

	return root;
    }
};