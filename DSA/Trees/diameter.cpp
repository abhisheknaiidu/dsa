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

pair<int, int> dfs(Node* root) {
	if(root == NULL) return {0,0};
	else {
		pair<int,int> left = dfs(root->left);
		pair<int,int> right = dfs(root->right);
		int dia = max({left.first, right.first, left.second + right.second});
		return {dia, max(left.second, right.second) +1};
	}
}

int main(int argc, char* argv[]) {
	abhisheknaiidu();

	Node* root = newNode(10);
	root->left = newNode(20);
	root->right = newNode(30);
	root->left->left = newNode(40);
	root->left->right = newNode(60);

	cout << dfs(root).first + 1<< endl;

   return 0;
}