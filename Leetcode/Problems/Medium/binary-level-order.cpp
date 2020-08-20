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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == NULL) return {};
        queue <TreeNode*> q;
        q.push(root);
        vector <vector <int>> res;
        // cout << q.size();
        // TreeNode* curr = root;
         while(!q.empty()) {
             
             vector <int> l;
             int n = q.size();
             // cout << n << " ";
             for(int i=0; i<n; i++) {
             TreeNode* curr = q.front();
             l.push_back(curr->val);
             // cout << curr->val << " ";
             if(curr->left != NULL) {
                 q.push(curr->left);
             }
             if(curr->right != NULL) {
                 q.push(curr->right);
             }
             q.pop();             
             }
             res.push_back(l);
         }
        
        return res;
    }
};
