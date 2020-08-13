#include <iostream>
using namespace std;

int binarySearch(int a[],int n, int key) {

    int start = 0, end = n-1;
    int mid;
    
    while(start<=end) {
        mid = (start + end) / 2;

        if(a[mid] == key) return mid;
        
        // Elements present in left side.
        else if(a[mid]> key) {
            end = mid - 1;
        }
        else start = mid + 1;
    }
    
    // Element is not present
    return -1;
}

int main() {
    
    int a[] = { 1,3,5,10,12,15,17 };
    int n = sizeof(a)/sizeof(int);
    int key;
    cin >> key;

    int indexOfKey = binarySearch(a,n,key);

    cout << indexOfKey << endl;

}
