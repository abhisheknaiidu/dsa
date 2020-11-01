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

	vector<int> nums{3,1,0,0};
	int ans = INT_MAX, startValue = nums[0];
	for(int i=2; i<nums.size(); i++) {
		startValue = min(startValue, nums[i-2]);
		ans = min(ans, nums[i] + startValue);
	}

    // BRUTE FORCE
	// for(i=0; i<nums.size()-2; i++) {
	// 	for(int k=j; k<nums.size(); k++) {
	// 		cout << nums[i] + nums[k] << endl;
	// 		ans = min(ans, nums[i] + nums[k]);
	// 	}
	// 	j++;
	// }
	cout << ans << endl;

   return 0;
}