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

	int n=6;
	vector< vector<int>> v;
	for(int i=0; i<n; i++) {
		int a = pow(11,i);
		string s = to_string(a);
		vector<int> sub;
		for(int i=0; i<s.size(); i++) {
			sub.push_back(s[i]);
		}
		v.push_back(sub);
	}

	for(auto x: v) {
		for(auto y: x) {
			cout << y-48 << " ";
		}
		cout << endl;
	}


   return 0;
}