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

// 2 pass variant
// T.C - O(N + N) => O(N)
// S.C - O(1)
// bool forDecreasing(vector<int> nums) {
// 	for(int i=0; i<nums.size()-1; i++) {
// 		if(nums[i]<nums[i+1]) return false;
// 	}
// 	return true;
// }

// bool forIncreasing(vector<int> nums) {
// 	for(int i=0; i<nums.size()-1; i++) {
// 		if(nums[i]>nums[i+1]) return false;
// 	}
// 	return true;
// }


int main(int argc, char* argv[]) {
	abhisheknaiidu();


	vector <int> nums{1,2,2,3};

	// bool ans = forIncreasing(nums) || forDecreasing(nums);
    // cout << ans;

    // One Pass 🔥
    // T.C - Same => O(N)
    // S.C - Same => O(1)

    bool increasing = true;
    bool decreasing = true;
    for(int i=0; i<nums.size()-1; i++) {


    	if(nums[i] < nums[i+1]) decreasing = false;

    	if(nums[i] > nums[i+1]) increasing = false;

    }

    bool ans = increasing || decreasing;

    cout << ans; 




   return 0;
}