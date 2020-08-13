#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    //code
    int size;
    cin >> size;
    int arr[size];
    
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        /* code */
    }
    for (int i=size-1;i>=0; i--){
    cout<<arr[i]<<" ";
    }

    return 0;
}
