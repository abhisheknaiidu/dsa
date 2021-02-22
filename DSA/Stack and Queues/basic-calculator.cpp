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

int i;

int calculator(string s) {
	int currentNumber = 0;
	int operation = 1;
	int res = 0;

	while(i < s.size()) {
		char currentChar = s[i++];
		if(currentChar == ' ' || isdigit(currentChar)) {
			currentNumber = (currentChar == ' ') ? currentNumber : currentNumber*10 + (currentChar - '0');
		}
		else if(currentChar == '(') {
		   currentNumber = calculator(s);
		}
		else if(currentChar == ')') {
			break;
		}
		else {
			res += currentNumber*operation;
			operation = (currentChar == '+') ? 1 : -1;
			currentNumber = 0;
		}
	}
	return res + (currentNumber*operation);
}

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
	string s = "(1+(4+5+2)-3)+(6+8)";

	cout << calculator(s) << endl;

   return 0;
}