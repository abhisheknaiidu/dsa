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
    void getCoordinates(TreeNode* root, int x, int y, map<int, vector<pair<int,int>>> &m) {
        if(root == NULL) return;
        m[x].push_back({(root->val),y});
        if(root->left != NULL) {
           getCoordinates(root->left, x-1, y+1, m);
        }
        if(root->right != NULL) {
           getCoordinates(root->right, x+1, y+1, m);
        }
    }
    
    static bool cmp(pair<int,int>& a,pair<int,int>& b){
        if(a.second==b.second){
            return a.first<b.first;
        }
        cout << a.second << " " << b.second << endl;
        return a.second<b.second;
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        if(root == NULL) return {};
        map <int, vector<pair<int,int>>> m;
        int x=0;
        int y=0;
        getCoordinates(root, x, y, m);

        vector <vector <int>> ans;
        // map<int, vector<int>> :: iterator it;
        // for(auto it:m){
        //     sort(it.second.begin(),it.second.end(),cmp);
        //     vector<int> tans;
        //     for (auto it1:it.second){
        //         tans.push_back(it1.first);
        //         // cout << it1.second << " " << endl;
        //     }
        //     ans.push_back(tans);
        // }

        for( auto it: m) {
            cout << it.first << " ";
            for( auto it1: it.second) {
                cout << it1.first << it1.second << " ";
            }
            cout << endl;
        }
        return {};
    }
};