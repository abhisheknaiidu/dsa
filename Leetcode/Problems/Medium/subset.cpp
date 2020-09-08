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
// Time O(N*2^N) 
// Space O(2^N)
void subSets(vector<int> nums, vector<int> sub, vector<vector<int>> &res, int start) {
	res.push_back(sub);
	for(int i=start; i<nums.size(); i++) { // runs O(N) times
		// cout << "start :" << start << " " << "i :" << i << endl;
		sub.push_back(nums[i]);
		// for(auto x: sub) {
		// 	cout << x << " ";
		// }
		// cout << endl;
		subSets(nums, sub, res, i+1); // runs O(2^N) times,
		sub.pop_back();
		// cout << "start :" << start << " " << "i :" << i << endl;
		// cout << "sub :";
		// for(auto x: sub) {
		// 	cout << x << " ";
		// }
		// cout << endl;
	}
}

// void subSets(vector<int> nums,vector<int> sub, vector<vector<int>> &res) {
// 	vector<vector<int>> v;
// 	res.push_back(sub);

// 	for(int i=0; i<nums.size(); i++) {
// 		vector<int> s;
// 		s.push_back(nums[i]);
// 		v.push_back(s);
// 		for(int j=0; j<v.size()-1; j++) {
// 			vector<int> abhi = v[j];
// 			abhi.push_back(nums[i]);
// 			v.push_back(abhi);
// 		}
// 		for(auto x: v) {
// 		for(auto p: x) {
// 			cout << p << " ";
// 		}
// 		 cout << endl;
// 	 }
// 	}

// }


int main(int argc, char* argv[]) {
	abhisheknaiidu();
	vector<int> nums{1,2,3};
	vector <vector<int>> res;
	vector <int> sub;
	subSets(nums, sub, res, 0);

	for(auto x: res) {
		for(auto p: x) {
			cout << p << " ";
		}
		cout << endl;
	}

   return 0;
}