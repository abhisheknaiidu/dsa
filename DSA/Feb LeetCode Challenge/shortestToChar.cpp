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

	vector<int> ans;
	string s = "loveleetcode";
	char c = 'e';
	int start;
	int n = s.size();
	for(int i=0; i<n;i++) {
		if(c == s[i]) {
			start = i;
			break;
		}
	}
	int x;
	for(int i=0; i<n; i++) {
		if(c == s[i]) start = i;
			x = abs(start - i);
			ans.push_back(x);
	}
	for(int i=n-1;i>=0;i--) {
		if(c == s[i]) start = i;
			
		ans[i] = min(ans[i], abs(start-i));
		}
	for(auto x: ans) cout << x << " ";

   return 0;
}