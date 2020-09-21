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


	vector<int> nums{-1,0,1,2,-1,-4};
	vector<vector<int>> ans;
	int target = 0;
	sort(nums.begin(), nums.end());
	for(int i=0; i<nums.size(); i++) {
		int l = i+1;
		int r = nums.size() - 1;

		// To avoid duplicates
        if (i > 0 && nums[i] == nums[i - 1])
        continue;

		while(l<r) {
			int currentSum = nums[i] + nums[l] + nums[r];
			if(currentSum == target) {
				ans.push_back({nums[i], nums[l], nums[r]});
			// removing duplicates
            while (l < r && nums[l] == nums[l + 1]) { 
              l++;
            }
            while (r > l && nums[r] == nums[r - 1]) {
              r--;
            }
				l++;
				r--;
			}

			else if(currentSum < target) {
				l++;
			}
			else if(currentSum > target) { 
				r--;
			}
		}
	}

	for(auto x: ans) {
		for(auto a: x) {
			cout << a << " ";
		}
		cout << endl;
	}

   return 0;
}