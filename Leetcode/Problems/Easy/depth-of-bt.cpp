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
// BFS
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        int count = 0;
        queue <TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            int n = q.size();
            while(n--) {
                TreeNode* cur = q.front();
                cout << cur->val << " ";
                if(cur->left != NULL) q.push(cur->left);
                if(cur->right != NULL) q.push(cur->right);
                q.pop();
            }
            count++;
        }
        return count;
   }
};

// DFS 

// public int maxDepth(TreeNode root) {
//     if(root == null) {
//         return 0;
//     }
    
//     Stack<TreeNode> stack = new Stack<>();
//     Stack<Integer> value = new Stack<>();
//     stack.push(root);
//     value.push(1);
//     int max = 0;
//     while(!stack.isEmpty()) {
//         TreeNode node = stack.pop();
//         int temp = value.pop();
//         max = Math.max(temp, max);
//         if(node.left != null) {
//             stack.push(node.left);
//             value.push(temp+1);
//         }
//         if(node.right != null) {
//             stack.push(node.right);
//             value.push(temp+1);
//         }
//     }
//     return max;
// }