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

	unordered_map<char, int> m{{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

	// for(auto x: m) {
	// 	cout << x.first << " " << x.second << endl;
	// }
	string s = "MCMXCIV";
	int ans = 0;
	for(int i=0; i<s.size(); i++) {
		(m[s[i]] < m[s[i+1]]) ? ans-=m[s[i]] : ans+=m[s[i]];
	}
	cout << ans;
   return 0;

}