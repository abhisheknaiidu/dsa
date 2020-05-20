#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long int ll;

void findC(ll A, ll B, ll n, ll Q) {
    ll C[100];
    vector <ll> a(n+1,0);
    ll len = a.size();
    for(ll i=1,j=A; i<=n,j<=B; i++,j++) { 
        a[i] = j;
    }
    // cout << A << " " << B << " " << len << endl;
    for(ll i=1; i<=Q; i++) {
        cin >> C[i];
    }
    for(ll i=1; i<=Q; i++) {
    C[i]<=len ? cout << a[C[i]]<< endl : cout << "-1" << endl;
    }
}

void solve() {
    ll N,Q,A[100],B[100];
    cin >> N >> Q;
    
    for(ll i=1; i<=N; i++) {
        cin >> A[i] >> B[i];
   }
   
   for(int i=1; i<=N; i++) {
     ll n = (B[i] - A[i]) + 1;
     findC(A[i],B[i],n,Q);
   }
   
}

int main() {
    int t;
    cin >> t;
    while(t--) 
        solve();
    
    return 0;
}
