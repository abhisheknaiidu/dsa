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
	vector<int> takeOutOrders = {17, 8, 24};
	vector<int> dineInOrders = {12, 19, 2};
	vector<int> servedOrders = {17, 24, 12, 19, 8, 2};

	int t[3] = {false};
	int d[3] = {false};
	int l1 = 0;
	int l2 = 0;
	int n = servedOrders.size();
	for(int i=0; i<n; i++) {
		if(servedOrders[i] == takeOutOrders[l1]) {
			t[l1] = true;
			l1++;
		}
		if(servedOrders[i] == dineInOrders[l2]) {
			d[l2] = true;
			l2++;
		}
	}
	// for(auto x: t) {
	// 	cout << x << " ";
	// }


   return 0;
}