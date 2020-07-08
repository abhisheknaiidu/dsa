#include <iostream>
using namespace std;

int Jos(int n, int k) {
// for handling 0-n (here the recursive call gives)
// Adding k because, the next position being shifted by k position.

// return n > 1 ? (Jos(n-1, k) + k ) % n  : 1;
// here the recursive call gives 0-n-1, 
// Adding 1 in RHS part, to ensure that we are in the same 
// range of 1-n, and also we are having 1 extra player in
// previous case.
return n > 1 ? (Jos(n-1, k) + k - 1) % n + 1 : 1;
}

int main() {
    int n = 7, k = 3;
    cout << Jos(n,k);
    return 0;
}
