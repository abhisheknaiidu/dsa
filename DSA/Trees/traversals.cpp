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

// utitlity function to create new Node.
Node* newNode(int data) {
	Node* temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return(temp);
}

void inorder(Node* root) {
	stack <Node*> s;
	// s.push(root);
	while(!s.empty() || root != NULL) {
		while(root != NULL) {
            //push left children if available
            s.push(root);
			root = root->left;
		}

		//retrieve top node and store its right child if exists
		root = s.top();
		s.pop();
		cout << root->data << " ";
		root = root->right;
	}
}

void inorderRecursive(Node* root) {
	if(root == NULL) return;
	inorderRecursive(root->left);
	cout << root->data << " ";
	inorderRecursive(root->right);
}

void preorder(Node* root) {
	stack<Node*> s;
	s.push(root);
	while(!s.empty()) {
	Node* cur = s.top(); s.pop();
	if(cur != NULL) {
		// preorder
		cout << cur->data << " ";
		// push unvisited neighbours to stack | order matters here, if you reverse it 
        // it would still be a DFS but a symmetric one to preorder out of the 6 possible combinations.  
		s.push(cur->right);
	    s.push(cur->left);
	}
	}
}

void preorderRecursive(Node* root) {
	if(root == NULL) return;
	cout << root->data << " ";
	preorderRecursive(root->left);
	preorderRecursive(root->right);
}

void postorder(Node* root) {
	stack <Node*> s1;
	stack <Node*> s2;
	s1.push(root);
	while(!s1.empty()) {
		root = s1.top();
		s1.pop();
		s2.push(root);
		if(root->left) s1.push(root->left);
		if(root->right) s1.push(root->right);
	}
	while(!s2.empty()) {
		root = s2.top();
		s2.pop();
		cout << root->data << " ";
	}
}

void postorderRecursive(Node* root) {
	if(root == NULL) return;
	postorderRecursive(root->left);
	postorderRecursive(root->right);
	cout << root->data << " ";
}

int main(int argc, char* argv[]) {
	abhisheknaiidu();

	Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->left->left->right = newNode(6);
	cout << "Inorder Iterative: ";
	inorder(root);
	cout << endl;
	cout << "Inorder Recursive: ";
	inorderRecursive(root);
	cout << endl;
	cout << "Preorder Iterative: ";
	preorder(root);
	cout << endl;
    cout << "Preorder Recursive: ";
	preorderRecursive(root);
	cout << endl;
	cout << "Postorder Iterative: ";
	postorder(root);
	cout << endl;
	cout << "Postorder Recursive: ";
	postorderRecursive(root);

   return 0;
}