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

	string path = "/home//foo/";
	string ans = "";
	int n = path.size();
	if(path[n-1] == '/') path.erase(path.begin() + n-1);
	int m = path.size();
	ans += path[0];
	for(int i=1; i<m;i++) {
		if((path[i-1] == '/') && (path[i] == '/')) continue;
		// cout << i << endl;
		ans += path[i];
		if(path[i] == '.') ans.clear();
	}
	cout << ans << endl;


   return 0;
}