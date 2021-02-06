#pragma GCC optimize("Ofast")
#include <algorithm>
#include <bitset>
#include <deque>
#include <iostream>
#include <iterator>
#include <string>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

void abhisheknaiidu()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

struct Node {
	int data;
	Node* left;
	Node* right;
};

// utility fxn
Node* newNode(int n) {
	Node* temp = new Node;
	temp->data = n;
	temp->left = temp->right = NULL;
	return(temp);
}
// T-C => O(n) and S-C => O(n)
void invert(Node* root) {
	queue<Node*> q;
	q.push(root);
	Node* cur;
	while(!q.empty()) {
		int n = q.size();
		while(n--) {
			cur = q.front();
			cout << cur->data << " ";
			Node* temp = cur->left;
			cur->left = cur->right;
			cur->right = temp;
		    if(cur->left) q.push(cur->left);
		    if(cur->right) q.push(cur->right);
		    q.pop();
		}
	}
}

// Recursive Soln
// struct TreeNode* invertTree(struct TreeNode* root){
    
//     if(!root)
//     {
//         return NULL;
//     }
    
//     struct TreeNode *left;
//     struct TreeNode *right;
//     if(root)
//     {
//         left  = invertTree(root->left);
//         right = invertTree(root->right);
        
//         struct TreeNode *temp = root->left;
//         root->left = root->right;
//         root->right = temp;
//     }

//     return root;
// }

int main(int argc, char* argv[]) {
	abhisheknaiidu();

	Node* root = newNode(5);
	root->left = newNode(3);
	root->right = newNode(6);
	root->left->left = newNode(2);
	root->left->right = newNode(4);
	invert(root);


   return 0;
}