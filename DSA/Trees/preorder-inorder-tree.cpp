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
//T-C => O(n2)
class Solution {
public:
    int preInd = 0;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = inorder.size();
        return helper(preorder, inorder, 0, n-1);
    }
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int s, int e) {
        if(s > e) {
            return NULL;
        }
        TreeNode* root = new TreeNode(preorder[preInd++]);
        int rootIndex = 0;
        for(int i=s; i<=e; i++) {
            if(inorder[i] == root->val) {
                rootIndex = i;
                break;
            }
        }
        root->left = helper(preorder, inorder, s, rootIndex-1);
        root->right = helper(preorder, inorder, rootIndex+1, e);
        return root;
    }
};

// We can use hashmaps for constant time lookups
class Solution {
public:
    int preInd = 0;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = inorder.size();
        unordered_map<int,int>inorderIndex;
        for(int i=0; i<n;i++) inorderIndex[inorder[i]] = i;
        return helper(preorder, inorder, 0, n-1, inorderIndex);
    }
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int s, int e, unordered_map<int, int> &inorderIndex) {
        if(s > e) {
            return NULL;
        }
        int nodeValue = preorder[preInd];
        TreeNode* root = new TreeNode(nodeValue);
        preInd++;
        int rootIndex = inorderIndex[nodeValue];
        root->left = helper(preorder, inorder, s, rootIndex-1, inorderIndex);
        root->right = helper(preorder, inorder, rootIndex+1, e, inorderIndex);
        return root;
    }
};
