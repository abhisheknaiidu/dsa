#include <bits/stdc++.h>
#include <iostream>
#include <string.h> 
using namespace std;

int solve() {
    string trees;
    cin >> trees;
    int len = trees.size();
    int count = 0;
    for(int i=0; i<len; i++) {
        char sm = tolower(trees[i]);
        if(sm == 'a' || sm == 'e' || sm == 'i' || sm == 'o' || sm == 'u' ) count ++;
    }
    cout << count << endl;
    return count;
}

int main() {
    int t;
    cin >> t;
    while(t--)
       solve();
}
