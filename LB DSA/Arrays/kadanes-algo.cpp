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

// Time - O(N)
// Space - O(1)
int main(int argc, char* argv[]) {
	abhisheknaiidu();

	vector<int> nums{3,5,-9,1,3,-2,3,4,7,2,-9,6,3,1,-5,4};

	int max_ending_here = 0;
	int max_so_far = 0;
	for(int i=0; i<nums.size(); i++) {
		max_ending_here = max(max_ending_here + nums[i], nums[i]);
		max_so_far = max(max_so_far, max_ending_here);
	}

	cout << max_so_far;


   return 0;
}