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

	long long int n = 1099511627775;
	int a = ceil(log2(n));
	int b = floor(log2(n));
	cout << a << " " << b << endl;
	// if ceil and floor are equal then we can say it's power of 2 or anything!
	if(ceil(log2(n)) == floor(log2(n))) {
		cout << "YES" << endl;
	}

   return 0;
}