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
	int hr;
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

void topView(Node* root) {
	map<int, int>m;
	queue<Node*> q;
	int hr = 0;
	root->hr = hr;
	q.push(root);
	while(!q.empty()) {
		Node* cur = q.front();
		hr = cur->hr;
		if(m.count(hr) == 0) {
			cout << hr << endl;
			m[hr] = cur->data;
		}
		q.pop();
		if(cur->left) {
			cur->left->hr = hr - 1;
			q.push(cur->left);
		}
		if(cur->right) {
			cur->right->hr = hr + 1;
			q.push(cur->right);
		}
		// root = q.front();
	}
	cout << m.size() << endl;
	for(auto x: m) {
		cout << x.second << endl;
	}
}

// OR
void topView(Node* root) {
	 if(root == NULL){
        return;
    }
    queue<pair<Node *, int>> q;
    map<int, int> mp;
    q.push({root, 0});

    // doing level order traversal and finding the extreme elements
    while(!q.empty()){

        Node* cur = q.front().first;
        int hr = q.front().second;
        q.pop();

        if(mp.find(hr) == mp.end()){
            mp[hr] = cur->data;
        }

        if(cur->left){
            q.push({cur->left, hr-1});
        }

        if(cur->right){
            q.push({cur->right, hr+1});
        }
    }

    for(auto it = mp.begin(); it != mp.end(); it++){
        cout << it->second << " ";
    }
    cout<<endl;

}


int main(int argc, char* argv[]) {
	abhisheknaiidu();

	Node* root = newNode(10);
	root->left = newNode(20);
	root->right = newNode(30);
	root->left->left = newNode(40);
	root->left->right = newNode(60);

	topView(root);
   return 0;
}