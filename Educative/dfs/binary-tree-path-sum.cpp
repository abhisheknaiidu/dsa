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

struct TreeNode
	{
		int val;
		TreeNode* left;
		TreeNode* right;
	};

	// BstNode* rootptr = NULL;

TreeNode* GetNewNode(int val) {
	TreeNode* newNode = new TreeNode(); // returns back the address the new node
    newNode->val = val;
    newNode->left = newNode->right = NULL;
    return newNode; // address of newNode
}

// TreeNode* root = NULL;

bool hasPath(TreeNode* root, int x) {
	if(root == NULL) {
		return false;
	}

	cout << x <<  " ";
	cout << root->val << endl;
	if(root->val == x && root->left == NULL && root->right == NULL) {
		return true;
	}

	// hasPath(root->left, x - root->val);

	// hasPath(root->right, x - root->val);

	return hasPath(root->left, x - root->val) || hasPath(root->right, x - root->val);
}

int main(int argc, char* argv[]) {
	abhisheknaiidu();


	TreeNode* root = GetNewNode(12);
	root->left = GetNewNode(7);
	root->right = GetNewNode(1);
	root->left->left = GetNewNode(9);
	root->right->left = GetNewNode(10);
	root->right->right = GetNewNode(5);
	cout << hasPath(root, 23);


   return 0;
}