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
		int n,k,d;
		cin >> n >> k >> d;
		vector<int> a;
		for(int i=0; i<n; i++) {
			int x;
			cin >> x;
			a.push_back(x);
		}

		int total = 0;

		for(auto x: a) {
			total += x;
		}
		if(total < k) {
			cout << "0" << endl;
		}
		else {
		int needs = total / k;
		if(needs > d) {
			cout << d << endl;
		} 
		else {
			cout << needs << endl;
		}
		}
	}

   return 0;
}