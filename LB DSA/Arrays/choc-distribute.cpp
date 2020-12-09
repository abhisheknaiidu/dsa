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
		int n;
		cin >> n;
		vector<int> nums;
		for(int i=0; i<n; i++){
			int num;
			cin >> num;
			nums.push_back(num);
		}
		int m;
		cin >> m;
		int l = 0;
		int ans = INT_MAX;
		int r=m-1;
		sort(nums.begin(), nums.end());
		while(r < n) {
			ans = min(ans, nums[r] - nums[l]);
			r++;
			l++;
		}
		cout << ans << endl;
	}


   return 0;
}