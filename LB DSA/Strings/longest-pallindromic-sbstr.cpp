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
/// Expand Around Center
int helper(string str, int l, int r) {
	while( l >= 0 && r < str.size() && str[l] == str[r]) {
		l--;
		r++;
	}
	return r - l - 1;
}

int main(int argc, char* argv[]) {
	abhisheknaiidu();
	string str = "racecar";
	int s = 0;
	int e = 0;
	int n = str.size();
	for(int i=0; i<n; i++) {
		int len1 = helper(str, i, i); //for handling cases like `racecar`
		int len2 = helper(str, i, i+1); // for handling other normal cases like `abba`
		int len = max(len1, len2);
		if(len > e - s) {
			s = i - (len-1)/2;
			e = i + len/2;
		}
		// cout << len1 << " " << len2 << " " << len << " " <<  e << " " << s << endl;
	}

	string ans = str.substr(s, e+1);
	cout << ans << endl;

   return 0;
}