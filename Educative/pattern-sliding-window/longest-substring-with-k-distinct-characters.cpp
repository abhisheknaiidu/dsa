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

	string s="aaaaaab";
	int n= s.length();

	unordered_map<char,int> m;
	int k=1;
	int i=0, res=0;
	for(int j=0; j<n; j++) {

		m[s[j]]++;
		while(m.size()>k) {
			m[s[i]]--;
			if(m[s[i]] == 0) {
				m.erase(s[i]);
			}
			i++;
		}

		res = max(res, j-i+1);

	}
	// cout << m.size();
	cout << res;


   return 0;
}