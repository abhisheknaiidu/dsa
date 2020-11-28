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
	vector<char> v{'A', 'B', 'A', 'A', 'C'};
	int n = v.size();
	int windowStart = 0;
	int res = 0;
	unordered_map<char, int> m;
	for(int windowEnd = 0; windowEnd < n; windowEnd++) {
		char fruit = v[windowEnd];
		m[fruit]++;
		while(m.size() > 2) {
			m[v[windowStart]]--;
			if(m[v[windowStart]] == 0) {
				m.erase(v[windowStart]);
			}
			windowStart++;
			// res = max(res, windowEnd - windowStart + 1);
		}
	}
	for(auto x: m) {
		cout << x.first << " " << x.second << " ";
	}

   return 0;
}