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

	string s = "22-3*5";
	int currentNumber = 0;
	int n = s.size();
	stack<int> st;
	char operation = '+';
	for(int i=0; i<n; i++) {
		char currentChar = s[i];
		if(isdigit(currentChar)) {
			currentNumber = (currentNumber*10) + (currentChar - '0');
		}
		if(!isdigit(currentChar) && !iswspace(currentChar) || i==n-1) {
			if(operation == '-') st.push(-currentNumber);
			else if(operation == '+') st.push(currentNumber);
			else if(operation == '*') {
				int stackTop = st.top();
				st.pop();
				st.push(stackTop*currentNumber);
			}
			else if(operation == '/') {
				int stackTop = st.top();
				st.pop();
				st.push(stackTop/currentNumber);
			}
			operation = currentChar;
			currentNumber = 0;
		}	
	}
	int res = 0;
	while(!st.empty()) {
		res += st.top();
		st.pop();
	}
	cout << res << endl;

   return 0;
}