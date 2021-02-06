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

bool isPower2(int n) {
	return ceil(log2(n) == floor(log2(n)));
}

int main(int argc, char* argv[]) {
	abhisheknaiidu();

	int N = 12;
	if(!isPower2(N)) {
		return -1;
	}
	int i = 1;
	int pos = 1;
	while(!(i & N)) {
		i = i << 1;
		pos++;
	}
   return pos;
}