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

	// vector< vector<int>> nums{{1,10}, {2,6}, {7,9}, {3,5}};
    vector< vector<int>> nums{{0,1}, {3,5}, {4,8}, {10,12}, {9,10}};
	sort(nums.begin(), nums.end());
	int n = nums.size();
	vector< vector<int>> mergedNums;
	mergedNums.push_back(nums.front());

	for(int i=1; i<n; i++) {
		vector<int> prevNum = mergedNums.back();
		
		if(nums[i][0] <= prevNum[1]) {
			prevNum[1] = max(prevNum[1], nums[i][1]);
			// cout << prevNum[1] << endl;
			mergedNums.pop_back();
			mergedNums.push_back({prevNum[0], prevNum[1]});
		}
		else {
			mergedNums.push_back({nums[i][0], nums[i][1]});
		}
	}

	for(auto x: mergedNums) {
		cout << x[0] << " " << x[1] << endl;
	}

   return 0;
}