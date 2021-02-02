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

vector<int> zigzag(Node* root) {

    vector<int> v;
    queue<Node*> q;
    q.push(root);
    int level = 1;
    while(!q.empty()) {
        int n = q.size();
            for(int i=0;i<n; i++) {
                Node* cur = q.front();
                v.push_back(cur->data);
                q.pop();
                if((level & 1) == 1) {
                if(cur->right) q.push(cur->right);
                if(cur->left) q.push(cur->left);
                }
                else{
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
                }
            }
        level++;
    }
    cout << level << endl;

    return v;
}


int main(int argc, char* argv[]) {
    abhisheknaiidu();

    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);

    vector<int> ans = zigzag(root);
    for(auto x: ans) cout << x << " ";
   return 0;
}