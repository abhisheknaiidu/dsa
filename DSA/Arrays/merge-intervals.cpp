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

	vector<vector<int>> intervals{{1,3},{2,6},{8,10},{15,18}};
	vector<vector<int>> ans;
	sort(intervals.begin(), intervals.end());
	for(auto x: intervals) {
		cout << x[0] << " " << x[1] << endl;
	}
	int start = intervals[0][0];
	int end = intervals[0][1];
	for(int i=1; i<intervals.size(); i++) {
		auto x = intervals[i];
		if(x[0] < end) {
			end = max(end, x[1]);
		}
		else {
		    ans.push_back({start, end});
		    start = x[0];
		    end = x[1];
		}
	}
	ans.push_back({start, end});
	for(auto x: ans) {
		cout << x[0] << " " << x[1] << endl;
	}

   return 0;
}