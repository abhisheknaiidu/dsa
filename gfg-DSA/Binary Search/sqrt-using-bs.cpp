#include <iostream>
using namespace std;

float sqrt(int no, int p) {
    int start = 0, end = no ;
    float ans;
    int mid;

    while(start<=end) {
        mid = (start + end) / 2 ;

        if(mid*mid == no) {
            ans = mid;
            break;
        }
        else if((mid*mid) < no) {
            start = mid + 1;
            ans = mid;
        }
        else {
            end = mid - 1;
        }
    }

    // for finding precision

    float increment = 0.1;

    for ( int i=0; i < p; i++){

         while(ans*ans <= no) {
             ans = ans + increment;
         }

         ans = ans - increment;
         increment = increment/10;

    }

    return ans;
}

int main() {
    
    cout << sqrt(49,1) << endl;
    cout << sqrt(10,3) << endl;
    cout << sqrt(2,2) << endl;

    return 0; 
}
