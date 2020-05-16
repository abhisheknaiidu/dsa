#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool makeSets(vector<ll> &a , int n, int k) {
    int i = 0;
    int sum = 0;
    while(n) {
        if(n & 1) {
            sum+=a[i];
        }
        i++;
        n = n >> 1;
    }
    if (sum == k) return true;
      return false;

    // cout << a[i] << endl;
    // cout << k << endl;
}

void solve() {

    int n, k;
    cin >> n >> k;

    vector <ll> a(n);
 
    for(int i=0; i<n ; i++) {
        cin >> a[i];
    }
    
    // cout << n << endl;
    // cout << k << endl;
    // int i=0;
    int range = (1<<n) - 1;
    int ans = 0;
    for( int i=0; i<=range; i++) {
         if(makeSets(a,i,k)) {
             ans = 1;
             cout << "Yes\n";
             break;
         }
    }
    
    if(ans == 0)
        cout << "No\n";
}

int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
}
