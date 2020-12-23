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

	vector<string> strs{"flower","flow","flight"};
	string prefix = strs[0];
	for(int i=1; i<strs.size(); i++) {
		// while we not find flower in the begining of the string,
		// we'll decrement it!
		while(strs[i].find(prefix) != 0) {
			prefix = prefix.substr(0, prefix.length() - 1);
		}
	}
	cout << prefix << endl;

   return 0;
}