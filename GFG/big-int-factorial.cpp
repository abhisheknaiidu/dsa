#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    //Code
    int t;
    cin >> t;
    // int a=24, b=10;
    // cout << a/b;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v ;
        v.push_back(1);
        // cout << v.size() << endl;
        // for (std::vector<int>::const_iterator i = v.begin(); i != v.end(); ++i)
        // std::cout << *i << ' ';
        for ( int x = 2; x<=n ; x++) {
            int carry = 0;
            for ( int i = 0; i <v.size() ; i++) {
                // cout << v.size() << ' ';
                // cout << endl;
                int mul = v[i] * x + carry;
                v[i] = mul%10;
                carry = mul / 10;
                // cout << v[i] << ' ' << mul << ' ' << carry << endl ;
            }
            while(carry) {
                v.push_back( carry % 10);
                carry = carry/10;
            }
        }
        // cout << v.size() << endl;
        for (std::vector<int>::const_iterator i = v.begin(); i != v.end(); ++i)
        cout << *i << ' ';
        cout << endl;
        for ( int i = v.size()-1; i>=0 ; i--) {
            cout << v[i] ;
        }
        cout << endl;
    }
	return 0;
}