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
    TreeNode* root = NULL;
    void insert(TreeNode* &root, int data) {
        if(root == NULL) {
            root = new TreeNode(data);
            return;
        }
        
        else if(data < root->val) insert(root->left, data);
            
        else insert(root->right, data);
            
        }
    void callbs(TreeNode* &root, int l, int r, vector <int> &nums) {
        int mid = (l+r)/2;
        // cout << mid << " ";
        int data = nums[mid];
        insert(root,data);
        

        if(l!=mid) callbs(root,l,mid-1,nums);
        cout << mid << " ";
        if(r!=mid) callbs(root,mid+1,r,nums);
        
        // while(l<=r) {
        //     int mid = (l+r)/2;
        //     int data = nums[mid];
        //     insert(root, data);
        //     if(l!= mid) {
        //         r = mid-1;
        //     }
        //     if(r!= mid) {
        //         l = mid+1;
        //     }
        // }
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return root;
        int l = 0, r = n-1;
        int mid = (l+r)/2;
        callbs(root,l,r,nums);
        
        return root;
    }
};


// OR 


// private:
//     TreeNode* sortedArrayToBST(const vector<int>& nums, int l, int h)
//     {
//         if(l > h) return NULL;
//         int m = l+(h-l)/2;
//         int val = nums[m];
//         TreeNode *root = new TreeNode(val);
//         root->left = sortedArrayToBST(nums, l, m-1);
//         root->right = sortedArrayToBST(nums, m+1, h);
//         return root;
//     }
// public:
//     TreeNode* sortedArrayToBST(vector<int>& nums) {
//         return sortedArrayToBST(nums, 0, nums.size()-1);
//     }
// };
