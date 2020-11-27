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

	string m = "My Name is Abhishek";
	stack <string> words;
	int n = m.size();
	for(int i=0; i<n; i++) {
		string word;
		if(m[i] == ' ') continue;
		while(i < n && m[i] != ' ') {
			word += m[i];
			i++;
		}
		words.push(word);
	}
	string ans;
	while(!words.empty()) {
		ans += words.top();
		words.pop();
		if(!words.empty())
		ans += " ";
	}
	// string a = words.top();

	// cout << ans << endl;

   return 0;
}