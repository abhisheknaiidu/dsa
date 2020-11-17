// #pragma GCC optimize("Ofast")
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

	vector<int> nums{5,-4,5};
	vector<int> multipliers{-5};
	sort(nums.begin(), nums.end());
	sort(multipliers.begin(), multipliers.end());
	int l1 = 0;
	int r1 = nums.size() - 1;
	int l2 = 0;
	int r2 = multipliers.size() - 1;
	int sum = 0;
	while(l1 <= r1 && l2 <= r2) {
		if(nums[l1] * multipliers[l2] >= nums[r1] * multipliers[r2]) {
			sum += nums[l1]*multipliers[l2];
			l1++;l2++;
		}
		else {
		sum += nums[r1]*multipliers[r2];
		r1--;r2--;
		}
	}

	cout << sum << " " << endl;


   return 0;
}