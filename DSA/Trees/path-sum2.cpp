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

void dfs(Node* root, int targetSum, vector<int> &cur, vector<vector<int>> &ans) {
	if(root == NULL) return ;
	cur.push_back(root->data);
	bool isLeaf = root->left == NULL && root->right == NULL;
	if(isLeaf && targetSum - root->data == 0) ans.push_back(cur);

	dfs(root->left, targetSum-root->data, cur, ans);
	dfs(root->right, targetSum-root->data, cur, ans);
	cur.pop_back();
}

bool pathSum(Node* root, int targetSum) {
	vector<vector<int>> ans;
	vector<int> cur;
	dfs(root, targetSum, cur, ans);
	for(auto x: ans) {
		for(auto y: x) cout << y << " ";
		cout << endl;
	}
	return true;
}

// iterative version using PostOrder 🔥

bool hasPathSum(Node* root, int targetSum) {
	stack <Node*> s;
	Node* pre = NULL, *cur = root;
	int sum = 0;
	while(cur || !s.empty()) {
	    while(cur) {
	    	s.push(cur);
	    	sum += cur->data;
	    	cur = cur->left;
	    }
	    cur = s.top();
	    if(cur->left== NULL && cur->right == NULL && targetSum == sum) return true;

	    // it means that cur has a right child, but has not been visited. So we should post order the right child tree.
	    if(cur->right && pre != cur->right) {
	    	cur = cur->right;
	    }
	    else {
	    	pre = cur;
	    	sum -= cur->data;
	    	cout << cur->data << endl;
	    	s.pop();
	    	cur = NULL;
	    }
	}
	return false;

}


int main(int argc, char* argv[]) {
	abhisheknaiidu();

	Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(4);
	root->right->left = newNode(3);
	root->right->right = newNode(7);
	int targetSum = 7;
	cout << pathSum(root, targetSum) << endl;
	// cout << hasPathSum(root, targetSum) << endl;


   return 0;
}