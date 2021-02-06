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


// OR
void bottomView(Node* root) {
	 if(root == NULL){
        return;
    }
    queue<pair<Node *, int>> q;
    map<int, int> m;
    q.push({root, 0});

    while(!q.empty()){

        Node* cur = q.front().first;
        int hr = q.front().second;
        q.pop();

        if(m.count(hr)>=0){
            m[hr] = cur->data;
        }

        if(cur->left){
            q.push({cur->left, hr-1});
        }

        if(cur->right){
            q.push({cur->right, hr+1});
        }
    }
    cout << m.size() << endl;
    for(auto x:m) {
    	cout << x.second << " ";
    }
}


int main(int argc, char* argv[]) {
	abhisheknaiidu();

	Node* root = newNode(10);
	root->left = newNode(20);
	root->right = newNode(30);
	root->left->left = newNode(40);
	root->left->right = newNode(60);

	bottomView(root);
   return 0;
}