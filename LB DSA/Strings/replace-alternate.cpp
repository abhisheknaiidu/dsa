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
	vector<int> v{-5, -2, 5, 2, 4, 7, 1, 8, 3, -8};

	int n = v.size();
	int i = 0;
	int j = n-1;
	while(i <= j) {
		if(v[i] < 0 && v[j] > 0) {
			swap(v[i], v[j]);
			i++;
			j--;
		}
		else if(v[j] < 0) {
			j--;
		}
		else if(v[i] > 0) {
			i++;
		}
		else if(v[i] > 0 && v[j] < 0) {
			i++;
			j--;
		}
	}
	// for either all are positive or all are negative!
	if(i==0 || i==n) {
		for(auto x: v) {
			cout << x << " ";
		}
		cout << endl;
	}
	else {
		int k = 0;
	    while(k < n && i < n ) {
		swap(v[k], v[i]);
		k+=2;
		i++;
	}
	for(auto x: v) cout << x  << " ";
		cout << endl;
	}

   return 0;
}