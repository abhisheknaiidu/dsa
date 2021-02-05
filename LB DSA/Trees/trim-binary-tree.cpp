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

// iterative 
vector<int> trimBST(Node* root, int low, int high) {
	//find root
	while(root != NULL && (root->data < low || root->data > high)) {
		if(root->data > high) {
			root = root->left;
		}
		if(root->data < low) {
			root = root->right;
		}
	}
	if(root == NULL) return {};
	stack<Node*> s;
	vector<int> v;
	s.push(root);
	v.push_back(root->data);
	cout << root->data << endl;
	while(!s.empty()) {
		Node* cur = s.top();s.pop();
		Node* left = cur->left;
		while(left != NULL && left->data < low) {
			left = left->right;
		}
		Node* right = cur->right;
		while(right != NULL && right->data > high) {
			right = right->left;
		}
		cur->left = left;
		cur->right = right;
		if(cur->left) {
			s.push(cur->left);
			v.push_back(cur->left->data);
		}
		if(cur->right) {
			s.push(cur->right);
			v.push_back(cur->right->data);
		}
	}
	return v;
}


int main(int argc, char* argv[]) {
	abhisheknaiidu();

	Node* root = newNode(3);
	root->left = newNode(0);
	root->right = newNode(4);
	root->left->right = newNode(2);
	root->left->right->left = newNode(1);
	int high = 3, low = 1;
	vector<int> ans = trimBST(root, low, high);
	for(auto x: ans) cout << x << " ";

   return 0;
}