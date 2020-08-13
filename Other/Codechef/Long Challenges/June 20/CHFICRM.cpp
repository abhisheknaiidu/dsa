///   https://www.codechef.com/JUNE20B/problems/CHFICRM


#include <bits/stdc++.h>
using namespace std;

int isChangeable(int a[], int n)
{
    int fiveCount = 0;
    int tenCount = 0;

    for (int i = 0; i < n; i++) {
        //  cout << a[i] << " ";
        if (a[i] == 5)
            fiveCount++;
        else if (a[i] == 10) {

            if (fiveCount > 0) {
                fiveCount--;
                tenCount++;
            }
            else
                return 0;
        }
        else {

            if (tenCount > 0) {
                tenCount--;
            }

            else if (fiveCount >= 2) {
                fiveCount -= 2;
            }
            else
                return 0;
        }
    }

    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        if (isChangeable(a, n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }


    return 0;
}
