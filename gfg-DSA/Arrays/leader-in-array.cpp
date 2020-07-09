#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = { 4,10,6,7 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int right_max = arr[size-1];
    cout << right_max << " " << endl;
    for(int i=size-2; i>=0; i--) {
        if(right_max<arr[i]) {
            right_max=arr[i];
            cout << right_max << " " << endl;
        }
    } 
    return 0; 
}
