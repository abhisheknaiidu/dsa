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

	vector<int> prices{7,6,5,3,2,1};
	int n = prices.size();
	int minPrice = INT_MAX;
	int maxProfit = 0;
	for(int i=0; i<n; i++) {
		if(prices[i] < minPrice) {
			minPrice = prices[i];
		}
		else if(prices[i] - minPrice > maxProfit) {
			maxProfit = prices[i] - minPrice;
		}
	}
	cout << maxProfit << endl;


   return 0;
}