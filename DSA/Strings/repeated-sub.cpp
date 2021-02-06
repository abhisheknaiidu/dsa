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
	string s = "abcabcabcabca";
	int n = s.size();
	string rep;
	
	for(int i=0; i<n; i++) {
		rep += s[i];
		if(n % rep.size() == 0) {
			if(rep * (n / rep.size()) == s) {
				cout << 1 << endl;
			}
		}
	}
	cout << "0" << endl;
	// vector<int> v(26,0);
 //      for(int i=0; i<s.size(); i++) {
 //        v[s[i] - 97]++;
 //      }
      // v.erase(std::remove(v.begin(), v.end(), 0), v.end());
      // v.shrink_to_fit();

      // for(int i=1; i<v.size(); i++) {
      // 	if(v[i] == v[i-1]) {
      // 		continue;
      // 	}
      // 	// else {
      // 	// 	cout << "0" << endl;
      // 	// }
      // }
      // for(auto x: v) {
      // 	cout << x << endl;
      // }

   return 0;
}