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

	string s = "10#11#12";
	unordered_map <string, char> m;

	for(int i=0; i<26; i++) {
		if(i<9) {
			string a = to_string(i+1);
			m[a] = 97+i;
		}
		else if(i>=9) {
			string b = to_string(i+1) + "#";
			m[b] = 97+i;
		}
	}

	string ans;
	int i=0, n = s.size();
	while(i<n) {
		if(i<n-2 && (s[i] == '2' || s[i] == '1') && s[i+2] == '#') {
			ans.push_back(m[s.substr(i,3)]);
			i+=3;
			continue;
		}
		ans.push_back(m[s.substr(i,1)]);
		i++;
	}

    cout << ans << endl;
	for(auto x: m) {
		cout << x.first << " " << x.second << endl;
	}

   return 0;
}