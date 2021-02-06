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
int sum(Node* root) {
	if(root == NULL) return 0;
	return sum(root->left) + root->data + sum(root->right);
}
int checkSum(Node* root) {
	if((root->left == NULL && root->right == NULL) ||  (root == NULL)) return 1;

	int left = sum(root->left);
	int right = sum(root->right); 
	cout << "left  " << left << " " << "right " << right << endl;
	if((root->data == left + right) && checkSum(root->left) && checkSum(root-left)) {
		return 1;
	}
	return 0;
}


int main(int argc, char* argv[]) {
	abhisheknaiidu();

	Node* root = newNode(10);
	root->left = newNode(20);
	root->right = newNode(30);
	root->left->left = newNode(10);
	// root->left->right = newNode(10);
	cout << checkSum(root) << endl;

   return 0;
}