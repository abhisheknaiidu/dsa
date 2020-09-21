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

// T.C - O(N)
// S.C - min(length of string, unique elements of strings) i.e the size of hashmap

int main(int argc, char* argv[]) {
	abhisheknaiidu();

	string s = "abhisheknaiidu";
	unordered_map <char, int> m;
	vector<int> longest{0,1};
	int startIndex = 0;
	for(int i=0; i<s.size(); i++) {
		if(m.find(s[i]) != m.end()) {
			startIndex = max(startIndex, m[s[i]] + 1);
		}
		if(longest[1] - longest[0] < i + 1 - startIndex) {
			longest = {startIndex, i+1};
		}
		m[s[i]] = i;
	}
	string ans = s.substr(longest[0], longest[1]-longest[0]);
	cout << ans;


   return 0;
}