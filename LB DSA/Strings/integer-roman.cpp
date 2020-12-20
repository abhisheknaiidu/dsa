#pragma GCC optimize("Ofast")
#include <algorithm>
#include <bitset>
#include <deque>
#include <iostream>
#include <iterator>
#include <string>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

void abhisheknaiidu()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int main(int argc, char* argv[]) {
	abhisheknaiidu();
	int num = 2;
	string ans = "";
	while(num) {
        if(num >= 1000) {
          num -= 1000;
          ans += "M";
        }
        else if(num >= 900) {
          num -= 900;
          ans += "CM";
        }
        else if(num >= 500) {
          num -= 500;
          ans += "D";
        }
        else if(num >= 400) {
          num -= 400;
          ans += "CD";
        }
        else if(num >= 100) {
          num -= 100;
          ans += "C";
        }
        else if(num >= 90) {
          num -= 90;
          ans += "XC";
        }
        else if(num >= 50) {
          num -= 50;
          ans += "L";
        }
        else if(num >= 40) {
        	num -= 40;
        	ans += "XL";
        }
        else if(num >= 10) {
        	num -= 10;
        	ans += "X";
        }
        else if( num >= 9) {
        	num -= 9;
        	ans += "IX";
        }
        else if(num >= 5) {
        	num -= 5;
        	ans += "V";
        }
        else if(num >= 4) {
        	num -= 4;
        	ans += "IV";
        }
        else {
        	while(num) {
        		ans += "I";
        		num--;
        	}
        }
      }
      cout << ans << endl;

   return 0;
}