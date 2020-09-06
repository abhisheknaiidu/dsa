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

	string s = "??yw?ipkj?";
	int n = s.size();

	// if(s[0] == '?') s[0] = 'a';
	// if(s[n-1] =='?') s[n-1] = 'a';
	for(int i=0; i<n ; i++) {
		vector<int> v(100,0);
		if(s[i] == '?') {
			if(i>0 && i<n && s[i-1] != '?') v[s[i-1] - 'a']++;
			if(i>0 && i<n && s[i+1] != '?') v[s[i+1] - 'a']++;
			if(i>0 && i<n && s[i+1] != '?') v[(s[i+1] - 'a') - 1]++;
			if(i>0 && i<n && s[i-1] != '?') v[(s[i-1] - 'a') + 1]++;
			int j=0;
			for(; j<26; j++) {
				if(v[j] == 0) break;
			}
			cout << j << endl;
			s[i] = 'a' + j;
		}

	}
	for( char x:s) {
		cout << x << " ";
	}

   return 0;
}