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

	// nums ==> 0,1,0,1,0,1,99
	vector<int> nums{0,1,0,1,0,1,99};
	unordered_map<int, int>m;
	int n = nums.size();
	for(int i=0; i<n; i++) {
		m[nums[i]]++;
	}
	for(auto x: m) {
		if(x.second == 1){
			cout << x.first << endl;
		}
	}

   return 0;
}