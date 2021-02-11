/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    string tree2str(TreeNode* t) {
    	// base case
        if(t == NULL) return "";
        
        // asking left and right subtrees about the value's they've received
        string left = tree2str(t->left);
        string right = tree2str(t->right);

        // Arithmetic computations
        if(left == "" && right == "")  return to_string(t->val);
        if(right == "") return to_string(t->val) + "(" + left + ")";
        if(left == "") return to_string(t->val) + "()" + "(" + right + ")" ;

        return to_string(t->val) + "(" + left + ")" + "(" + right + ")";
    }
};