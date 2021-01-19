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

	long long int n;
	cin >> n;
	vector<long long int> v(n);
	long long int i,q;

	for(i=0;i<n;i++) {
		cin >> v[i];
	}

	cin >> q;
	vector<long long int> m(q);
	for(i=0; i<q; i++) {
		cin >> m[i];
	}
	sort(v.begin(), v.end());
	for(i=0; i<q; i++) {
		cout << upper_bound(v.begin(), v.end(),m[i]) - v.begin() << endl;
	}
 
   return 0;
}