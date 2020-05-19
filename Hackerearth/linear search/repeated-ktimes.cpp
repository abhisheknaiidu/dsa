#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main() {
    int N,K,c=0;
    cin >> N;
    int a[N];
    vector<int> b(N,0);
    for(int i=0;i<N;i++) {
        cin >> a[i];
    }
    cin >> K;

    for(int i=0; i<N; i++) {
        int pt = a[i];
        b[pt]++;
    }
    
    for(int i=0; i<N; i++) {
        if(b[i] == K) {
            cout << i;
            break;
        }
    }
}
