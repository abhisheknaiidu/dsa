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

void level(Node* root) {
	queue <Node*> q;
	q.push(root);
	vector<vector<int>> ans;
	while(!q.empty()) {
		vector<int> sub;
		int n = q.size();
		for(int i=0; i<n; i++) {
		Node* cur = q.front();
		sub.push_back(cur->data);
		// cout << cur->data << " ";
		if(cur->left) q.push(cur->left);
		if(cur->right) q.push(cur->right);
		q.pop();
		}
		ans.push_back(sub);
	}

	for(auto x: ans) {
		for(auto y: x) {
			cout << y << " ";
		}
		cout << endl;
	}
}


int main(int argc, char* argv[]) {
	abhisheknaiidu();

	Node* root = newNode(10);
	root->left = newNode(20);
	root->right = newNode(30);
	root->left->left = newNode(40);
	root->left->right = newNode(60);

	level(root);

   return 0;
}