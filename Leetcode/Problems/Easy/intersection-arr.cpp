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

	vector <int> nums1{4,9,5};
	vector <int> nums2{9,4,9,8,4};
	unoreder<int> ans;

	for(int i=0; i<nums1.size(); i++) {
		int present = nums1[i];
		for(int j=0; j<nums2.size(); j++) {
			if((present^nums2[j]) == 0) {
				ans.push_back(present);
				break;
			}
		}
	}
	for(auto x: ans) {
		cout << x << " ";
	}
   return 0;
}