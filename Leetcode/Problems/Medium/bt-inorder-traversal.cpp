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
    vector<int> inorderTraversal(TreeNode* root) {
       stack <TreeNode*> nodes;
        vector <int> res;
        while( root!= NULL || !nodes.empty()) {
            while(root!= NULL) {
                //push left children if available
                nodes.push(root);
                // cout << root->val << " ";
                root = root->left;
            }
            
            //retrieve top node and store its right child if exists
            root = nodes.top();
            // cout << root->val;
            nodes.pop();
            
            res.push_back(root->val);
            root = root->right;
            // if(root == NULL) cout << true << endl;
            // else cout << false << endl;
        }
        return res;
    }
};