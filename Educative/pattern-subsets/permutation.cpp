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

// void bfs(vector<int> nums, vector<vector<int>> &res, queue<vector<int>> permutations) {
// 	permutations.push(vector<int>());
// 	for(int i=0; i<nums.size(); i++) {
// 		int n = permutations.size();

// 		for(int j=0; j<n; i++) {
// 			vector<int> oldPermutation = permutations.first();
// 			permutations.pop();
// 			for(int k=0; k<oldPermutation.size(); k++) {
// 				vector<int> newPermutation(oldPermutation);
// 				newPermutation.insert(newPermutation.begin() + k, nums[i]);
// 				if(newPermutation.size() == nums.size()) {
// 					res.push_back(newPermutation);
// 				}
// 				else {
// 					permutations.push(newPermutation);
// 				}
// 			}
// 		}
// 	}
// }

	vector<int> nums{1,2,3};
	vector<vector<int>> res;
	queue<vector<int>> permutations;
	permutations.push(vector<int>());
	for(int i=0; i<nums.size(); i++) {
		int n = permutations.size();

		for(int j=0; j<n; j++) {
			vector<int> oldPermutation = permutations.front();
			permutations.pop();
			for(int k=0; k<=oldPermutation.size(); k++) {
				vector<int> newPermutation(oldPermutation);
				newPermutation.insert(newPermutation.begin() + k, nums[i]);
				if(newPermutation.size() == nums.size()) {
					res.push_back(newPermutation);
				}
				else {
					permutations.push(newPermutation);
				}
			}
		}
	}
	for(auto x: res) {
		for(auto y: x) {
			cout << y << " ";
		}
		cout << endl;
	}


   return 0;
}