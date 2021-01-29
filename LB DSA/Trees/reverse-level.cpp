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

void reverseLevel(Node* root) {
	queue <Node*> q;
	stack <Node*> s;
	q.push(root);
	while(!q.empty()) {
		Node* cur = q.front();
		s.push(cur);
		if(cur->right) q.push(cur->right);
		if(cur->left) q.push(cur->left);
		q.pop();
	}
	while(!s.empty()) {
		Node* t = s.top();
		cout << t->data << " ";
		s.pop();
	}
}

void abhisheknaiidu()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int main(int argc, char* argv[]) {
	abhisheknaiidu();

	Node* root = newNode(10);
	root->left = newNode(20);
	root->right = newNode(30);
	root->left->left = newNode(40);
	root->left->right = newNode(60);

	reverseLevel(root);

   return 0;
}