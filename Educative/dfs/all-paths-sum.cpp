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

// The time complexity of the above algorithm is O(N^2), where ‘N’ is the total number of
// nodes in the tree. This is due to the fact that we traverse each node once (which will take O(N), 
// and for every leaf node we might have to store its path which will take O(N).
// Space-Complexity - O(NLog(N))

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


void find(TreeNode* root, int sum, vector<vector<int>> &allpaths, vector<int> &cur) {
	if(root == NULL) return;
	cur.push_back(root->val);

	if(root->val == sum && root->left == NULL && root->right == NULL) {
		allpaths.push_back(cur);
	}

	else {
		find(root->left, sum - root->val, allpaths, cur);
		find(root->right, sum - root->val, allpaths, cur);
	}
	cur.pop_back(); // As each recursive call returns, value gets popped!! (Back Tracking)
}

vector<vector <int>> hasPath(TreeNode* root, int sum) {
	vector<vector<int>> allpaths;
	vector<int> cur;
	find(root, sum, allpaths, cur);

	return allpaths;
}


int main(int argc, char* argv[]) {
	abhisheknaiidu();


	TreeNode* root = GetNewNode(12);
	root->left = GetNewNode(7);
	root->right = GetNewNode(1);
	root->left->left = GetNewNode(4);
	root->right->left = GetNewNode(10);
	root->right->right = GetNewNode(5);
	vector<vector<int>> result = hasPath(root, 23);

	for(auto vec: result) {
		for(auto x: vec) {
			cout << x << " ";
		}
		cout << endl;
	}


   return 0;
}