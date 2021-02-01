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

vector<int> righView(Node* root) {
	vector<int> v;
	if(root == NULL) return v;
	queue<Node*> q;
	q.push(root);

	while(!q.empty()) {
		int n = q.size();
		for(int i=1; i<=n; i++) {
			Node* cur = q.front();
			if(i==n)
			v.push_back(cur->data);
			if(cur->left) q.push(cur->left);
			if(cur->right) q.push(cur->right);
			q.pop();
		}
	}
	return v;
}

int main(int argc, char* argv[]) {
	abhisheknaiidu();

	Node* root = newNode(10);
	root->left = newNode(20);
	root->right = newNode(30);
	root->left->left = newNode(40);
	root->left->right = newNode(60);

	vector<int> ans = righView(root);
	for(auto x: ans) cout << x << " ";
   return 0;
}