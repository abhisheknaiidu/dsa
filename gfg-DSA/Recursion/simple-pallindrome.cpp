#include <iostream>
#include <string.h> 
bool isPalindrome(char str[], int s, int e) {
        if(s==e) return true;
        if(s>e) return true;
        if (str[s]!=str[e]) return false;
        return isPalindrome(str, s+1, e-1);
    }

using namespace std;
int main() {
    char str[] = "malayalam";
    int e = strlen(str) - 1;
    int s=0;
    // cout << e << endl;
    if (isPalindrome(str, 0, e)) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
