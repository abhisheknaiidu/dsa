#include <iostream>
using namespace std;

int pivotElement(int a[], int n) {
    int start = 0, end = n-1;
    int mid;
    while(start <= end) {
        mid = start + (end - start) / 2;
        if(a[mid]<a[mid-1]) return mid-1;
        else if(a[mid]>a[mid+1]) return mid;
        else {
            if(a[start] >= a[mid]) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
    }
    return mid;
}

int main() {
    
    int a[] = { 5,6,7,8,9,19,4 } ;
    int n = sizeof(a)/sizeof(int);
    cout<< pivotElement(a,n) << endl;
}
