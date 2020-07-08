#include <iostream>
using namespace std;

int Jos(int n, int k) {
// for handling 0-n
// Adding  because, the next position being shifted by k position.
// return n > 1 ? (Jos(n-1, k) + k ) % n  : 1;
// for handling 0-n-1, we needs this only
return n > 1 ? (josephus(n-1, k) + k - 1) % n + 1 : 1;
}

int main() {
    int n = 7, k = 3;
    cout << Jos(n,k);
    return 0;
}
