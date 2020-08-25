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
    void findPath(TreeNode* root, int sum, vector<vector<int>> &allpaths, vector<int> curPath) {
        if(root == NULL) return;
        curPath.push_back(root->val);
        if(root->val == sum && root->left == NULL && root->right == NULL) {
            allpaths.push_back(curPath);
        }
        else{
            findPath(root->left, sum - root->val, allpaths, curPath);
            findPath(root->right, sum - root->val, allpaths, curPath);
        } 
        curPath.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector <vector<int>> allpaths;
        vector<int> curPath;
        findPath(root,sum,allpaths,curPath);
        return allpaths;
    }
    
    
};