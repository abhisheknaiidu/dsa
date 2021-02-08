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
int checkBalance(Node* root, bool &ans) {
	if(root == NULL) return -1;
	int left = checkBalance(root->left, ans);
	int right = checkBalance(root->right, ans); 
	cout << "left  " << left << " " << "right " << right << endl;
	if(abs(left - right) <= 1) {
		ans = ans && true;
	}
	else ans = false;

	return max(left, right) + 1;
}


int main(int argc, char* argv[]) {
	abhisheknaiidu();

	Node* root = newNode(10);
	root->left = newNode(20);
	// root->right = newNode(30);
	root->left->left = newNode(40);
	// root->left->right = newNode(60);
	bool ans = true;
	// checkBalance(root, ans);
	cout << checkBalance(root, ans) << endl;
	cout << ans << endl;

   return 0;
}