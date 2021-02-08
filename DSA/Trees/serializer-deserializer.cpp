/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root == NULL) return "null,";
        string leftSubtree = serialize(root->left);
        string rightSubtree = serialize(root->right);
        
        return to_string(root->val) + "," + leftSubtree + rightSubtree;
    }
    
    queue<string> dataToQueue(string data) {
	if(data.empty()) return {};

	queue<string> q;
	int start = 0;
	for(int i=0;i<data.size();i++) {
		if(data[i] == ',') {
			q.push(data.substr(start,i-start));
			start = i+1;
		}
	}
	return q;
   }
    TreeNode* helper(queue<string> &q) {
        string f = q.front();
        q.pop();
        if(f == "null") return NULL;
        
        TreeNode* newNode = new TreeNode(stoi(f));
        newNode->left = helper(q);
        newNode->right = helper(q);
        return newNode;
    }
    
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.empty()) return NULL;
        queue<string> q = dataToQueue(data);
        // cout << q.size() << endl;
        return helper(q);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));