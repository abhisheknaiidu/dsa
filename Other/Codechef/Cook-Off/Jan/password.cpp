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
		string s;
		cin >> s;
		int n = s.size();
		// if((s[0] = '@') || (s[0] ='#') || (s[0] = '%') || (s[0] ='&') 
		// || (s[0] ='?') || (s[n-1] = '@') || (s[n-1] ='#') || (s[n-1] = '%') || (s[n-1] ='&') 
		// || (s[n-1] ='?')) {
		// 	cout << "NO" << endl;
		// continue;
		// }
		// else if(isupper(s[0]) || isupper(s[n-1]) || isdigit(s[0]) || isupper(s[n-1])) {
		// 	cout << "NO" << endl;
		// }
		if(n < 10) {
			cout << "NO" << endl;
			continue;
		}
		bool small = false;
		bool cap = false;
		bool num = false;
		bool special = false;
		for (int i = 1; i <n-1; ++i)
		{
			if(islower(s[i])) small = true;
			if(isupper(s[i])) cap = true;
			if(isdigit(s[i])) num = true;
			if((s[i] = '@') || (s[i] ='#') || (s[i] = '%') || (s[i] ='&') || (s[i] ='?')) {
				special = true;
			}

		}
		if( small && cap && num && special) cout << "YES" << endl;
		else {
			cout << "NO" << endl;
		}
	}

   return 0;
}