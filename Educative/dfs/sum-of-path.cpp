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

int calSum(TreeNode* root, int &res, int x){
	if(root == NULL) return 0 ;
	int cur = x*10 + root->val;

	if(root->left == NULL && root->right == NULL) {
		res += cur;
		cout << res << " ";
		// return;
	}

	calSum(root->left, res, cur);
	calSum(root->right, res, cur);

	return res;
}

int main(int argc, char* argv[]) {
	abhisheknaiidu();


	TreeNode* root = GetNewNode(1);
	root->left = GetNewNode(7);
	root->right = GetNewNode(9);
	// root->left->left = GetNewNode(2);
	root->right->left = GetNewNode(2);
	root->right->right = GetNewNode(9);
	int res = 0;
	int x = 0;
	int a = calSum(root, res, x);

	cout << a << endl;
	cout << res;
   return 0;
}