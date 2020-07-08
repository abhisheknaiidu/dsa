#include <bits/stdc++.h>
using namespace std;

// Time Complexity will O(3^n);

int maxCuts(int n, int a, int b, int c) {
    if(n==0) return 0;
    else if(n<0) return -1;
    // cout << n << a;
    int result = max ( maxCuts(n-a, a, b, c), maxCuts(n-b, a, b, c), maxCuts(n-c, a, b, c) );

    if(result == -1) return -1;
    return (1+result);
}

int main() {
    int n=23, a=11, b=9, c=13;
     cout << maxCuts(n, a, b, c);
     return 0;
}
