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

void bfs(vector<int> nums, vector<vector<int>> &set, vector<int> subset) {
	set.push_back(subset);
	for(int i=0; i<nums.size(); i++) {
		int n  = set.size();
		for(int j=0; j<n; j++) {
			// creating a new subset from the existing one's and copying the elements to it!
			vector<int> copy(set[j]);
			copy.push_back(nums[i]);
			set.push_back(copy);
		}
	}
}

int main(int argc, char* argv[]) {
	abhisheknaiidu();

	vector<int> nums{1,2,3};
	vector<vector<int>> set;
	vector<int> subset;
	bfs(nums, set, subset);

	for(auto x: set) {
		for(auto y: x) {
			cout << y << " ";
		}
		cout << endl;
	} 
   return 0;
}