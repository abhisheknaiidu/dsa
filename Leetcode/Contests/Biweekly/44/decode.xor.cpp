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

	vector <int> encoded{6,5,4,6};

	// 1,2,3
	int n = encoded.size() + 1;
	int sum = 0;
	for(int i=1; i<=n; ++i) {
		sum ^= i;
	}
	for(int i=n-2; i>=0; i-=2) sum ^= encoded[i];

	vector <int> perm(n);
	perm[0] = sum;

	for(int i=0; i<n-1; i++) {
		perm[i+1] = encoded[i]^perm[i];
	}
	for(auto x: perm) {
		cout << x << endl;
	}

	// cout << sum << endl;

   return 0;
}