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

void getCoordinates(Node* root, int x, int y, map<int, vector<pair<int, int>>> &m) {
    if(root == NULL) return;
    m[x].push_back({(root->data), y});
    if(root->left) getCoordinates(root->left, x+1 , y-1, m);
    if(root->right) getCoordinates(root->right, x+1, y+1, m);
}

// much more faster!
int bottomLeft(Node* root) {
     if(root == NULL){
        return {};
    }
    map<int, vector<pair<int, int>>> m;
    int x = 0;
    int y = 0;
    getCoordinates(root, x, y, m);
    int res;
    int n = m.size();
    res = 0;
    res = m[n-1][0].first;

    return res;
}

// less faster!! 
int bottomLeftv2(Node* root) {
    queue<Node*> q;
    q.push(root);
    vector<int> row;
    row.push_back(root->data);
    while(!q.empty()) {
        row.clear();
        int n = q.size();
        while(n--) {
            Node* cur = q.front();
            row.push_back(cur->data);
            q.pop();
            if(cur->left){
                q.push(cur->left);
            }
            if(cur->right) {
                q.push(cur->right);
            }
        }
    }
    return row[0];   
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

    cout << bottomLeft(root) << endl;
    cout << bottomLeftv2(root) << endl;
   return 0;
}