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
#include <bitset>

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

	vector<int> arr{1,3,4,8};

	vector< vector<int>> queries{{0,1}, {1,2}, {0,3}, {3,3}};
	vector<int> res;
	vector<int> xorSum{0};

	for(auto x: arr) {
		xorSum.push_back(x^xorSum.back());
	}

	for(auto &q: queries) {
		res.push_back(xorSum[q[0]]^xorSum[q[1]+1]);
	}

    for(auto x: res) {
		cout << x << " ";
	}

   return 0;
}