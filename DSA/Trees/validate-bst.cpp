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

bool pathSum(Node* root, int targetSum) {
	if(root == NULL) return false;
	bool isLeaf = (root->left == NULL) && (root->right == NULL);
	if(isLeaf && targetSum - root->data == 0) return true;

	// recursive cases 
	return pathSum(root->left, targetSum - root->data) || pathSum(root->right, targetSum - root->data);
}

// iterative version using PostOrder 🔥

bool validateBST(Node* root) {
	stack <Node*> s;
	Node* prev = NULL, *cur = root;
	while(cur || !s.empty()) {
	    while(cur) {
	    	s.push(cur);
	    	cur = cur->left;
	    }
	    cur = s.top();
	    s.pop();
	    if(prev != NULL && prev->data >= cur->data) return false;
	    prev = cur;
	    cur = cur->right;
	}
	return true;

}


int main(int argc, char* argv[]) {
	abhisheknaiidu();

	Node* root = newNode(5);
	root->left = newNode(1);
	root->right = newNode(7);
	root->left->left = newNode(-1);
	root->left->right = newNode(2);
	root->right->left = newNode(6);
	root->right->right = newNode(8);
	int targetSum = 12;
	cout << validateBST(root) << endl;


   return 0;
}