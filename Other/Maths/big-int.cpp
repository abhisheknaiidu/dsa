#include <iostream>
using namespace std;

    void multiply(int *a, int &n, int no) {
        // array 1 4 6 0 0 0 0 with number 6
        
        int carry = 0;

        // iterating all over the array of size n!
        for ( int i=0; i<n ; i++ ) {
            int mul = a[i]*no + carry;
            a[i] = mul%10;
            carry = mul/10;
        }
        
        // left out carry
        while(carry) {
        // thats why we have referanced n as &, such that we can use it here.
        // In other words as 'n' is moving ahead!
            a[n] = carry%10;
            carry = carry/10;
            n++;
        }
    }

    void bigFactorial( int number) {

    int *a = new int[1000]{0};
    
    a[0] = 1;
    // n denotes the index of array, before which we have stored some digits.
    int n = 1;
    
    for ( int i=2; i<=number; i++) {
        // multiply the array a with n elements in it, with a number 'i'
        multiply(a,n,i);
    }

    for ( int i=n-1; i>=0 ; i--){
        cout<< a[i];
    }
     cout << endl;
     cout << n << " " << "digits" << endl;
    }



    int main() {
        bigFactorial(100);
    }
