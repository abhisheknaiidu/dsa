// maximum sum of any contiguous subarray of size ‘k’.

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

	vector <int> v{2, 1, 5, 1, 3, 2};
	int n = v.size();
	int k = 3;
	int ans=0;
	int j=0, res;

	for(int i=0; i<n; i++) {

		ans+=v[i];

		if(i>=k-1) {
	    cout << ans << " ";
		res = max(ans,res);
		ans -= v[j];
		j++;
		}
	}
	cout << res;


   return 0;
}