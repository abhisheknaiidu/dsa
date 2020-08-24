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
    void cal(TreeNode* root,int val, int &ans) {
        int cur = val*10 + root->val;
        if(root->left == NULL && root->right == NULL) {
            ans += cur;
            return;
        }
        cout << cur << " " << ans << endl;
       if(root->left) cal(root->left, cur, ans);
       if(root->right) cal(root->right, cur, ans);

        // cout << sum;
    }
    int sumNumbers(TreeNode* root) {
        int ans = 0;
        if(root == NULL) return ans;
        cal(root, 0, ans);
        
        return ans;
    }
};