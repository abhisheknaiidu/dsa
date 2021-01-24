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

	vector<vector <int>> languages{{1}, {2}, {1,2}};
	int count = 0;
	int ans = 0;
	int n = languages.size();
	for(auto x: languages) {
		for(auto y: x) {
			count++;
		}
		ans = max(ans, count);
		count = 0;
	}
	cout << n - ans << endl;
   return 0;
}