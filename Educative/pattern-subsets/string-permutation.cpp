#pragma GCC optimize("Ofast")
#include <algorithm>
#include <iostream> 
#include <cstring> 
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


void bfs(string s, vector<string> &res) {

	res.push_back(s);
	for(int i=0; i<s.size(); i++) {
		if(isalpha(s[i])) {
			int n = res.size();

			for(int j=0; j<n; j++) {
				vector<char> copy(res[j].begin(), res[j].end());
				if(isupper(s[i])) {
					cout << s[i] << " ";
					s[i] = islower(s[i]);
					cout << s[i] << endl;
				} 
				else s[i] = isupper(s[i]);

				res.push_back(string(copy.begin(), copy.end()));
			}
		}
	}
}

int main(int argc, char* argv[]) {
	abhisheknaiidu();



	string s = "a57bc";
	vector<string> res;
	res.push_back(s);
	bfs(s, res);

	for(auto x: res) {
		cout << x << endl;
	}

   return 0;
}