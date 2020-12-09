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

	unordered_set<int> hash;
	vector<int> nums{1,3,4,2,2};
	int n = nums.size();
	for(int i=0; i<n; i++) {
		if(hash.find(nums[i]) != hash.end()) {
			cout << nums[i] << endl;
		}
		else {
			hash.insert(nums[i]);
		}
	}

   return 0;
}