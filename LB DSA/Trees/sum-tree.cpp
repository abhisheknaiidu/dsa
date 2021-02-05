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

// T.C - O(N)
int checkBalance(Node* root) {
	if(root->left == NULL || root->right == NULL) return root->data;

	int left = checkBalance(root->left);
	int right = checkBalance(root->right); 
	cout << "left  " << left << " " << "right " << right << endl;

	return (left+right) + root->data;
}


int main(int argc, char* argv[]) {
	abhisheknaiidu();

	Node* root = newNode(10);
	root->left = newNode(20);
	root->right = newNode(30);
	root->left->left = newNode(10);
	root->left->right = newNode(10);
	bool ans = true;
	if((checkBalance(root) - root->data) == root->data) {
		cout << "1" << endl;
	}
	cout << ans << endl;

   return 0;
}