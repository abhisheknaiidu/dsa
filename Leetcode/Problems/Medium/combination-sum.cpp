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

void solve(vector<int> candidates, vector<int> sub, vector<vector<int>>& res, int target, int start ) {

	if(target == 0)
	res.push_back(sub);
    if(target < 0) return;
	for(int i=start; i<candidates.size(); i++) {
		// cout << "start " << start << " " << "i " << i << " " << "target " << target << endl;
		sub.push_back(candidates[i]);
		solve(candidates, sub, res, target-candidates[i], i);

		sub.pop_back(); // is same as sub.erase(sub.end() - 1)
	}
}


int main(int argc, char* argv[]) {
	abhisheknaiidu();

	vector<int> candidates{2,3,5};
	int target = 8;
	vector<vector<int>> res;
	vector<int> sub;
	solve(candidates, sub, res, target, 0);

	for(auto x: res) {
		for(auto s: x) {
			cout << s <<  " ";
		}
		cout << endl;
	}

   return 0;
}