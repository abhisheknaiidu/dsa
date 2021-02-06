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

	int x;
	cin >> x;
	while(x--) {
		int n;
		cin >> n;
		vector<int> nums;
		for(int i=0; i<n; i++) {
			int num;
			cin >> num;
			nums.push_back(num);
		}
	int max_ending_here = 0;
	int max_so_far = INT_MIN;
	for(int i=0; i<n; i++) {
		max_ending_here = max(max_ending_here + nums[i], nums[i]);
		max_so_far = max(max_so_far, max_ending_here);
	}
	cout << max_so_far << endl;
	}

   return 0;
}