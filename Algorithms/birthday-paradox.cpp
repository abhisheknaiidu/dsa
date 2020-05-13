#include <iostream>
using namespace std;
int main() {
    
    float num = 365;
    float deno = 365;
    float p = 1;
    int n = 0;

    // p becomes less than 0.5, as we are starting from 1!
    while( p> 0.5) {
        p*= (num)/deno ;
        num--;
        n++;
        cout << p << " -> " << n << endl;
    }
}
