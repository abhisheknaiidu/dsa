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

	int t;
	cin >> t;
	while(t--) {
	unordered_map <string, char> m{
		{"0000", 'a'},
		{"0001", 'b'},
		{"0010", 'c'},
		{"0011", 'd'},
		{"0100", 'e'},
		{"0101", 'f'},
		{"0110", 'g'},
		{"0111", 'h'},
		{"1000", 'i'},
		{"1001", 'j'},
		{"1010", 'k'},
		{"1011", 'l'},
		{"1100", 'm'},
		{"1101", 'n'},
		{"1110", 'o'},
		{"1111", 'p'},
	};
	int n;
	cin >> n;
	string s;
	cin >> s;
	string x = "";
	string ans = "";
	for(int i=0; i<n; i++) {
		x+=s[i];
		if(x.size() == 4) {
			ans += m[x];
			x = "";
		}
	}
	cout << ans << endl;
	}

   return 0;
}