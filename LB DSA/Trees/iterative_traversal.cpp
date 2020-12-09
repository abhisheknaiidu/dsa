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
	// if(root == NULL) 
	while( !s.empty() || root != NULL) {
		while(root != NULL) {
			s.push(root);
			root = root->left;
		}
		root = s.top();
		s.pop();
		cout << root->data << " ";
		root = root->right;
	}
}

// void dfs(Node* root) {

// }

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

int main(int argc, char* argv[]) {
	abhisheknaiidu();

	Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	inorder(root);
	cout << endl;
	postorder(root);

   return 0;
}