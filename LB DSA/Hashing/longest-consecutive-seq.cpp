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

	vector<int> nums{0,3,7,2,5,8,4,6,0,1};
	int n = nums.size();
	unordered_set <int> hash;
	for(auto num: nums) {
		hash.insert(num);
	}
	int longestStreak = 0;
	for(auto num: nums) {
		if(hash.find(num-1) == hash.end()) {
			int cur_num = num;
			int currentStreak = 1;
			while(hash.find(cur_num + 1) != hash.end()) {
				cur_num++;
				currentStreak++;
			}
			longestStreak = max(longestStreak, currentStreak);
		}
	}
	cout << longestStreak << endl;

   return 0;
}