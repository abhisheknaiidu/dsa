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

	stack<char> st;
	string s = "()[]{}";
	for(auto ch: s) {
		if(!st.empty()) {
			if(ch == ')' && st.top() == '(') {
				st.pop();
			}
			else if(ch == '}' && st.top() == '{') st.pop();
			else if(ch == ']' && st.top() == '[') st.pop();
		}
		else {
			st.push(ch);
		}
	}
	if(st.empty()) cout << true << endl;

   return 0;
}