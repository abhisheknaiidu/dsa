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

	vector<int> gain{-4,-3,-2,-1,4,3,2};
	int cur = 0, best = 0;
	for(auto x: gain) {
		cur+=x;
		best = max(best, cur);
	}
	cout << best << endl;
	// vector<int> altitudes;
	// altitudes.push_back(0);
	// altitudes.push_back(gain[0]);
	// int n = gain.size();
	// for(int i=1; i<n; i++) {
	// 	altitudes.push_back(gain[i] + altitudes[i]);
	// }
	// int ans = *max_element(altitudes.begin(), altitudes.end());
	// cout << ans << endl;
	// for(auto x: altitudes) {
	// 	cout << x << endl;
	// }

   return 0;
}