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

	vector<int> v{1,-1,3,2,-2,-8,1,7,10,23};

	unordered_map<int, int> m;
	int n = v.size();
	int sum = 0;
	int ans = 0;
	int count = 0;
	for(int i=0; i<n; i++) {
		sum += v[i];
		if(sum == 0) {
			ans = i+1;
			count++;
		}
		else {
			if(m.find(sum) != m.end()) {
				ans = max(ans, i - m[sum]);
				count++;
			}
			else {
				m[sum] = i;
			}
		}
	}
	// for(auto x: m) {
	//     cout << x.first << " " << x.second << endl;
	// }
	cout << ans << endl;
	cout << count << endl;

   return 0;
}