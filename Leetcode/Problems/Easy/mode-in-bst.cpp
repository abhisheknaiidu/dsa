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
    unordered_map <int,int> m;
    void push(TreeNode* root) {
        if(root == NULL) return;
        
        m[root->val]++;
        push(root->left);
        push(root->right);
    }
    vector<int> findMode(TreeNode* root) {
//         stack <TreeNode*> nodes;
//         while(root!=NULL || !nodes.empty()) {
//             while(root!= NULL) {
//                 nodes.push(root);
//                 root = root->left;
//             }
            
//             root = nodes.top();
//             nodes.pop();
//             m[root->val]++;
//             root = root->right;
//         }

        int max=0;
        int ans = 0;
        vector<int> res;
        push(root);
        for(auto x:m) {
            // cout << x.first << " " << x.second << endl;
            if(x.second > max) {
                res.clear();
                res.push_back(x.first);
                max = x.second;
                continue;
            }
            else if(x.second == max) {
                res.push_back(x.first);
            }
        }
        // cout << ans << " " << endl;
        // res.push_back(ans);
        // reverse(res.begin(), res.end());
        return res;
    }
};