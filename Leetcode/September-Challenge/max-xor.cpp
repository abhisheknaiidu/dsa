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

	vector<int> v{3,10,5,25,2,8};
	int max_sub = 0;
	int max_so_far = 0;
	for(int i=0; i<v.size(); i++) {

		max_sub = max(max_sub^v[i]);
		max_so_far = max(max_so_far, max_sub);

	}
	// int a = 5^25;
	cout << a << endl;
	cout << max_so_far << endl;

   return 0;
}