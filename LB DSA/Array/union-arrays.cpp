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

	int x;
	cin >> x;
	while(x--) {
		vector<int> nums1;
		vector<int> nums2;
		int n, m;
		cin >> n;
		cin >> m;
		unordered_set<int> hash;
		for(int i=0; i<n; i++) {
			int num;
			cin >> num;
			nums1.push_back(num);
			if(hash.find(num) != hash.end()) {
				continue;
			}
			else {
				hash.insert(num);
			}
		}
		for(int i=0; i<m; i++) {
			int num;
			cin >> num;
			nums2.push_back(num);
		    if(hash.find(num) != hash.end()) {
				continue;
			}
			else {
				hash.insert(num);
			}
		}
		cout << hash.size() << endl;
	}

   return 0;
}