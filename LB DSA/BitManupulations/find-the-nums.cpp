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

	vector<int> nums{1, 2, 3, 2, 1, 4};
	int sum = 0;
	int n = nums.size();
	for(int i=0; i<n; i++) {
		sum ^= nums[i];
	}
	// find the rightmost bit => 0 1 1 1
	int j = 0;
	int temp = sum;
	while(temp) {
		if(temp&1) {
			break;
		}
		j++;
		temp = temp >> 1; // if 0 1 0 => 0 1
	}
	int mask = 1 << j;
	int first_num = 0;
	for(int i=0; i<n; i++) {
		if((mask & nums[i]) != 0) {
			first_num ^= nums[i];
		}
	}
	int second_num = sum^first_num;
	vector<int> ans;
	ans.push_back(first_num);
	ans.push_back(second_num);
	for(auto x: ans) {
		cout << x << endl;
	}

   return 0;
}