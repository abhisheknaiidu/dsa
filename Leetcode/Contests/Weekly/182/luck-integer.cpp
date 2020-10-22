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


	vector<int> arr{4,3,2,2,4,1,3,4,3};
	map<int, int> m;
	// for(auto x: arr) cout << x << endl;
	for(int i=0; i<arr.size(); i++) {
		m[arr[i]]++;
	}
	map <int, int>::reverse_iterator it;
    for(it = m.rbegin(); it != m.rend(); it++) {
        if(it->first == it->second) cout << it->first << " " << it->second<< endl;
      }

    cout << -1;

   return 0;
}