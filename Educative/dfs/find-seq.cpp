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

// The time complexity of the above algorithm is O(N),
// where ‘N’ is the total number of nodes in the tree. 
// This is due to the fact that we traverse each node once.

// The space complexity of the above algorithm will be O(N)
// in the worst case. This space will be used to store the recursion stack. 
// The worst case will happen when the given tree is a linked list (i.e., every node has only one child).

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



bool find(TreeNode* root, vector<int> &seq, int Index) {
	if(root == NULL) {
		return false;
	}
	if(Index >= seq.size() || root->val != seq[Index]) return false;

	if(Index == seq.size() - 1 && root->left == NULL && root->right == NULL) {
		return true;
	}


	return find(root->left, seq, Index+1) || find(root->right, seq, Index+1);
}

bool check(TreeNode* root, vector<int> &seq) {
	if(root == NULL) return seq.empty();

	return find(root, seq, 0);
}

int main(int argc, char* argv[]) {
	abhisheknaiidu();


	TreeNode* root = GetNewNode(1);
	root->left = GetNewNode(7);
	root->right = GetNewNode(9);
	root->right->left = GetNewNode(2);
	root->right->right = GetNewNode(9);
	vector <int> v{1,9,9};
	cout << check(root, v);


   return 0;
}