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
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL) return root;
        queue <TreeNode*> q;
        q.push(root);
        TreeNode* cur;
        while(!q.empty()) {
            int n = q.size();
            while(n--) {
            cur = q.front();
            if(cur == NULL) {
                continue;
            }
            TreeNode *temp = cur->left;
            cur->left = cur->right;
            cur->right = temp;
            if (cur->left) q.push(cur->left);
            if (cur->right) q.push(cur->right);
            q.pop();          
            }
        }
        return root;

// Recursion
//         if (root == null){
//             return root;
//         }

//         TreeNode* temp = root->left;
//         root->left = root->right;
//         root->right = temp;
        
//         invertTree(root->left);
//         invertTree(root->right);
//         return root;
    }
};