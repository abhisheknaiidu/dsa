#include <iostream>
#include <cstring>
using namespace std;

// Calculate number of set bits in number!
// time is O(no of bits)
int countSetBits(int n) {

    int count = 0;
    while(n>0) {
        count+= (n&1);
        n = n >> 1;
        // cout << count;
    }
    return count;
}

// Here Time will be O(no of set bits) => Efficient.
// Also called n & n-1 hack!
int countSetBitsFast(int n) {

    int count = 0;
    while(n) {
        n = n & (n-1);
        count++;
    }
    return count;
}

// Extract the Ith bit of a number
int Ithbit(int n, int i) {
    return (n & 1<<i)!=0?1:0;
}

//Set the Ith bit of a number
void setIthBit(int &n, int i) {
    // n = (n | (int) 1<<i);
    int mask = 1<<i;
    n = (n | mask);
}

//Clear the ith bit of number to 0
void clearIthBit(int &n, int i) {

    int mask = ~(1<<i);
    n = ( n & mask);
}

//Filter the subsets 
void filterChars( char *a, int m) {
    // a = "abc" number = "5" , then output will be => a_c => ac
    int i = 0;
    while(m) {
        (m & 1) ? cout << a[i] : cout << "";
        i++;
        m = m >> 1;
    }
    cout << endl;
}

void generateSubsets( char *a) {
    // Generate a range of numbers from 0 to 2^n-1
    int size = strlen(a);
    int range = (1 << size) - 1;
    for ( int i=0 ; i <= range ; i++ )
          filterChars(a,i);
}

void unique2Elements( int *a, int n) {

    int ans = 0;
    //Range-based for loops work with arrays, but not with pointers. 
    //The issue here is that arrays is actually a pointer and not an array.
    // for( int x:a )
    //     ans^=x;
    for ( int i=0; i<n; i++) {
        ans^=a[i];
    }
    //find the rightmost set bit in the answer!
    
    int i = 0;
    int temp = ans;
    while(temp > 0) {
        if(temp&1) {
            break;
        }
        i++;
        temp = temp >> 1;
    }

    int mask = 1<<i;
    int firstNo = 0;
    for( int i=0; i < n; i++ ) {
        if((mask&a[i])!=0)
             firstNo^=a[i];
    }
     
    int secondNo = ans^firstNo;
    cout << firstNo << endl;
    cout << secondNo << endl;
    

}
int main() {

    int n,i;
    // cin >> n;
    // cin >> i;
    // char a[100];
    // cin >> a;

    //For 2 Unique Elements 
    int a[] = { 1,3,5,6,3,2,1,2 };
    n = sizeof(a)/sizeof( int );
    
    
    // cout << Ithbit(n,i) << endl;
    // cout << countSetBits(n)<< endl;
    // cout << countSetBitsFast(n);
    // setIthBit(n,i);
    // cout << n << endl;
    // clearIthBit(n,i);
    // cout << n << endl;
    // generateSubsets(a);
    unique2Elements(a,n);
    return 0;
}


// XOR Swapping - Faster than any multiplication and division
// a = 5, b = 7
// a = a^b => 5^7
// b = b^a => 7^5^7 => 5
// a = a^b => 5^7^5 => 7
