#include <bits/stdc++.h>
using namespace std;

int main() {
    // Reverse an array
    // int arr[] = { 3,5,6,7 };
    // int n = sizeof(arr) / sizeof(arr[0]);
    // reverse(arr, arr+n);
    // for(int i=0; i<n; i++) {
    //     cout << arr[i] << endl;
    // }
    // Rotate the array through a given a 'd'
    int arr[] = { 3,4,5,6 };
    int d=2;
    int n= sizeof(arr) / sizeof(arr[0]);
    // reverse from d=2 => 5,6,4,3
    reverse(arr[],0,d-1); // 4,3,5,6
    reverse(arr[],d,n-1); // 4,3,6,5
    reverse(arr[],0,n-1); // 5,6,3,4
    for(int i=0; i<n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
