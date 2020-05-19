// FIRST METHOD 

#include <iostream>
using namespace std;

int searchElement(int a[], int n, int key) {
    int start = 0, end = n-1;
    int mid;
    while(start <= end) {
        mid = start + (end - start) / 2;
        
        if( a[mid] == key) return mid;
        
        //Element is present in first line
        else if ( a[start] <= a[mid] ) {
            if(key>= a[start] && key <= a[mid]) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        // Elemeent in present in second line
        else {
            if(key >= a[mid] && key <= a[end]) {
                start = mid + 1;
            }
            else end = mid -1;
        }


    }
    return mid;
}

int main() {
    
    int a[] = { 5,6,7,1,2,3,4 } ;
    int n = sizeof(a)/sizeof(int);
    int key = 3;
    cout<< searchElement(a,n,key) << endl;
}



// SECOND METHOD (FAMOUS), RECURSION!

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
