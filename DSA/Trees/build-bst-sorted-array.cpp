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
    TreeNode* buildBST(vector<int> nums, int start, int end) {
        if(start>=end) return NULL;
        
        int mid = start + (end - start)/2;
        TreeNode* newNode = new TreeNode(nums[mid]);
        // Basic idea: Use a method that takes the start (inclusive), end (exclusive) to recursively create
        // the left and right sub-trees. (Do this to avoid copying the input array by passing in start, end to
        // just get a range/view of the array)
        newNode->left = buildBST(nums, start, mid);
        newNode->right = buildBST(nums, mid+1, end);
        return newNode;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        return buildBST(nums, 0, n);
    }
};

// taking 0 - n-1 as a range - 
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
    TreeNode* buildBST(vector<int> nums, int start, int end) {
        if(start>end) return NULL;
        
        int mid = start + (end - start)/2;
        TreeNode* newNode = new TreeNode(nums[mid]);
        cout << start << " " << end << " " << mid << endl;
        
        newNode->left = buildBST(nums, start, mid-1);
        newNode->right = buildBST(nums, mid+1, end);
        return newNode;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        return buildBST(nums, 0, n-1);
    }
};