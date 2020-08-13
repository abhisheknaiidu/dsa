#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main() {
    int x,y,s,t,points=0;
    cin >> x >> y >> s >> t;

    for(int i=0, j=t; i<=t; i++, j--) {
        if(j>=y && j<=y+s) {
            points += min(max(0,i-x+1), s+1);
        }
    }
    cout << points << endl;
}
