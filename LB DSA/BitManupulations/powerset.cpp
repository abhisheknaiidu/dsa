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

void filterChars(string &s, int n, vector<string> &ans) {
	int i = 0;
	string res = "";
	while(n) {
		if(n & 1) res+=s[i];
		i++;
		n = n >> 1;
	}
	if(res!="")
	ans.push_back(res);
}

int main(int argc, char* argv[]) {
	abhisheknaiidu();

	string str = "aa";
	int size = str.size();
	int range = (1 << size) - 1;
	vector<string> ans;
	for(int i=0; i<=range; i++) {
		filterChars(str, i, ans);
	}
    sort(ans.begin(), ans.end());
	for(auto x: ans) {
		cout << x << endl;
	}

   return 0;
}