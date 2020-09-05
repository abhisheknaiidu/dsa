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

void solve(vector<int> nums, vector<vector<int>>&res, vector<int> sub,int start) {
	res.push_back(sub);
	for(int i=start; i<nums.size(); i++) {
		if(i>start && nums[i] == nums[i-1]) {
			cout << "i = " << i << endl;
			continue;
		}
		sub.push_back(nums[i]);
		solve(nums,res,sub,i+1);
		sub.pop_back();
		for(auto x: res) {
			for(auto s: x) {
				cout << s << " ";
			}
			cout << endl;
		}
	}
}

int main(int argc, char* argv[]) {
	abhisheknaiidu();
	vector<int> nums{1,2,2};
	vector<vector<int>> res;
	vector<int> sub;
	solve(nums, res, sub, 0);

	for(auto x: res) {
		for(auto s: x)  {
			cout << s << " ";
		}
		cout << endl;
	}

   return 0;
}