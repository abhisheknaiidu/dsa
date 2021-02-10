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

// int count = 0;
// usually we don't go for global objects in recursion!
int dfs(Node* root, int targetSum) {
	int count = 0;
	if(root == NULL) return count;
	if(targetSum-root->data == 0) count++;
	count += dfs(root->left, targetSum-root->data);
    count += dfs(root->right, targetSum-root->data);

	return count;
}

int pathSum(Node* root, int targetSum) {
	if(root == NULL) return 0;
	return dfs(root, targetSum) + pathSum(root->left, targetSum) + pathSum(root->right, targetSum);

}

// Optimal => O(n)
int helper(Node* root, int curSum, int targetSum, unordered_map<int, int> preSum) {
	if(root == NULL) return 0;
	// update the prefix sum by adding the current val
	curSum += root->data;
	// get the valid path, ended by the current node.
    int numPathToCurr = preSum[curSum - targetSum];
    // cout << curSum << " " << numPathToCurr << endl;

    preSum[curSum] += 1;
    // each recursion returns the total counts of valid paths in the subtree root at the current node.
    int res = numPathToCurr + helper(root->left, curSum, targetSum, preSum) + helper(root->right, curSum, targetSum, preSum);
    // if left subtree has been scanned, preSum has to removed from this path, because this path is not the prefix path of the right subtree.
    preSum[curSum]--;
    return res;
}

//The interesting part of this solution is that the prefix is counted from the top(root) to the bottom(leaves),
// and the result of total count is calculated from the bottom to the top :D
int pathSumIterative(Node* root, int targetSum) {
	unordered_map<int,int> preSum;
	preSum[0] = 1;
	
	return helper(root, 0, targetSum, preSum);

}

int main(int argc, char* argv[]) {
	abhisheknaiidu();

	Node* root = newNode(1);
	root->left = newNode(7);
	root->right = newNode(9);
	root->left->left = newNode(6);
	root->left->right = newNode(5);
	root->right->left = newNode(2);
	root->right->right = newNode(3);
	int targetSum = 12;
	cout << pathSum(root, targetSum) << endl;
	cout << pathSumIterative(root, targetSum) << endl;


   return 0;
}