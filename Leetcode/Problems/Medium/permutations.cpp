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

// void permutationHelper(vector<int> arr, vector<int> currentPermutaion, vector<vector<int>> &permutations) {
// 	if(arr.size() == 0) permutations.push_back(currentPermutaion);
// 	for(int i=0 ; i<arr.size(); i++) {
// 		vector<int> newArr;
// 		newArr.insert(newArr.end(), arr.begin(), arr.begin() + i);
// 		cout << "newArr : ";
// 		for(auto x: newArr) {
// 			cout << x << " ";
// 		}
// 		cout << endl;
// 		newArr.insert(newArr.end(), arr.begin()+ i + 1, arr.end());
// 		for(auto x: newArr) {
// 			cout << x << " ";
// 		}
// 		cout << endl;
// 		vector<int> newPermutation = currentPermutaion;
// 		newPermutation.push_back(arr[i]);
// 		cout << "newPermutation : ";
// 		for(auto x: newPermutation) {
// 			cout << x << " ";
// 		}
// 		cout << endl;
// 		permutationHelper(newArr, newPermutation, permutations); 
// 	}
// }

void solve(vector<int> arr, vector<int> currentPermutation, vector<vector<int>> &permutations) {
	if(currentPermutation.size() == arr.size()) {
		permutations.push_back(currentPermutation);
	}
	for(int i=0; i<arr.size(); i++) {
		if(find(currentPermutation.begin(), currentPermutation.end(), arr[i]) != currentPermutation.end())
		    continue;	
		currentPermutation.push_back(arr[i]);
		for(auto x: currentPermutation) {
			cout << x << " ";
		}
		cout << endl;
		solve(arr, currentPermutation, permutations);
		currentPermutation.pop_back();
		cout << "Backtrack: ";
		for(auto x: currentPermutation) {
			cout << x << " ";
		}
		cout << endl;
	}
}

int main(int argc, char* argv[]) {
	abhisheknaiidu();

   vector <int> arr{1,2,3};
   vector<vector<int>> permutations;
   int n = arr.size();
   solve(arr, {}, permutations);

   for(auto x: permutations) {
   	for(auto per: x) {
   		cout << per << " ";
   	}
   	cout << endl;
   }
   return 0;
}