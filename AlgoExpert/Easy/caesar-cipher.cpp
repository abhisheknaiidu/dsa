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

	string s = "abc";
	int n = 2;
	vector<char> v(26);
	int alp = 97;

	for(int i=0; i<26; i++) {
		v[i] = alp;
		// cout << v[i] << endl;
		alp++;
	}

	for(int i=0; i<s.size(); i++) {
		// s[i] = (s[i] - 'a');
		int a = s[i] - 'a';
		int ans = (a + n) % 26;
		cout << v[ans] << endl;
	}

   return 0;
}