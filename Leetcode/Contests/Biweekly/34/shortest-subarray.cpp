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

	vector<int> v{1,2,3,10,4,2,3,5};
	vector<int> v1{1,2,3};
	int n = v.size();
	vector<int> ans;

	for(int i=1; i<n; i++) {
		if(v[i] > v[i-1]) {
			continue;
		}
		ans.push_back(v[i]);
	}
	is_sorted(ans.begin(), ans.end()) ? cout << ans.size() : cout << ans.size() + 1;

   return 0;
}