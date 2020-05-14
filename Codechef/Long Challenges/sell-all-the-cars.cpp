
// Question : https://www.codechef.com/APRIL20B/problems/CARSELL


#include <bits/stdc++.h>
#define MOD (1000000000+7)
#define all(x) x.begin(), x.end() 
using namespace std;
typedef long long int ll;

void solve() {
    int n;
    cin >> n;
    // cout << n;
    vector <ll> a(n);
    for(int i=0; i<n ; i++){
        cin >> a[i];
    }
     
    sort( all(a), greater<ll>());
    
    int profit = 0;
    for( int i=0; i<n ; i++ ) {
        profit += max((ll)0,a[i]-i); 
        profit = profit % MOD;
    }

    cout << profit << endl;
}

int main() {

    int t;
    cin >> t;
    while(t--)
        solve(); 
}
