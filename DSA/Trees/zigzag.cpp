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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>> ans;
    if(root == NULL) return ans;
    queue<TreeNode*> q;
    q.push(root);
    bool leftToRight = true;
    while(!q.empty()) {
        int n = q.size();
        vector<int> v(n);
            for(int i=0;i<n; i++) {
                TreeNode* cur = q.front();
                q.pop();
                int index = leftToRight ? i : n - i - 1;
                v[index] = cur->val;
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
            }
        leftToRight = !leftToRight;
        ans.push_back(v);
    }
    return ans;
    }
};