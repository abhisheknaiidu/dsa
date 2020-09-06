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

// Optimized Solution
void solve(int n, vector<vector<int>> &res, vector<int> sub, int start) {
	if(sub.size() == 2)
	res.push_back(sub);
	for(int i=start; i<=n; i++) {
		sub.push_back(i);
		solve(n, res, sub, i+1);
		sub.pop_back();
	}
}

// Or First Making a Vector of Nums and then proceeding the same, but it takes double time!

int main(int argc, char* argv[]) {
	abhisheknaiidu();

	int n = 4;
	vector< vector<int>> res;
	vector <int> sub;
	solve(n, res, sub, 1);
	for(auto x: res) {
		for(auto y: x) {
			cout << y << " ";
		}
		cout << endl;
	}
   return 0;
}