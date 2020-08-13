#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int N, Q, P, sum = 0, count = 0;
    cin >> N;
    int a[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    cin >> Q;
    for (int i = 1; i <= Q; i++) {
        cin >> P;
        for (int j = 0; j < N; j++) {
            if (a[j] <= P) {
                count++;
                sum += a[j];
            }
        }
        cout << count << " " << sum << endl;
        sum = 0;
        count = 0;
    }
}
