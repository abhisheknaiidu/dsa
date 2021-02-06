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
    m[y].push_back({(root->data), x});
    if(root->left) getCoordinates(root->left, x+1 , y-1, m);
    if(root->right) getCoordinates(root->right, x+1, y+1, m);
}

static bool cmp(pair<int, int>&a, pair<int, int>&b) {
    if(a.second == b.second) {
        return a.first < b.first;
    }
    return a.second < b.second;
}

vector<vector<int>> vertical(Node* root) {
     if(root == NULL){
        return {};
    }
    map<int, vector<pair<int, int>>> m;
    int x = 0;
    int y = 0;
    getCoordinates(root, x, y, m);
    vector<vector<int>> ans;

    for(auto x:m) {
        sort(x.second.begin(), x.second.end(), cmp);
        vector<int> sub;
        for(auto y:x.second) {
            sub.push_back(y.first);
        }
        ans.push_back(sub);
    }

    return ans;
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

    vector<vector<int>> res = vertical(root);
    for(auto x: res) {
        for(auto y: x) {
            cout << y << " ";
        }
        cout << endl;
    }
   return 0;
}