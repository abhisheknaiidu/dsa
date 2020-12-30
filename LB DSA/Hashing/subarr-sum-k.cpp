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

	// if negatives are not even allowed, then we can directly do with two
	// pointer's only, otherwise this is the only option!
	vector<int> nums{3,4,7,2,-3,1,4,2,1,0};
	unordered_map<int, int> m;
	int n = nums.size();
	int k = 7;
	int ans = 0;
	int sum = 0;
	m[sum]++;
	for(int i=0; i<n; i++) {
    sum+=nums[i];
    if(m.find(sum - k) != m.end()) {
    // m[ sum - k ] instead of just ans+=1 . 
    // It was because prefix sum can be same because of some negative values 
    // in the array. so out next occuring k will also pair  with those negative values also .
    // ex - [3 4  7    2   -3   1   4   2   1 ]  
    // pre-sum = [3 7 14 16 13 14 18 20 21] 
    // you can see 14 occured twice  because of the subsequence [2 -3 1] their sum is 0. so When you are at the final index with value 1. you have curr - k = 21 - 7 = 14.
    // you check for 14 it has occured twice. so you need to consider subsequences [2 -3 1 4 2 1] and [4 2 1].
      ans+= m[sum - k];
    }
    m[sum]++;
	}
	cout << ans << endl;

   return 0;
}