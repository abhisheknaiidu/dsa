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

	vector<int> nums{2, 10, 12, 14};
	int n = nums.size();
	int k = 2;
	int ans = INT_MAX;
	sort(nums.begin(), nums.end());
	for(int i=0; i<=k; i++) {
		// cout << nums[n-k+i-1] << "-" <<  nums[i] << " " << nums[n-k+i-1] - nums[i] << endl;
		ans = min(ans, nums[n-k+i-1] - nums[i]); 
	}
    cout << ans << endl;
   return 0;
}