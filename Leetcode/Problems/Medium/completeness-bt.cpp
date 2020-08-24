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
    bool isCompleteTree(TreeNode* root) {
        if(root == NULL) return true;
        if(root->left == NULL && root->right == NULL) return true;
        queue <TreeNode*> q;
        q.push(root);
        bool isNull = false;
        while(!q.empty()) {
            int n = q.size();
            while(n--) {
                TreeNode* cur = q.front();
                cout << cur->val << " ";
                if(cur->left) {
                    if(isNull) return false;
                    q.push(cur->left);
                } 
                else {
                    isNull = true;
                }
                if(cur->right)  {
                    if(isNull) return false;
                    q.push(cur->right);
                }
                else {
                    isNull = true;
                }
                q.pop();
            }
        }
        return true;
    }
};