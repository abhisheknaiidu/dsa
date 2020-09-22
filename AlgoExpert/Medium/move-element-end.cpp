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

// T.C - O(N)
// S.C - O(1)

int main(int argc, char* argv[]) {
	abhisheknaiidu();

	vector<int> nums{4,5,6,8,2,1,3,2,3,4};
	int lastElement = 2;
	int l=0;
	int r=nums.size() -1;


	while(l<r) {
		if(nums[l] == lastElement && nums[r] == lastElement) {
			r--;
		}
		else if(nums[l] == lastElement && nums[r] != lastElement) {
			iter_swap(nums.begin() + l, nums.begin() + r);
			l++;
		}
		else if(nums[l] != lastElement && nums[r] == lastElement) {
			r--;
		}
		else if(nums[l] != lastElement && nums[r] != lastElement) {
			l++;
		}
	}

	for(auto x: nums) {
		cout << x << " ";
	}
   return 0;
}