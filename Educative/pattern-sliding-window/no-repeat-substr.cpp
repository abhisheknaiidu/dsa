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
	string s = "abba";
	int n = s.size();
	unordered_map<char, int> m;
	int windowStart = 0;
	int res = INT_MIN;
	for(int windowEnd=0; windowEnd<n; windowEnd++) {
		if(m.find(s[windowEnd]) != m.end()) {
			windowStart = max(windowStart, m[s[windowEnd]] + 1);
		}
		m[s[windowEnd]] = windowEnd;
		// cout << windowEnd << " " << windowStart << endl;
		res = max(res, windowEnd - windowStart + 1);
	}
	cout << res << endl;

   return 0;
}