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

	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		vector <int> a;
		vector <int> b;
		int i,x;
		int a_total = 0;
		int b_total = 0;
		for(i=0; i<n; i++) {
			cin >> x;
			a.push_back(x);
			a_total += x;
		}
		for(i=0; i<m; i++) {
			cin >> x;
			b.push_back(x);
			b_total+=x;
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end(), greater<int>());
	    int j=0;
		int ans = 0;
		if(a_total > b_total) {
			cout << "0" << endl;
			continue;
		}
		for(int i=0; i<a.size(); i++) {
			a_total += (b[j] - a[i]);
			b_total += (a[i] - b[j]);
			ans++;
			j++;
		    if(a_total > b_total || j>=b.size()) {
			    break;
			}
		}
		if(a_total > b_total) {
			cout << ans << endl;
		}
		else {
			cout << "-1" << endl;
		}
	}

   return 0;
}