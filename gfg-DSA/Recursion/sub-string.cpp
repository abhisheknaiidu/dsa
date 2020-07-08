#include <bits/stdc++.h>
using namespace std;

void subString(string str, string initial=" ", int index=0) {
    if(index==str.size()) {
        cout << initial << " " << endl;
        return;
    }
    
    subString(str, initial, index+1);
    subString(str, initial + str[index], index+1);
}

int main() {
    string str="ABC";
    subString(str);
    return 0;
}
