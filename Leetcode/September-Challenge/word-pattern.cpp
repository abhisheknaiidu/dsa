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

	// p = "abba" s = "dog cat cat dog"
	string pattern = "abc";
	string s = "b c a";
	vector<string> v;
    istringstream S(str);
    string word;

    while(getline(S, word, ' ')) {
       v.push_back(word);
    }
	// string word = "";
	// for(int i=0; i<s.size(); i++) {
	// 	if(s[i] == ' ') {
	// 		v.push_back(word);
	// 		word = "";
	// 	}
	// 	else {
	// 		word += s[i];
	// 		if(i == s.size()-1) v.push_back(word);
	// 	}
	// }

	unordered_map <string, int> m;
	for(int i=0; i<pattern.size(); i++) {
		// for handling duplicates
		string c = "char_" + string(1, pattern[i]);
		string w = v[i];

		if(m.find(c) == m.end()) m[c] = i;

		if(m.find(w) == m.end()) m[w] = i;

		if(m[c] != m[w]) cout << false;

		cout << c << " " << w <<  " " << i << endl;

	}
	cout << true;

	// for(auto x: v) {
	// 	cout << x << endl;
	// }

	// int start=0, end=pattern.size()-1;
	// while(start>=end) {
	// 	if(v[start] == v[end] && pattern[start] == pattern[end]) {
	// 		start++;
	// 		end--;
	// 	}
	// 	else {
	// 		cout << false << endl;
	// 	}
	// }
	// cout << true << endl;

   return 0;
}