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

	int x = 10, y = 13, l = 2, r = 3;

	int temp = y;
	unordered_set <int> pos;
	int i = 1;
	while(temp) {
		if(temp & 1) {
		    pos.insert(i);
		}
		i++;
		temp = temp >> 1;
	}

	for(int i=l; i<=r; i++) {
		if(pos.find(i) != pos.end()) {
			int mask = 1 << (i-1);
			x = (x | mask);
		}
	}
	cout << x << endl;

	// Easier Approach 🔥
	for(int i=l; i<=r; i++) {
		int mask = 1 << (i-1);
		if(y & mask) x = x | mask;
	}
	cout << x << endl;


   return 0;
}