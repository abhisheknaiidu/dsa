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
// T-C => O(n^2)
class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        int postInd = n-1;
        return helper(inorder, postorder, 0, n-1, postInd);
    }
    TreeNode* helper(vector<int>& inorder, vector<int>& postorder, int s, int e, int &postInd) {
        if(s > e) {
            cout <<  s << " " << e << endl;
            return NULL;
        }
        TreeNode* root = new TreeNode(postorder[postInd--]);
        cout <<  root->val << endl;
        int rootIndex = 0;
        for(int i=s; i<=e; i++) {
            if(inorder[i] == root->val) {
                rootIndex = i;
                break;
            }
        }
        cout << rootIndex << endl;
        root->right = helper(inorder, postorder, rootIndex+1, e, postInd);
        root->left = helper(inorder, postorder, s, rootIndex-1, postInd);

        return root;
    }
};

// T.C => O(N) => using hash maps
class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        unordered_map<int, int> inorderIndex;
        for(int i=0; i<n; i++) inorderIndex[inorder[i]] = i;
        int postInd = n-1;
        return helper(inorder, postorder, 0, n-1, postInd, inorderIndex);
    }

    TreeNode* helper(vector<int>& inorder, vector<int>& postorder, int s, int e, int &postInd, unordered_map<int, int> &inorderIndex) {
        if(s > e) {
            return NULL;
        }
        int nodeValue = postorder[postInd];
        TreeNode* root = new TreeNode(nodeValue);
        postInd--;
        // if(s == e) return root;
        int rootIndex = inorderIndex[nodeValue];

        root->right = helper(inorder, postorder, rootIndex+1, e, postInd, inorderIndex);
        root->left = helper(inorder, postorder, s, rootIndex-1, postInd, inorderIndex);

        return root;
    }
};


