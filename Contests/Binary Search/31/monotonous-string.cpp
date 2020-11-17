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
	string s;
	cin >> s;
	int ans = 0;
	for(int i=0; i<s.size(); i++) {
		ans += 1;
		cout << i << endl;
		bool inc = false, dec = false;
		while(i+1<s.size()) {
			if(s[i+1] > s[i]) {
				inc = true;
			}
			if(s[i+1] < s[i]) {
				dec = true;
			}
			if(dec && inc) {
				break;
			}
			i+=1;
		}
	}
	cout << ans << endl;

   return 0;
}