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

int calSub(string &s ) {
	int zeroes = count(s.begin(), s.end(), '0');

	if(zeroes % 2 == 0) return s.length();

	else {
		int n = s.length();
		int lastNeg = n-1, firstNeg = 0;
		int ret = 0;
        while(firstNeg < s.length() && s[firstNeg]!='0') firstNeg++;
        while(lastNeg>0 && s[lastNeg]!='0') lastNeg--;

        cout << firstNeg << " " << lastNeg << endl;
		ret = max(ret,max(firstNeg, n-1-firstNeg));
		ret = max(ret,max(lastNeg, n-1-firstNeg));
		return ret;
	}
}

int main(int argc, char* argv[]) {
	abhisheknaiidu();

	vector<int> nums{-1,2,3,-2,0,2,-1,-3,4,-1,2,-4,-5};

	vector<string> sub;
	string s;
	int n = nums.size();
	for(int i=0; i<n; i++) {
		if(nums[i] == 0) {
			if(s.length()) {
				sub.push_back(s);
			}
			s = "";
		}
		else {
			nums[i]>0 ? s.push_back('1') : s.push_back('0'); 
		}
	}
	sub.push_back(s);
	int ans = 0;
	for( auto x: sub ) {
		cout << x << endl;
		ans = max(ans, calSub(x));
	}
	cout << ans;
   return 0;
}