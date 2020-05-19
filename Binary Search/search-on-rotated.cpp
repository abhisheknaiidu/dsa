#include <iostream>
using namespace std;

int searchElement(int a[], int start, int end, int key) {
    if(start > end) return -1;
     
    int mid = start + (end - start) / 2;

    if (a[mid] == key) return mid; 

    // Lies in first line!
    if(a[start] <= a[mid]) {
        if(a[start]<=key && key<=a[mid]) 
            return searchElement(a,start,mid-1,key);

        return searchElement(a,mid+1,end,key);
    }
    // Otherwise second line!
    if(key>=a[mid] && key <= a[end]) {
        return searchElement(a,mid+1,end,key);
    }
    return searchElement(a,start,mid-1,key);
}

int main() {
    
    int a[] = { 5,6,7,1,2,3,4 } ;
    int n = sizeof(a)/sizeof(int);
    int key = 3;
    cout<< searchElement(a,0,n-1,key) << endl;
}
