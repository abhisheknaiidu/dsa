// find the length of the smallest contiguous subarray
// whose sum is greater than or equal to ‘S’

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

	vector <int> v{2, 1, 5, 2, 3, 2};
	int s=7;
	int n = v.size();
	int i=0;
	int count=INT_MAX;
	int sum=0;
	for(int j=0; j<n; j++) {
		sum+=v[j];


		while(sum >= s) {
			// cout << sum << " ";
			count = min(count, j-i+1);
			// cout << count << endl;
			sum = sum - v[i];
			i++;
		}
	}
	cout << count;
   return 0;
}

// TC - O(N + N) ~ O(N)
// SC - O(1)