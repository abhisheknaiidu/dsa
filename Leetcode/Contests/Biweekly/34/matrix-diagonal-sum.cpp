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

void sol(vector<vector<int>> v, int s, int e, int &sum, int i) {
	    if(i >= v.size()) return;
		sum += v[i][s] + v[i][e];
		if(s == e) sum = sum - v[i][s];
		sol(v, s+1, e-1, sum, i+1);
}

int main(int argc, char* argv[]) {
	abhisheknaiidu();
	vector<vector<int>> v1{{1,1,1,1}, {1,1,1,1}, {1,1,1,1}, {1,1,1,1}};
	vector <vector<int>> v{{1,2,3}, {4,5,6}, {7,8,9}};
	vector<vector<int>> v2{{5}};
	int n = v[0].size();
	int index;
	int s = 0;
	sol(v, 0, n-1, s, 0);
	cout << s << endl;

	for(auto x: v) {
		for(auto y: x) {
			cout << y << " ";
		}
		cout << endl;
	}

   return 0;
}