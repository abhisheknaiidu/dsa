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

	vector<int> nums{2, 4, 25, 7};
	int k =15;
	sort(nums.begin(), nums.end());
	int n = nums.size();
	int l,r;
	int minSum = INT_MAX;
	for(int i=0; i<n; i++) {
		l = i+1;
		r = n-1;
		while(l<r) {
			if(abs(nums[i] + nums[l] + nums[r] - k) < minSum) {
				minSum = abs(nums[i] + nums[l] + nums[r] - k);
			}
			else if(nums[i] + nums[l] + nums[r] > k) {
				r--;
			}
			else {
				l++;
			}
		}
	}
	cout << minSum << endl;

   return 0;
}