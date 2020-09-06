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

void solve(vector<vector<int>> &res, vector<int> candidates, int target, vector<int> sub, int start) {
	if(target == 0) res.push_back(sub);
    if(target<0) return;

	for(int i=start; i<candidates.size(); i++) {
		if(i>start && candidates[i] == candidates[i-1]) continue;
		sub.push_back(candidates[i]);
		solve(res, candidates,target-candidates[i], sub, i+1);
		sub.pop_back();
	}
}

int main(int argc, char* argv[]) {
	abhisheknaiidu();
	vector<int> candidates{2,5,2,1,2};
	vector<vector< int>> res;
	vector<int> sub;
	int target = 5;
	sort(candidates.begin(), candidates.end());
	solve(res, candidates,target, sub, 0);
	for(auto x: res) {
		for(auto s: x) {
			cout << s << " ";
		}
		cout << endl;
	}

   return 0;
}